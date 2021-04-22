/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:20:41 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:28:50 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

std::string const	&Warlock::getName(void) const
{
	return (this->_name);
}

std::string const	&Warlock::getTitle(void) const
{
	return (this->_title);
}

void				Warlock::setTitle(std::string const &rTitle)
{
	this->_title = rTitle;
}

void				Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void				Warlock::learnSpell(ASpell *pSpell)
{
	this->_spellBook.learnSpell(pSpell);
}

void				Warlock::forgetSpell(std::string const &rName)
{
	this->_spellBook.forgetSpell(rName);
}

void				Warlock::launchSpell(std::string const &rName, ATarget const &rTarget) const
{
	ASpell		*spell = this->_spellBook.createSpell(rName);

	if (spell)
	{
		spell->launch(rTarget);
		delete spell;
	}
}

					Warlock::Warlock(std::string const &rName, std::string const &rTitle) :
					_name(rName),
					_title(rTitle)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

					Warlock::~Warlock(void)
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

					Warlock::Warlock(void)
{
}

					Warlock::Warlock(Warlock const &rSrc)
{
	static_cast<void>(rSrc);
}

Warlock				&Warlock::operator=(Warlock const &rRhs)
{
	static_cast<void>(rRhs);
	return (*this);
}
