//
//  Savings.cpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/22/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#include "Account.hpp"
#include "Savings.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

using namespace std;

Savings::Savings(){
}

Savings::Savings(string lastname, string firstname, string dob, float initBalance){
    accLastName = lastname;
    accFirstName = firstname;
    dob_ = dob;
    balance = initBalance;
}

float Savings::InterestCalc(float time){
    float exponent = time * compound;
    float multiply = 1 + (interest_rate/compound);
    
    balance = balance * pow(multiply, exponent);
    
    return balance;
}

void Savings::MinimumCharge(){
    if(balance < minimum_amount)
        balance -= minimum_charge;
    else
        InterestCalc(1);
}

void Savings::Shift(float amount, Checkings account){
    balance -= amount;
    account.Deposit(amount);
}
