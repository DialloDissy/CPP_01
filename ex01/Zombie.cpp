/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:20:31 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/23 19:08:49 by sidy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout <<"constructor creates "<< std::endl;
}

std::string Zombie::getName()const
{
    return(this->name);
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::string name;
    name = Zombie::getName();
    if(name.empty())
        std::cout << "name: ";
    else
    {
        Zombie::setName(name);
        std::cout << name << ": ";
    }
    std::cout << "BraiiiiiiinnnzzzZ..."<< std::endl;
}




Zombie::~Zombie()
{
    std::cout <<"destructor created"<< std::endl;
}