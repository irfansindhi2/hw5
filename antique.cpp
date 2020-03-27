#include "antique.h"

using namespace std;

void Antique::setName(string NAME) {
	name = NAME;
}

void Antique::setPrice(float PRICE) {
	price = PRICE;
}

string Antique::getName() const {
	return name;
}

float Antique::getPrice() const {
	return price;
}

string Antique::toString() {
	//string price_s;
	ostringstream streamObj;

	streamObj << fixed;
	streamObj << setprecision(2);

	streamObj << price;
	return name + ": $" + streamObj.str();
}

Antique::Antique() {
	name = "";
	price = 0;
}

bool Antique::operator==(const Antique &other){
	return (price == other.price && name == other.name);
}

Antique Antique::operator+(const Antique &other){
	Antique temp;
	temp.price = price + other.price;
	temp.name = name + " and " + other.name;
	return temp;
}