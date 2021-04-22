/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:55:44 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:15:28 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <string>
# include "ASpell.hpp"

class			ASpell;

class			Fwoosh : public ASpell
{
	public:
	ASpell		*clone(void) const;

				Fwoosh(void);
				Fwoosh(Fwoosh const &rSrc);
				~Fwoosh(void);
	Fwoosh		&operator=(Fwoosh const &rRhs);
};

#endif // FWOOSH_HPP
