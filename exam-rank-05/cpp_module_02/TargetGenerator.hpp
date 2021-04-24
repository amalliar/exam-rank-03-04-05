/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalliar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 05:18:17 by amalliar          #+#    #+#             */
/*   Updated: 2021/04/24 11:34:15 by amalliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGET_GENERATOR_HPP
# define TARGET_GENERATOR_HPP

# include <string>
# include <map>
# include <utility>
# include <cstddef>
# include "ATarget.hpp"

class										TargetGenerator
{
	public:
		void								learnTargetType(ATarget *pTarget);
		void								forgetTargetType(std::string const &rType);
		ATarget								*createTarget(std::string const &rType) const;

											TargetGenerator(void);
											~TargetGenerator(void);
	private:
		std::map<std::string, ATarget *>	_targets;

											TargetGenerator(TargetGenerator const &rSrc);
		TargetGenerator						&operator=(TargetGenerator const &rRhs);
};

#endif // TARGET_GENERATOR_HPP
