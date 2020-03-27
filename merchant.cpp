#include "merchant.h"

using namespace std;

//default constructor here
Merchant::Merchant(){
    antiques = nullptr;
    antQty = nullptr;
    numAnt = 0;
    revenue = 0.0;
}
//constructor with only a float value
Merchant::Merchant(float r){
    antiques = nullptr;
    antQty = nullptr;
    numAnt = 0;
    revenue = r;
}
//destructor here
Merchant::~Merchant(){
    delete[] antiques;
    antiques = nullptr;

    delete[] antQty;
    AntQty = nullptr;
}
// copy constructor
Merchant(const Merchant &copy){
    numAnt = copy.numAnt;
    antiques = new Antique[numAnt];
    antQty = new int[numAnt];
    revenue = copy.revenue;
    
    int i = 0;
    while(i <= size){
        antiques[i] = copy.antiques[i];
        antQty[i] = copy.antQty[i];
        i++;
    }
}

//==operator overload here

//add antique here