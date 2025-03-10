/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:03:18 by sidy              #+#    #+#             */
/*   Updated: 2025/02/24 17:21:57 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string A = "HI THIS IS BRAIN";
    std::string* stringPTR   = &A;
    std::string& stringREF = A;

    std::cout <<&A<< std::endl;
    std::cout <<&stringREF<< std::endl;
    std::cout <<stringPTR<< std::endl;
    
    std::cout <<A<< std::endl;
    std::cout <<stringREF<< std::endl;
    std::cout <<*stringPTR<< std::endl;
    
    
    
    return(0);
}