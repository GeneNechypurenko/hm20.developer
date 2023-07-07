#include "Developer.h"
#include <iostream>

Developer::Developer(const string name, int experience)
    :
    name(name),
    experience(experience)
{}

void Developer::devInfo() const
{
    cout << "Name: " << name << endl;
    cout << "Experience: " << experience << " years" << endl;
}