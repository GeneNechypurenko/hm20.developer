#pragma once
#include <string>

#include "FrontendDeveloper.h"
#include "BackendDeveloper.h"

class FullStackDeveloper : public FrontendDeveloper, public BackendDeveloper
{
public:
    FullStackDeveloper(const string name, int experience, const string frontendLanguage, const string backendLanguage);
};
