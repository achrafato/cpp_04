/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:22:30 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/07 12:53:07 by aibn-che         ###   ########.fr       */
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
	*this = nw;
}

Brain &Brain::operator=(const Brain &b)
{
	int i = 0;
	if (this != &b)
	{
		while (i < 100)
		{
			this->ideas[i] = b.ideas[i];
			i++;
		}
	}
	return *this;
}
