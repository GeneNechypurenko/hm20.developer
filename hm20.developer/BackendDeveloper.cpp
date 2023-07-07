#include "BackendDeveloper.h"

BackendDeveloper::BackendDeveloper(const string name, int experience, const string backendLanguage)
    :
    Developer(name, experience),
    backendLanguage(backendLanguage)
{}

void BackendDeveloper::backendInfo() const
{
    devInfo();
    cout << "Backend Language: " << backendLanguage << endl;
}
