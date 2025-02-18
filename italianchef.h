#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>
class ItalianChef : public Chef
{
public:
    ItalianChef(std::string n);
    ~ItalianChef();
    bool askSecret(std::string psw, int f, int w);

private:
    int makePizza();
    int flour;
    int water;
    const std::string password = "pizza";
};

#endif // ITALIANCHEF_H
