#include "Player.h"


Player::Player() {}

Player::~Player() {
	if(primary)
		delete primary;

	if(secondary)
		delete secondary;

	if(tertiary)
		delete tertiary;
}

void Player::equip(Weapon* wep) {
	if (wep->getTag() == "Primary") {
		primary = NULL;
		primary = new Primary(wep->getName(), wep->getMsg());
	}
	else if (wep->getTag() == "Secondary") {
		secondary = NULL;
		secondary = new Secondary(wep->getName(), wep->getMsg());
	}
	else if (wep->getTag() == "Tertiary") {
		tertiary = NULL;
		tertiary = new Tertiary(wep->getName(), wep->getMsg());
	}
	else {
		printf("Invalid Weapon");
	}
}

void Player::shootPrimary() {
	primary->shoot();
}

void Player::shootSecondary() {
	secondary->shoot();
}

void Player::shootTertiary() {
	tertiary->shoot();
}
