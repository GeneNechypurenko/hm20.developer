#pragma once
#include <iostream>
#include <string>

using namespace std;

class Developer
{

protected:
    string name;
    int experience;

public:
    Developer(const string name, int experience);
    void devInfo() const;
};
