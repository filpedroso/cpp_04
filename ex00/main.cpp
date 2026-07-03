/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:10:07 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 20:10:07 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n=== CONSTRUCTION ===" << std::endl;
    const Animal*       meta = new Animal();
    const Animal*       dog  = new Dog();
    const Animal*       cat  = new Cat();
    const WrongAnimal*  wmeta = new WrongAnimal();
    const WrongAnimal*  wcat  = new WrongCat();

    std::cout << "\n=== TYPES ===" << std::endl;
    std::cout << "meta type: " << meta->getType() << std::endl;
    std::cout << "dog type:  " << dog->getType()  << std::endl;
    std::cout << "cat type:  " << cat->getType()  << std::endl;

    std::cout << "\n=== SOUNDS - CORRECT (virtual) ===" << std::endl;
    meta->makeSound();  // Animal sound
    dog->makeSound();   // Dog sound, not Animal
    cat->makeSound();   // Cat sound, not Animal

    std::cout << "\n=== SOUNDS - WRONG (no virtual) ===" << std::endl;
    wmeta->makeSound(); // WrongAnimal sound
    wcat->makeSound();  // WrongAnimal sound — the whole point

    std::cout << "\n=== COPY SEMANTICS ===" << std::endl;
    Dog  d1;
    Dog  d2(d1);
    Cat  c1;
    Cat  c2(c1);
    d2 = d1;
    c2 = c1;

    std::cout << "\n=== POLYMORPHIC ARRAY ===" << std::endl;
    const Animal* zoo[6];
    zoo[0] = new Dog();
    zoo[1] = new Cat();
    zoo[2] = new Dog();
    zoo[3] = new Cat();
    zoo[4] = new Dog();
    zoo[5] = new Cat();

    for (int i = 0; i < 6; i++)
        zoo[i]->makeSound();

    std::cout << "\n=== CLEANUP ARRAY ===" << std::endl;
    for (int i = 0; i < 6; i++)
        delete zoo[i];

    std::cout << "\n=== CLEANUP ORIGINALS ===" << std::endl;
    delete meta;
    delete dog;
    delete cat;
    delete wmeta;
    delete wcat;

    std::cout << "\n=== STACK OBJECTS ===" << std::endl;
    {
        Animal  a;
        Dog     d;
        Cat     c;
    } // destructors fire here, reverse order

    return 0;
}

/* int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

return 0;
} */
