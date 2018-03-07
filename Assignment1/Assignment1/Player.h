#ifndef PLAYER_H
#define PLAYER_H

#include "Weapon.h"

class Player {
private:
	Primary* primary;
	Secondary* secondary;
	Tertiary* tertiary;
	
public:
	Player();
	~Player();

	void equip(Weapon* wep);
	void shootPrimary();
	void shootSecondary();
	void shootTertiary();
};

#endif