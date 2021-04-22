/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:35:39 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:44:59 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

#include "Fwoosh.hpp"

#include "Dummy.hpp"

int main(void)
{
	Warlock richard("Richard", "the Titled");

  	Dummy bob;
  	Fwoosh *fwoosh = new Fwoosh();

  	richard.learnSpell(fwoosh);

  	richard.introduce();
  	richard.launchSpell("Fwoosh", bob);

  	richard.forgetSpell("Fwoosh");
  	richard.launchSpell("Fwoosh", bob);

	return (0);
}
