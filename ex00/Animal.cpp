/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:42:41 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 19:42:41 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("animal")
{
	std::cout << "Animal def ctor called on " << this->type << std::endl;
}

Animal::Animal( const Animal& anim ) : type(anim.type)
{
	std::cout << "Animal copy ctor called on " << this->type << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal dtor called on " << this->type << std::endl;
}

Animal&	Animal::operator=( const Animal& rhs )
{
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "boooOOooOo " << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
