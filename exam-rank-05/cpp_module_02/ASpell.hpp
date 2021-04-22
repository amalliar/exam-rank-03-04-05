/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:51:28 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:10:50 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_SPELL_HPP
# define A_SPELL_HPP

# include <string>
# include "ATarget.hpp"

class						ATarget;

class						ASpell
{
	public:
		std::string			getName(void) const;
		std::string			getEffects(void) const;

		virtual ASpell		*clone(void) const = 0;
		void				launch(ATarget const &rTarget) const;

							ASpell(void);
							ASpell(std::string const &rName, std::string const &rEffects);
							ASpell(ASpell const &rSrc);
		virtual				~ASpell(void);
		ASpell				&operator=(ASpell const &rRhs);

	protected:
		std::string			_name;
		std::string			_effects;
};

#endif // A_SPELL_HPP
