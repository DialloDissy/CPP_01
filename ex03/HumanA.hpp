/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:38:51 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/24 16:30:41 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
  public:
    HumanA(std::string name,Weapon& weapon);
    void attack();
    ~HumanA();
  
  private:
    Weapon* weapon;
    std::string name;


};

#endif