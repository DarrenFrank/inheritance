/*Name: Darren Frank
 *Date: Monday 17th Feburary
 *
 *oop and inheritance
 */


#ifndef ANIMAL_HPP  // if Animal_hpp not defined  
#define ANIMAL_HPP // then define Animal_hpp
#include <string> // inlcude string library

class Animal    //Declaration of class Animal
{
	public:                           //public accessor and mutator functions
		Animal();	//constructor
		Animal(std::string, bool domestic=false, bool predator=false);
		std::string getName() const;
		bool isDomestic() const;
		bool isPredator() const;
		void setName(std::string);
		void setDomestic();
		void setPredator();
	
	protected:			//Data members
		std::string name_;
		bool domestic_;
		bool predator_;
};
#endif                            // end if


