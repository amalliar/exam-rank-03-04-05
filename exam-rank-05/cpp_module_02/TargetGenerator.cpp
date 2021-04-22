/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:23:08 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:42:39 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

void			TargetGenerator::learnTargetType(ATarget *pTarget)
{
	std::pair<std::string, ATarget *>	entry(pTarget->getType(), pTarget->clone());

	if (this->_targets.insert(entry).second == false)
		delete entry.second;
}

void			TargetGenerator::forgetTargetType(std::string const &rType)
{
	this->_targets.erase(rType);
}

ATarget			*TargetGenerator::createTarget(std::string const &rType) const
{
	try
	{
		return (this->_targets.at(rType)->clone());
	}
	catch (...)
	{
		return (NULL);
	}
}

				TargetGenerator::TargetGenerator(void)
{
}

				TargetGenerator::~TargetGenerator(void)
{
}

				TargetGenerator::TargetGenerator(TargetGenerator const &rSrc)
{
	static_cast<void>(rSrc);
}

TargetGenerator	&TargetGenerator::operator=(TargetGenerator const &rRhs)
{
	static_cast<void>(rRhs);
	return (*this);
}
