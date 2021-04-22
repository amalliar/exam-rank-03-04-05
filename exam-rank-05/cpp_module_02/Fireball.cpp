/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:55:31 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:20:09 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

ASpell			*Fireball::clone(void) const
{
	return (new Fireball());
}

				Fireball::Fireball(void) :
				ASpell("Fireball", "burnt to a crisp")
{
}

				Fireball::Fireball(Fireball const &rSrc) :
				ASpell(rSrc._name, rSrc._effects)
{
}

				Fireball::~Fireball(void)
{
}

Fireball		&Fireball::operator=(Fireball const &rRhs)
{
	this->_name = rRhs._name;
	this->_effects = rRhs._effects;
	return (*this);
}
