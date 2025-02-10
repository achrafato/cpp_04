/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:22:30 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 15:25:11 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"
#include <string>

Brain::Brain(void)
{
	cout << "Default Constructor (Brain)" << endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = "brain" + std::to_string(i + 1);
		i++;
	}
}

Brain::~Brain()
{
	cout << "Destructor (Brain)" << endl;
}

Brain::Brain(const Brain &nw)
{
	cout << "copy constructor (Brain)" << endl;
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = nw.ideas[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &b)
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = b.ideas[i];
		i++;
	}
	return *this;
}