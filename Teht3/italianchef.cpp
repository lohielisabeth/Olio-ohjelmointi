#include "italianchef.h"


ItalianChef::ItalianChef(string s):Chef(s)
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    jauho=250;
    vesi=100;
}

string ItalianChef::getName()
{
    cout<<"Name"<<endl;
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauho<<endl;
    cout<<"Chef "<<name<<" makes vesi = "<<vesi<<endl;

}
