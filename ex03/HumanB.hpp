/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:18:30 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/24 20:28:53 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
  public:
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon weapon);
  
  private:
    std::string weapon;
    std::string name;


};

#endif