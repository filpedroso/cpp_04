/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpedroso <fpedroso@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 20:32:38 by fpedroso          #+#    #+#             */
/*   Updated: 2026/07/02 20:32:38 by fpedroso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("Wrong cat")
{
	std::cout << "Wrong Cat def ctor called on " << this->type << std::endl;
}

WrongCat::WrongCat( const WrongCat& wcat ) : type(wcat.type)
{
	std::cout << "Wrong Cat copy ctor called on " << this->type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat dtor called on " << this->type << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& rhs )
{
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "MeOoWw " << std::endl;
}

std::string	WrongCat::getType() const
{
	return (this->type);
}
