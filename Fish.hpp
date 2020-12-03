/*Name: Darren Frank
 *Date: 17th feburary 2020
 *project: oop and inheritance
 */

#ifndef FISH_HPP	//if Fish_hpp not defined 
#define FISH_HPP	//define fish
#include "Animal.hpp"	//include header Animal.hpp

class Fish : public Animal	//declaration of class fish giving it access to Animal class
{
	public:			//constructors of class
		Fish();		
		Fish(std::string name, bool domestic=false, bool predator=false);
		bool isVenomous() const;
		void setVenomous();
	
	private:		//data memebers of class
		bool venomous_;
};
#endif				//end if 
