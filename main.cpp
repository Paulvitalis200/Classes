#include <iostream>
#include "FileIO.h"
#include "Rectangle.h"
#include "AccountLocked.h"

using namespace std;

void login() {
    throw AccountLocked{};
}
int main() {
    // Account Locked
    try {
        login();
    }
    catch (const exception& ex) {
        cout << ex.what();
    }

    return 0;
}