#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef:public Chef
{
public:
    ItalianChef(string s);
    string getName();
    void makePasta();
private:
    int jauho;
    int vesi;
};

#endif // ITALIANCHEF_H
