//
//  Savings.hpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/22/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#pragma once

#include "Account.hpp"
#include "Checkings.hpp"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

class Savings : public Account {
    
public:
    // Default Constructor
    Savings();
    //Parameterized Constructor
    Savings(string lastname, string firstname, string dob, float initBalance);
    //Gives us the total interest calculated
    float InterestCalc(float time);
    //Charges if the account is below minimum
    void MinimumCharge();
    //shift funds into a checkings account
    void Shift(float amount, Checkings account);
    
private:
    float interest_rate = .0175; //interest rate
    float compound = 4; //amount of times compounded
    float minimum_amount = 2200; // minimum account balance needed
    float minimum_charge = 35; //charge for going under minimum balance
};
