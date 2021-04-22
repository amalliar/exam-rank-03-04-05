/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 04:59:08 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:41:31 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

void			SpellBook::learnSpell(ASpell *pSpell)
{
	std::pair<std::string, ASpell *>	entry(pSpell->getName(), pSpell->clone());

	if (this->_spells.insert(entry).second == false)
		delete entry.second;
}

void			SpellBook::forgetSpell(std::string const &rName)
{
	this->_spells.erase(rName);
}

ASpell			*SpellBook::createSpell(std::string const &rName) const
{
	try
	{
		return (this->_spells.at(rName)->clone());
	}
	catch (...)
	{
		return (NULL);
	}
}

				SpellBook::SpellBook(void)
{
}

				SpellBook::~SpellBook(void)
{
}

				SpellBook::SpellBook(SpellBook const &rSrc)
{
	static_cast<void>(rSrc);
}

SpellBook		&SpellBook::operator=(SpellBook const &rRhs)
{
	static_cast<void>(rRhs);
	return (*this);
}
