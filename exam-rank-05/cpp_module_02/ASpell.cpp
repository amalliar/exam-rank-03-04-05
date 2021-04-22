/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:51:52 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:10:27 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

std::string		ASpell::getName(void) const
{
	return (this->_name);
}

std::string		ASpell::getEffects(void) const
{
	return (this->_effects);
}

void			ASpell::launch(ATarget const &rTarget) const
{
	rTarget.getHitBySpell(*this);
}

				ASpell::ASpell(void)
{
}

				ASpell::ASpell(std::string const &rName, std::string const &rEffects) :
				_name(rName),
				_effects(rEffects)
{
}

				ASpell::ASpell(ASpell const &rSrc) :
				_name(rSrc._name),
				_effects(rSrc._effects)
{
}

				ASpell::~ASpell(void)
{
}

ASpell			&ASpell::operator=(ASpell const &rRhs)
{
	this->_name = rRhs._name;
	this->_effects = rRhs._effects;
	return (*this);
}
