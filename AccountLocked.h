//
// Created by Admin on 20/03/2026.
//

#ifndef CLASSES_ACCOUNTLOCKED_H
#define CLASSES_ACCOUNTLOCKED_H

#include <stdexcept>

using namespace std;

class AccountLocked : public exception {
public:
    const char* what() const noexcept override {
        return "Your account is locked! Contact the admin.";
    }
};


#endif //CLASSES_ACCOUNTLOCKED_H