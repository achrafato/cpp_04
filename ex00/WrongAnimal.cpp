/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:44:21 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 14:39:14 by aibn-che         ###   ########.fr       */
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
	cout << "Constructor (Wrong Animal)" << endl;
	this->type = type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
	cout << "Copy assignment operator called (Wrong Animal)" << endl;
	this->type = a.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
	cout << "Copy Constructor " << this->type << endl;
	this->type = c.type;	
}

void WrongAnimal::makeSound(void) const
{
	cout << "Wrong-Animal sound!" << endl;
}

string WrongAnimal::getType(void) const
{
	return this->type;
}
