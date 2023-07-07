#pragma once
#include <string>

#include "Developer.h"

class FrontendDeveloper : public Developer
{
private:
    string frontendLanguage;

public:
    FrontendDeveloper(const string name, int experience, const string frontendLanguage);
    void frontendInfo() const;
};
