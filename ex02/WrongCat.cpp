/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:41:45 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/07 15:06:10 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "Wrong-Cat";
	cout << "Default constructor (Wrong-Cat)" << endl;
}

WrongCat::~WrongCat(void)
{
	cout << "Destructor (Wrong-Cat)" << endl;
}

WrongCat::WrongCat(string type)
{
	this->type = type;
	cout << "Constructor (Wrong-Cat)" << endl;
}

WrongCat &WrongCat::operator=(const WrongCat &a)
{
    cout << "Copy assignment operator called (Wrong Cat)" << endl;
	this->type = a.type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &w)
{
	this->type = w.type;
}

void WrongCat::makeSound(void) const
{
	cout << "Wrong-Cat sound!" << endl;
}

string WrongCat::getType(void) const
{
	return this->type;
}
