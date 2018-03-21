#include <stdio.h>
#include "Player.h"

int main(int argc, char* argv[]) {
	Player p;

	//Equip and shoot primary
	Primary* w1 = new Primary("Rifle", "Bang bang");
	p.equip(w1);
	p.shootPrimary();

	//Equip and shoot secondary
	Secondary* w2 = new Secondary("Pistol", "Pew pew");
	p.equip(w2);
	p.shootSecondary();

	//Equip and shoot tertiary
	Tertiary* w3 = new Tertiary("Grenade", "KABOOM!");
	p.equip(w3);
	p.shootTertiary();

	//Change and shoot new secondary
	w2 = new Secondary("Sub-Machine Gun", "Kakakakakaka");
	p.equip(w2);
	p.shootSecondary();

	delete w1, w2, w3;

	getchar();
	return 0;
}