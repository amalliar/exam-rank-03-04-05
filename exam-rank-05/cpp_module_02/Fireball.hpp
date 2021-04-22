/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:55:44 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:19:31 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <string>
# include "ASpell.hpp"

class			ASpell;

class			Fireball : public ASpell
{
	public:
	ASpell		*clone(void) const;

				Fireball(void);
				Fireball(Fireball const &rSrc);
				~Fireball(void);
	Fireball	&operator=(Fireball const &rRhs);
};

#endif // FIREBALL_HPP
