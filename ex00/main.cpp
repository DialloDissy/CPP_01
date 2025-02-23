/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidy <sidy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:46:36 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/23 19:56:37 by sidy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie Zomb;
    Zomb.announce();
    
    Zombie *gims = newZombie("Gims");
    gims->announce();
    
    randomChump("Rick");
    
    Zombie sidy;

    sidy.announce();
    
    delete gims;
    
    return(0);
}