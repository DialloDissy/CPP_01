/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:06:26 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/24 18:18:06 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):weapon(0)
{
    std::cout << "constructor humanB"<< std::endl;
    this->name = name;
    
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (this->weapon)
        std::cout << HumanB::name<< " attacks with their "<< HumanB::weapon->getType() << std::endl;
}


HumanB::~HumanB()
{
    std::cout << "destructor humanB"<< std::endl;
    
}