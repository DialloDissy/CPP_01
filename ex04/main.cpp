/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sidiallo <sidiallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 15:23:29 by sidiallo          #+#    #+#             */
/*   Updated: 2025/03/26 15:37:39 by sidiallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include<fstream>
#include<string>


std::string replaceString(std::string const s1, std::string const s2 , std::string line)
{
    std::string newLine;
    size_t pos = 0;
    size_t found;
    
    while ((found = line.find(s1, pos)) != std::string::npos) {
        newLine += line.substr(pos, found - pos);
        newLine += s2;                      
        pos = found + s1.length();
    }

    newLine += line.substr(pos);

    return (newLine);
}


int main(int ac, char **av)
{
    if(ac == 4)
    {
        std::string filename = av[1];
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::string line;
        
        if(s1 == "\0")
            return(1);
        std::ifstream ifs(filename.c_str());
        if(!ifs)
            return(1);
            
        std::ofstream ofs((filename + ".replace").c_str());
         if(!ofs) 
            return (1);
        
        while(std::getline(ifs,line))
        {
            line  = replaceString(s1,s2,line);
            ofs << line + "\n";
        }   
        ifs.close();
        ofs.close();
    }
    
    return(0);
}