/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 03:42:13 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:21:51 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICK_WALL_HPP
# define BRICK_WALL_HPP

# include "ATarget.hpp"

class				ATarget;

class				BrickWall : public ATarget
{
	public:
		ATarget		*clone(void) const;

					BrickWall(void);
					BrickWall(BrickWall const &rSrc);
					~BrickWall(void);
		BrickWall	&operator=(BrickWall const &rRhs);
};

#endif // BRICK_WALL_HPP
