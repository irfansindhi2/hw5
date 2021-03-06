
#include "antique.h"
#include <iostream>
#include <fstream>

using namespace std;

#ifndef merchant_h
#define merchant_h

class Merchant {
private:
    /*
      put the dynamic arrays here
    */
   	Antique *antiques; 
	int *antQty;
	int numAnt;
    float revenue;
public:
	Merchant();
	Merchant(float r);
	~Merchant();
	Merchant(const Merchant &copy);
	/*
	   == operator overload here
	   addAntique function here
	*/
	bool operator == (const &other);
};


#endif /* merchant_h */