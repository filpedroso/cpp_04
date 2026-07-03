/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:32:33 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 20:32:33 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong animal")
{
	std::cout << "Wrong Animal def ctor called on " << this->type << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& wanim ) : type(wanim.type)
{
	std::cout << "Wrong Animal copy ctor called on " << this->type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal dtor called on " << this->type << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& rhs )
{
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "boooOOooOo " << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
