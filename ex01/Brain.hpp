/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:22:46 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/08 10:28:34 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Brain
{
	protected :
		string ideas[100];

	public :
		Brain(void);
		~Brain(void);
		Brain(const Brain &nw);
		Brain &operator=(const Brain &b);
};

#endif