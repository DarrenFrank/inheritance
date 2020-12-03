/*Name: Darren Frank
 *Date: 17th Feburary 2020
 *Project: oop and inheritance
 */
#include <iostream>   //include input and output in the program
using namespace std;  //removes the repition of std throughout the program
#include "Animal.hpp" //include header file


Animal::Animal()
{
	name_ = "";
	domestic_ = false;
	predator_ = false;
}

Animal::Animal(std::string myname, bool domestic, bool predator): name_(myname), domestic_(domestic), predator_(predator){
	}  //main constructor for object

std::string Animal::getName() const {  
	return name_;   
}					//accessor function to access name of animal

bool Animal::isDomestic() const {
	return domestic_;
}  					//accessor function to access if animal is domestic oor not

bool Animal::isPredator() const {
	return predator_;		//accessor function to access if animal is predator or not
}

void Animal::setName(std::string name) {
	name_ = name;
} 					//mutator function to set name of animal

void Animal::setDomestic() {
	domestic_=true;
}					//mutator function to sett if animal is domestic or not

void Animal::setPredator() {
	predator_=true;			//mutator function to set if animal is a predator or not
}
