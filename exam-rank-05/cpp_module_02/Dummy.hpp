/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 03:42:13 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:13:52 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class				ATarget;

class				Dummy : public ATarget
{
	public:
		ATarget		*clone(void) const;

					Dummy(void);
					Dummy(Dummy const &rSrc);
					~Dummy(void);
		Dummy		&operator=(Dummy const &rRhs);
};

#endif // DUMMY_HPP
