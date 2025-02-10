/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:44:21 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 14:43:09 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "Wrong_Animal";
	cout << "Default constructor (Wrong Animal)" << endl;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << "Destructor (Wrong Animal)" << endl;
}

WrongAnimal::WrongAnimal(string type)
{
	this->type = type;
	cout << "Constructor (Wrong Animal)" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	cout << "Copy assignment operator called (Wrong Animal)" << endl;
	this->type = a.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = a.type;
}

void WrongAnimal::makeSound(void) const
{
	cout << this->type << " sound!" << endl;
}

string WrongAnimal::getType(void) const
{
	return this->type;
}
