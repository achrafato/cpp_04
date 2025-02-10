/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:52:55 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/08 10:31:05 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"


int main()
{
	int k = 0;
	const Animal *arr[100];
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	while (k < 4)
	{
		if (!(k / 2))
			arr[k++] = new Dog();
		else 
			arr[k++] = new Cat();
	}

	cout << "Type == " << arr[0]->getType() << endl;
	cout << "Type == " << arr[2]->getType() << endl;

	k = 0;
	while (k < 4)
	{
		delete arr[k++];
	}
	delete i;
	delete j;

	return 0;
}
