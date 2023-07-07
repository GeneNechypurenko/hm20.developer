#include "FrontendDeveloper.h"

FrontendDeveloper::FrontendDeveloper(const string name, int experience, const string frontendLanguage)
    : 
    Developer(name, experience),
    frontendLanguage(frontendLanguage)
{}

void FrontendDeveloper::frontendInfo() const
{
    devInfo();
    cout << "Frontend Language: " << frontendLanguage << endl;
}
