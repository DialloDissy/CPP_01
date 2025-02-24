/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:24:37 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/24 20:31:15 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    Weapon club = Weapon("katana");
    
    // HumanA blade("blade",club);
    // blade.attack();
    // club.setType("great Sword");
    // blade.attack();

    HumanB blade("blade");
    blade.attack();
    club.setType("great Sword");
    blade.setWeapon(club);
    blade.attack();

    
    return(0);
}