/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:06:47 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/24 16:28:48 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon& weapon)
{
    std::cout << "constructor humanA"<< std::endl;
    
    this->weapon = &weapon;
    this->name = name;

}

void HumanA::attack()
{
    std::cout << HumanA::name<< " attacks with their "<< HumanA::weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "destructor humanA"<< std::endl;
    
}