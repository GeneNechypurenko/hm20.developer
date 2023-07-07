#include "FullStackDeveloper.h"

FullStackDeveloper::FullStackDeveloper(const string name, int experience, const string frontendLanguage, const string backendLanguage)
    :
    FrontendDeveloper(name, experience, frontendLanguage),
    BackendDeveloper(name, experience, backendLanguage)
{}
