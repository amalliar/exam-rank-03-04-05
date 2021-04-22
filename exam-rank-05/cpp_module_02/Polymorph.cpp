/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:55:31 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:21:22 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

ASpell			*Polymorph::clone(void) const
{
	return (new Polymorph());
}

				Polymorph::Polymorph(void) :
				ASpell("Polymorph", "turned into critter")
{
}

				Polymorph::Polymorph(Polymorph const &rSrc) :
				ASpell(rSrc._name, rSrc._effects)
{
}

				Polymorph::~Polymorph(void)
{
}

Polymorph		&Polymorph::operator=(Polymorph const &rRhs)
{
	this->_name = rRhs._name;
	this->_effects = rRhs._effects;
	return (*this);
}
