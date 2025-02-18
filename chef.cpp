#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(std::string n) {
    chefName = n;
    cout << "Chef " << chefName << ":n konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << chefName << ":n destruktori" << endl;
}

int Chef::makeSalad(int items) {

    int portions = items / 5;
    cout << "Chef " << chefName << " made " << portions << " salads with " << items << " items." << endl;
    return portions;

}

int Chef::makeSoup(int items) {
    int portions = items / 3;
    cout << "Chef " << chefName << " made " << portions << " soups with " << items << " items." << endl;
    return portions;

}

std::string Chef::getName() {
    return chefName;
}
