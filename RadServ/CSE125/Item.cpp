#include "Item.h"

Item::Item(void)
{
	health = 0;
}

Item::~Item(){

}

int Item::getHealth()
{
	return health;
}

void Item::setHealth(int val)
{
	health = val;
}

bool Item::isWeapon(){ return false; }
bool Item::isBoots(){ return false; }