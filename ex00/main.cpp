/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:46:36 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/20 19:18:59 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie Zomb;
    
    Zomb.announce();
    
    Zombie *gims = Zomb.newZombie("Gims");
    gims->announce();
    
    Zomb.randomChump("Rick");
    
    Zombie sidy;

    sidy.announce();
    
    delete gims;
    
    return(0);
}