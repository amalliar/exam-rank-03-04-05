/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 04:58:44 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:30:10 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELL_BOOK_HPP
# define SPELL_BOOK_HPP

#include <string>
#include <map>
#include <utility>
#include <cstddef>
#include "ASpell.hpp"

class									ASpell;

class									SpellBook
{
	public:
		void							learnSpell(ASpell *pSpell);
		void							forgetSpell(std::string const &rName);
		ASpell							*createSpell(std::string const &rName) const;

										SpellBook(void);
										~SpellBook(void);

	private:
		std::map<std::string, ASpell *>	_spells;

										SpellBook(SpellBook const &rSrc);
		SpellBook						&operator=(SpellBook const &rRhs);
};

#endif // SPELL_BOOK_HPP
