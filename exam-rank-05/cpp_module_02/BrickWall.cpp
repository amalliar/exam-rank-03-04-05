/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 03:42:17 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:22:23 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

ATarget			*BrickWall::clone(void) const
{
	return (new BrickWall());
}

				BrickWall::BrickWall(void) :
				ATarget("Inconspicuous Red-brick Wall")
{
}

				BrickWall::BrickWall(BrickWall const &rSrc) :
				ATarget(rSrc._type)
{
}

				BrickWall::~BrickWall(void)
{
}

BrickWall		&BrickWall::operator=(BrickWall const &rRhs)
{
	this->_type = rRhs._type;
	return (*this);
}
