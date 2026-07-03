/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:56:29 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 19:56:29 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("dog")
{
	std::cout << "Dog def ctor called on " << this->type << std::endl;
}

Dog::Dog( const Dog& dog ) : type(dog.type)
{
	std::cout << "Dog copy ctor called on " << this->type << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog dtor called on " << this->type << std::endl;
}

Dog&	Dog::operator=( const Dog& rhs )
{
	this->type = rhs.type;
	std::cout << "Dog operator= on " << this->type << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Au AuuUu " << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
}
