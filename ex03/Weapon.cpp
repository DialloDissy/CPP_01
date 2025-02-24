/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:06:47 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/24 20:33:40 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type):type(type)
{
    std::cout << " constructor weapon" << std::endl;
}


std::string Weapon::getType()const
{
    return(this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

    