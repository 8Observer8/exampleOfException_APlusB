/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on May 29, 2013, 9:24 AM
 */

#include <iostream>
#include "APlusB.h"

int main(int argc, char** argv) {
    int a, b, sum;
    APlusB apb;

    a = 1;
    b = 100;

    try {
        sum = apb.aplusb(a, b);
    }    catch (const std::out_of_range& e) {
        std::cerr << "Out of Range error: " << e.what() << '\n';
    }

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "sum = " << sum << std::endl;

    // out_of_range
    a = 0;
    b = 20;

    try {
        sum = apb.aplusb(a, b);
    }    catch (const std::out_of_range& e) {
        std::cerr << "Out of Range error: " << e.what() << '\n';
    }

    std::cout << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "sum = " << sum << std::endl;

    // out_of_range
    a = 20;
    b = 101;

    try {
        sum = apb.aplusb(a, b);
    }    catch (const std::out_of_range& e) {
        std::cerr << "Out of Range error: " << e.what() << '\n';
    }

    std::cout << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "sum = " << sum << std::endl;

    return 0;
}

