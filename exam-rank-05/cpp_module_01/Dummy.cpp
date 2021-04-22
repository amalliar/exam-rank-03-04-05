/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 03:42:17 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:14:36 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

ATarget			*Dummy::clone(void) const
{
	return (new Dummy());
}

				Dummy::Dummy(void) :
				ATarget("Target Practice Dummy")
{
}

				Dummy::Dummy(Dummy const &rSrc) :
				ATarget(rSrc._type)
{
}

				Dummy::~Dummy(void)
{
}

Dummy			&Dummy::operator=(Dummy const &rRhs)
{
	this->_type = rRhs._type;
	return (*this);
}
