/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 19:51:52 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 19:51:52 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("cat")
{
	std::cout << "Cat def ctor called on " << this->type << std::endl;
}

Cat::Cat( const Cat& cat ) : type(cat.type)
{
	std::cout << "Cat copy ctor called on " << this->type << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat dtor called on " << this->type << std::endl;
}

Cat&	Cat::operator=( const Cat& rhs )
{
	this->type = rhs.type;
	std::cout << "Cat operator= on " << this->type << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MeOoWw " << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}
