//
//  main.cpp
//  Bank Account Management
//
//  Created by Shabab Khan on 9/20/19.
//  Copyright © 2019 Shabab Khan. All rights reserved.
//

#include <iostream>
#include "Account.hpp"
#include "Savings.hpp"
#include "Checkings.hpp"

int main() {
    Savings ACC12345("doe", "john", "12/09/89", 2400.00);
    cout << ACC12345.InterestCalc(3) << endl;
    cout << ACC12345.Withdrawal(300) << endl;
    ACC12345.MinimumCharge();
    cout << ACC12345.getBalance() << endl;
    cout << "hello" << endl;
    return 0;
}
