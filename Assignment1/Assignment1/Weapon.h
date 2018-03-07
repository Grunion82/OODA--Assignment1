#ifndef WEAPON_H
#define WEAPON_H

#include <string>

using namespace std;

//Base Weapon Class
class Weapon {
protected:
	string wepName;
	string fireMsg;
	string tag;

public:
	void setName(string name);
	string getName();

	void setMsg(string msg);
	string getMsg();

	string getTag();

	virtual void shoot() = 0;
};


//Primary Weapon Class
class Primary : public Weapon {
public:
	Primary();
	Primary(string name, string msg);
	~Primary();

	void shoot();
};


//Secondary Weapon Class
class Secondary : public Weapon {
public:
	Secondary();
	Secondary(string name, string msg);
	~Secondary();

	void shoot();
};


//Tertiary Weapon Class
class Tertiary : public Weapon {
public:
	Tertiary();
	Tertiary(string name, string msg);
	~Tertiary();

	void shoot();
};
#endif