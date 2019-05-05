#pragma once
class GCreature {

	// attributes getters 
	virtual unsigned getHealth() = 0;
	virtual unsigned getBeauty() = 0;
	virtual unsigned getStrength() = 0;
	virtual unsigned getSpeed() = 0;
	virtual unsigned getHunger() = 0;

	// attributes setters 
	virtual unsigned setHealth() = 0;
	virtual unsigned setBeauty() = 0;
	virtual unsigned setStrength() = 0;
	virtual unsigned setSpeed() = 0;
	virtual unsigned setHunger() = 0;

	//@brief actions executed on different types of Creatures
	virtual void damage(unsigned num) = 0;
	virtual void heal(unsigned num) = 0;
	virtual GCreature* procreate() = 0;

};