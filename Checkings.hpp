//
//  Checkings.hpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/22/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#pragma once


#include "Account.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

using namespace std;

class Checkings : public Account{
  
public:
    //Default Constructor
    Checkings();
    //Parameterized Constuctor
    Checkings(string lastname, string firstname, string dob, float initBalance, bool student);
    // Quick withdrawal of 20 dollars.
    void QuickWithdrawal();
    //Charges the account if the account balance is under the minimum amount
    void MinimumCharge();
    
private:
    bool student;
    float minimum_amount = 150;
    float minimum_charge = 5;
    
};


