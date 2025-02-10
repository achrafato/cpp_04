/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:52:55 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/08 10:32:24 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Dog.hpp"
#include "./Cat.hpp"
#include "./WrongCat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	const AAnimal *a[4] = {
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat(),
	};

	cout <<  a[0]->getType() << endl;
	cout <<  a[2]->getType() << endl;
	
	int k = 0;
	while (k < 4)
	{
		delete a[k++];
	}
	delete i;
	delete j;

	return 0;
}
