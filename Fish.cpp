/*Name: Darren Frank
 *Date: 17th feburary 2020
 *project: oop and inheritance
 */

#include "Fish.hpp"		//include fish,hpp

Fish::Fish() : Animal(), venomous_(false) {
}

Fish::Fish(std::string name, bool domestic, bool predator) 
	: Animal(name,domestic,predator)
{
       	venomous_ = false;
}		   		//constructor of fish class

bool Fish::isVenomous() const {

	return venomous_;

}				//accessor function to access venomous value of object

void Fish::setVenomous() {

	venomous_ = true;

}				//mutator function to change the value venomous
