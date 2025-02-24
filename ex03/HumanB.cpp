/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:06:26 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/24 20:32:44 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    std::cout << "constructor humanB"<< std::endl;
    this->name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon.getType();
}

void HumanB::attack()
{
    std::cout << HumanB::name<< " attacks with their "<< HumanB::weapon << std::endl;
}


HumanB::~HumanB()
{
    std::cout << "destructor humanB"<< std::endl;
    
}