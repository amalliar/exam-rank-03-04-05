/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:03:32 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:13:12 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

std::string const		&ATarget::getType(void) const
{
	return (this->_type);
}

void					ATarget::getHitBySpell(ASpell const &rSpell) const
{
	std::cout << this->_type << " has been " << rSpell.getEffects() << "!" << std::endl;
}

						ATarget::ATarget(void)
{
}

						ATarget::ATarget(std::string const &rType) :
						_type(rType)
{
}

						ATarget::ATarget(ATarget const &rSrc) :
						_type(rSrc._type)
{
}

						ATarget::~ATarget(void)
{
}

ATarget					&ATarget::operator=(ATarget const &rRhs)
{
	this->_type = rRhs._type;
	return (*this);
}
