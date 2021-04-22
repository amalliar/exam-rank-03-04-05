/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 02:03:25 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:11:59 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_TARGET_HPP
# define A_TARGET_HPP

# include <iostream>
# include <string>
# include "ASpell.hpp"

class							ASpell;

class							ATarget
{
	public:
		std::string const		&getType(void) const;

		virtual ATarget			*clone(void) const = 0;
		void					getHitBySpell(ASpell const &rSpell) const;

								ATarget(void);
								ATarget(std::string const &rType);
								ATarget(ATarget const &rSrc);
		virtual					~ATarget(void);
		ATarget					&operator=(ATarget const &rRhs);

	protected:
		std::string				_type;
};

#endif // A_TARGET_HPP
