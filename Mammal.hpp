/*Name: Darren Frank
 *Date: 17th Feburary 2020
 *Project: oop and inheritance
 */

#ifndef MAMMAL_HPP	//if not defined 
#define MAMMAL_HPP	//define it
#include "Animal.hpp"   //include header file Animal.hpp

class Mammal : public Animal        //Declaration of class mammal inherrit characteristics from Animal
{
	public:
		Mammal();	   //constructor
		Mammal(std::string name, bool domestic=false, bool predator=false);
		bool hasHair() const;
		bool isAirborne() const;
		bool isAquatic() const;
		bool isToothed() const;
		bool hasFins() const;
		bool hasTail() const;
		int legs() const;
		void setHair();
		void setAirborne();
		void setAquatic();
		void setToothed();
		void setFins();
		void setTail();
		void setLegs(int legs);
	
	private:		//data members
		bool hair_;
		bool airborne_;
		bool aquatic_;
		bool toothed_;
		bool fins_;
		bool tail_;
		int legs_;
};
#endif				//end if
