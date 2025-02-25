/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:23:29 by sidiallo          #+#    #+#             */
/*   Updated: 2025/02/25 18:24:36 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<fstream>




int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string word = s1;
        
        
        std::ifstream ifs(filename);
        if(!ifs)
            return(1);
        std::ofstream ofs(filename + ".replace");
         if(!ofs) 
            return (1);
            
        while(word != "\0")
        {
            
        }
        
        

            
        ifs.close();
        ofs.close();
    }
    
    return(0);
}