/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 01:35:39 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/22 21:36:11 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"

#include "TargetGenerator.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"

int		main(void)
{
	Warlock richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");
	BrickWall model1;

	Polymorph *polymorph = new Polymorph();
	TargetGenerator tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball *fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget *wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);

	return (0);
}
