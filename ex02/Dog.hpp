/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:37:30 by aibn-che          #+#    #+#             */
/*   Updated: 2024/09/16 16:52:08 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "./AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Dog : public AAnimal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(string type);
		Dog (const Dog &d);
		Dog &operator=(const Dog &a);

		void makeSound(void) const;
		string getType(void) const;
	private :
		Brain *brain;
};

#endif
