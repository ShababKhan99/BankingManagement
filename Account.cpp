//
//  Account.cpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/20/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#include "Account.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

Account::Account(){
}

Account::Account(string lastname, string firstname, string dob, float initBalance){
    accLastName = lastname;
    accFirstName = firstname;
    dob_ = dob;
    balance = initBalance;
}

float Account::getBalance() const{
    return balance;
}
string Account::getFullName() const{
    return accLastName, accFirstName;
}

string Account::getDOB() const{
    return dob_;
}

float Account::Deposit(float deposit){
    balance += deposit;
    
    return balance;
}

float Account::Withdrawal(float withdrawal){
    balance -= withdrawal;
    
    return balance;
}

