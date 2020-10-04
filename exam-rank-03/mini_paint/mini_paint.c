#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct	s_draw_zone
{
	int			width;
	int			height;
	char		bg_char;
	char		*buff;
}				t_draw_zone;

typedef struct	s_circle
{
	char		type;
	float		x;
	float		y;
	float		radius;
	char		fg_char;
}				t_circle;

bool			is_inner_point(t_circle *circle, int x, int y);
bool			is_outer_point(t_circle *circle, int x, int y);
int				draw_image(char *path);
int				ft_strlen(char *str);
int				init_draw_zone(FILE *file, t_draw_zone *dzone);
void			draw_empty_circle(t_draw_zone *dzone, t_circle *circle);
void			draw_filled_circle(t_draw_zone *dzone, t_circle *circle);
void			flush_draw_zone(t_draw_zone *dzone);
void			ft_puts(char *str);

int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!draw_image(argv[1]))
			return (0);
		ft_puts("Error: Operation file corrupted");
	}
	else
		ft_puts("Error: argument");
	return (1);
}

int				draw_image(char *path)
{
	FILE			*file;
	t_draw_zone		dzone;
	t_circle		circle;
	int				ret;

	if (!(file = fopen(path, "r")) || init_draw_zone(file, &dzone))
		return (1);
	while ((ret = fscanf(file, "%c %f %f %f %c\n", &circle.type, &circle.x, &circle.y, &circle.radius, &circle.fg_char)) != EOF)
	{
		if (ret < 5 || circle.radius <= 0 || (circle.type != 'c' && circle.type != 'C'))
			return (1);
		if (circle.type == 'c')
			draw_empty_circle(&dzone, &circle);
		if (circle.type == 'C')
			draw_filled_circle(&dzone, &circle);
	}
	flush_draw_zone(&dzone);
	return (0);
}

int				init_draw_zone(FILE *file, t_draw_zone *dzone)
{
	if ((fscanf(file, "%d %d %c\n", &dzone->width, &dzone->height, &dzone->bg_char) < 3) || \
		(dzone->width <= 0 || dzone->width > 300 || dzone->height <= 0 || dzone->height > 300) || 
		(!(dzone->buff = malloc(dzone->width * dzone->height))))
		return (1);
	memset(dzone->buff, dzone->bg_char, dzone->width * dzone->height);
	return (0);
}

void			draw_empty_circle(t_draw_zone *dzone, t_circle *circle)
{
	for (int x = 0; x < dzone->width; ++x)
		for (int y = 0; y < dzone->height; ++y)
			if (is_outer_point(circle, x, y))
				*(dzone->buff + y * dzone->width + x) = circle->fg_char;
}

void			draw_filled_circle(t_draw_zone *dzone, t_circle *circle)
{
	for (int x = 0; x < dzone->width; ++x)
		for (int y = 0; y < dzone->height; ++y)
			if (is_inner_point(circle, x, y))
				*(dzone->buff + y * dzone->width + x) = circle->fg_char;
}

bool			is_inner_point(t_circle *circle, int x, int y)
{
	return (sqrtf(powf(x - circle->x, 2) + powf(y - circle->y, 2)) <= circle->radius);
}

bool			is_outer_point(t_circle *circle, int x, int y)
{
	return (is_inner_point(circle, x, y) && \
			circle->radius - sqrtf(powf(x - circle->x, 2) + powf(y - circle->y, 2)) < 1);
}

void			flush_draw_zone(t_draw_zone *dzone)
{
	for (int y = 0; y < dzone->height; ++y)
	{
		write(STDOUT_FILENO, dzone->buff + y * dzone->width, dzone->width);
		write(STDOUT_FILENO, "\n", 1);
	}
	free(dzone->buff);
}

void			ft_puts(char *str)
{
	write(STDOUT_FILENO, str, ft_strlen(str));
	write(STDOUT_FILENO, "\n", 1);
}

int				ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*str)
		++str;
	return (str - ptr);
}
