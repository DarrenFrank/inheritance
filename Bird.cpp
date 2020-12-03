/*Name: Darren Frank
 *Date: 17th feburary 2020
 *Project: oop and inheritance
 */

#include "Bird.hpp"	//include header file Bird.hpp

Bird::Bird() : Animal(), airborne_(false), aquatic_(false) {
}



Bird::Bird(std::string name, bool domestic, bool predator) 
	: Animal(name,domestic,predator)
{
	  airborne_ = false;
	  aquatic_ = false;
	//constructs for Bird object
}

bool Bird::isAirborne() const {
	
	return airborne_;
}				//accessor function to access if bird is airborne or not

bool Bird::isAquatic() const {
	
	return aquatic_;
}				//accessor function to access if bird is aquatic or not

void Bird::setAirborne() {
	
	airborne_ = true;
}				//mutator function to change the value of Airborne

void Bird::setAquatic() {

	aquatic_ = true;
}				//mutator function to change the value of aquatic
