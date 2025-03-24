/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:24:37 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/24 15:52:02 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("katana");
        std::cout << club.getType() << std::endl;

        HumanA blade("blade",club);
        blade.attack();
        club.setType("great Sword");
        blade.attack();
        std::cout << club.getType() << std::endl;
    }

    {
        Weapon club = Weapon("katana");
        
        HumanB blade("blade");
        blade.setWeapon(club);
        blade.attack();
        club.setType("great Sword");
        blade.attack();
    }

    
    return(0);
}