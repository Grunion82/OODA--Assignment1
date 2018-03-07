#include "Weapon.h"
#include <stdio.h>

//Base class "Weapon" Definitions
void Weapon::setName(string name) {
	wepName = name;
}

string Weapon::getName() {
	return wepName;
}

void Weapon::setMsg(string msg) {
	fireMsg = msg;
}

string Weapon::getMsg() {
	return fireMsg;
}

string Weapon::getTag() {
	return tag;
}

//Primary Definitions
Primary::Primary() {
	tag = "Primary";
	wepName = "Primary";
}

Primary::Primary(string name, string msg) {
	tag = "Primary";
	wepName = name;
	fireMsg = msg;
}

Primary::~Primary() {}

void Primary::shoot() {
	printf("Primary: %s. %s\n", wepName.c_str(), fireMsg.c_str());
}

//Secondary Definitions
Secondary::Secondary() {
	tag = "Secondary";
	wepName = "Secondary";
}

Secondary::Secondary(string name, string msg) {
	tag = "Secondary";
	wepName = name;
	fireMsg = msg;
}

Secondary::~Secondary() {}

void Secondary::shoot() {
	printf("Secondary: %s. %s\n", wepName.c_str(), fireMsg.c_str());
}

//Tertiary Definitions
Tertiary::Tertiary() {
	tag = "Tertiary";
	wepName = "Tertiary";
}

Tertiary::Tertiary(string name, string msg) {
	tag = "Tertiary";
	wepName = name;
	fireMsg = msg;
}

Tertiary::~Tertiary() {}

void Tertiary::shoot() {
	printf("Tertiary: %s. %s\n", wepName.c_str(), fireMsg.c_str());
}
