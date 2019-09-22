//
//  Account.hpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/20/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#pragma once

#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

//Account Default Initializer
class Account {
    
public:
    //Default constructor
    Account();
    //Parameterized constructor
    Account(string lastname, string firstname, string dob, float initBalance);
    //Gets balance for an account using its unique account number.
    float getBalance() const;
    //Gets full name on account
    string getFullName() const;
    //Gets Date of Birth on the account
    string getDOB() const;
    // Takes in a value in dollars and adds those funds to an account.
    float Deposit(float deposit);
    // Takes in a value in dollars and takes those funds out of the account.
    float Withdrawal(float withdrawal);
    
    
protected:
    string accFirstName; //first name on account
    string accLastName; //last name on account
    string dob_; //date of birth on account
    float balance; //balance on account
};
