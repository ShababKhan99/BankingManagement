//
//  Checkings.cpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/22/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#include "Account.hpp"
#include "Checkings.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

Checkings::Checkings(){
    student = 0;
}
Checkings::Checkings(string lastname, string firstname, string dob, float initBalance, bool student){
    accLastName = lastname;
    accFirstName = firstname;
    dob_ = dob;
    balance = initBalance;
    student = student;
}

void Checkings::QuickWithdrawal(){
    balance -= 20;
}

void Checkings::MinimumCharge(){
    if(balance < minimum_amount)
        balance -= minimum_charge;
}
