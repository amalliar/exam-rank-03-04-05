/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:20:01 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/24 11:34:44 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include <map>
# include "ASpell.hpp"
# include "SpellBook.hpp"
# include "ATarget.hpp"

class									ASpell;
class									ATarget;

class									Warlock
{
	public:
		std::string const				&getName(void) const;
		std::string const				&getTitle(void) const;
		void							setTitle(std::string const &rTitle);

		void							introduce(void) const;
		void							learnSpell(ASpell *pSpell);
		void							forgetSpell(std::string const &rName);
		void							launchSpell(std::string const &rName, ATarget const &rTarget) const;

										Warlock(std::string const &rName, std::string const &rTitle);
										~Warlock(void);

	private:
		std::string						_name;
		std::string						_title;
		SpellBook						_spellBook;

										Warlock(void);
										Warlock(Warlock const &rSrc);
		Warlock							&operator=(Warlock const &rRhs);
};

#endif // WARLOCK_HPP
