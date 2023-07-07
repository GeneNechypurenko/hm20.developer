#pragma once
#include <string>

#include "Developer.h"

class BackendDeveloper : public Developer
{
private:
    string backendLanguage;

public:
    BackendDeveloper(const string name, int experience, const string backendLanguage);
    void backendInfo() const;
};
