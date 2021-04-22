/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:55:31 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:16:08 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

ASpell			*Fwoosh::clone(void) const
{
	return (new Fwoosh());
}

				Fwoosh::Fwoosh(void) :
				ASpell("Fwoosh", "fwooshed")
{
}

				Fwoosh::Fwoosh(Fwoosh const &rSrc) :
				ASpell(rSrc._name, rSrc._effects)
{
}

				Fwoosh::~Fwoosh(void)
{
}

Fwoosh			&Fwoosh::operator=(Fwoosh const &rRhs)
{
	this->_name = rRhs._name;
	this->_effects = rRhs._effects;
	return (*this);
}
