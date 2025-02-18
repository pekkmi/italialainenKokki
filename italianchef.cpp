#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(std::string n)
    : Chef(n)
{
    cout << "Italian chef " << chefName << ":n konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "Italian chef " << chefName << ":n destruktori" << endl;
}

bool ItalianChef::askSecret(std::string pwd, int f, int w) {
    if (password.compare(pwd) == 0) {
        cout << "Access granted for secret food!" << endl;
        flour = f;
        water = w;
        makePizza();
        return true;
    }
    cout << "Invalid password" << endl;
    return false;
}

int ItalianChef::makePizza() {
    int portions_f = flour / 5;
    int portions_w = water / 5;
    int pizzas = min(portions_f, portions_w);

    cout << "Italian chef " << chefName << " with " << flour << " flour and "
         << water << " water can make " << pizzas << " pizzas." << endl;
    return pizzas;
}
