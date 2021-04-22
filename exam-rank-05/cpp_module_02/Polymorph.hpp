/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:55:44 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:20:46 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <string>
# include "ASpell.hpp"

class			ASpell;

class			Polymorph : public ASpell
{
	public:
	ASpell		*clone(void) const;

				Polymorph(void);
				Polymorph(Polymorph const &rSrc);
				~Polymorph(void);
	Polymorph	&operator=(Polymorph const &rRhs);
};

#endif // POLYMORPH_HPP
