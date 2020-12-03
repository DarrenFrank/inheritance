/*Name: Darren Frank	
 *Date: 17th feburary 2020
 *Project: oop and inheritance
 */



#include "Mammal.hpp"  // include Mammal header file

Mammal::Mammal():Animal(), hair_(false), airborne_(false), aquatic_(false), toothed_(false), fins_(false), tail_(false), legs_(0){
}
Mammal::Mammal(std::string name, bool domestic, bool predator)												
	: Animal(name,domestic,predator)
{
	hair_ = false;
	airborne_ = false;
	aquatic_ = false;
	toothed_ = false;
	fins_ = false;
	tail_ = false;
	legs_ = 0;
}


bool Mammal::hasHair() const { 
	
	return hair_;					
}						//accessor function to return if the mammal has hair or not

bool Mammal::isAirborne() const {

	return airborne_;
}						//accessor function to return if mammal is airborne or not

bool Mammal::isAquatic() const {

	return aquatic_;
}						//accessor function to return if mammal is aquatic or not

bool Mammal::isToothed() const {
	
	return toothed_;
}						//accessor function to return if mammal has teeth or not 

bool Mammal::hasFins() const {

	return fins_;
}						//accessor function to return if mammal has fins or not

bool Mammal::hasTail() const {

	return tail_;
}						//accessor function to return if mammal has a tail or not

int Mammal::legs() const {

	return legs_;
}						//accessor function to return if mammal has legs or not

void Mammal::setHair() {
	
	hair_ = true;
}						//mutator function to change the value of the accessor function has hair

void Mammal::setAquatic() {

	aquatic_ = true;
}						//mutator function to change the value of the accessor function aquatic

void Mammal::setAirborne() {

	airborne_= true;
}						//mutator function to change the value of the accessor function airborne

void Mammal::setToothed() {

	toothed_ = true;
}						//mutator function to change the value of the accessor function tooth

void Mammal::setFins() {

	fins_= true;
}						//mutator function to change the value of the accessor function fins

void Mammal::setTail() {

	tail_ = true;
}						//mutator function to change the value of the value outputted by the accessor function tail

void Mammal::setLegs(int legs) {

	legs_ = legs;
}						//mutator function to change the value of the value of legs


