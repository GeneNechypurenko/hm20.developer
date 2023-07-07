#include <iostream>
#include <string>

using namespace std;

#include "FrontendDeveloper.h"
#include "BackendDeveloper.h"
#include "FullStackDeveloper.h"

int main()
{
    FrontendDeveloper frontendDev("Johnny Depp", 5, "JavaScript");
    BackendDeveloper backendDev("Aleck Baldwin", 7, "Python");
    FullStackDeveloper fullstackDev("Matthew McConaughey", 3, "JavaScript", "Python");

    frontendDev.frontendInfo();
    cout << endl;

    backendDev.backendInfo();
    cout << endl;

    fullstackDev.frontendInfo();
    fullstackDev.backendInfo();
    cout << endl;

    return 0;
}
