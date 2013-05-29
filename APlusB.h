/* 
 * File:   APlusB.h
 * Author: Ivan
 *
 * Created on May 29, 2013, 9:25 AM
 */

#ifndef APLUSB_H
#define	APLUSB_H

#include <stdexcept>

/**
 * Implementation of a class APlusB
 */
class APlusB {
public:

    /**
     * Adds a and b from range [1, 100]
     * 
     * @param a The first summand
     * @param b The second summand
     * @return The Sum
     */
    int aplusb(int a, int b) throw (std::out_of_range) {
        int result = 0;

        if ((a < 1) || (a > 100)) {
            throw std::out_of_range("a: parameter falls outside the range [1, 100]");
        }

        if ((b < 1) || (b > 100)) {
            throw std::out_of_range("b: parameter falls outside the range [1, 100]");
        }
        
        result = a + b;

        return result;
    }
};

#endif	/* APLUSB_H */
