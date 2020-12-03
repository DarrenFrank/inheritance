/*Name: Darren Frank
 *Date: 17th Feburary 2020
 *Project: oop and inheritance
 */

#ifndef BIRD_HPP	//if Bird_hpp is not defined
#define BIRD_HPP	//define Bird_hpp
#include "Animal.hpp"	//include header file Animal.hpp

class Bird : public Animal	//Declaration of class bird and give it values from class animal 
{
	public:			//constructs
		Bird();
		Bird(std::string name, bool domestic=false, bool predator=false);
		bool isAirborne() const;
		bool isAquatic() const;
		void setAirborne();
		void setAquatic();

	private:				//data memebers
		bool airborne_;
		bool aquatic_;
};
#endif		//endif
