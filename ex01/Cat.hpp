/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:40:46 by aibn-che          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:05 by aibn-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "./Animal.hpp"
#include "./Brain.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(string type);
		Cat &operator=(const Cat &a);
		Cat (const Cat &a);

		void makeSound(void) const;
		string getType(void) const;
	private:
		Brain	*brain;
};

#endif
