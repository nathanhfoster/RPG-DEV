#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "Item.hpp"
#include <string>

class SpellBook : public Item
{
public:
	unsigned damage[2];
	// Usual constructor
	SpellBook(std::string name, std::string description, int dieQuatity, int dieSides) :
		Item(name, description)
	{
		this->damage[0] = dieQuatity;
		this->damage[1] = dieSides;
	}

	SpellBook() 
	{
		
	}

};

#endif /*  SPELLBOOK_HPP */

