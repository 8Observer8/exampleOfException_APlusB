/*
 * File:   newtestclass.cpp
 * Author: Ivan
 *
 * Created on May 29, 2013, 2:19:35 PM
 */

#include "newtestclass.h"
#include "../APlusB.h"


CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

newtestclass::newtestclass() {
}

newtestclass::~newtestclass() {
}

void newtestclass::setUp() {
}

void newtestclass::tearDown() {
}

void newtestclass::testAplusb_out_of_range_THROW_01() {
    int a = 0;
    int b = 1;
    APlusB aPlusB;

    CPPUNIT_ASSERT_THROW(aPlusB.aplusb(a, b), std::out_of_range);
}

void newtestclass::testAplusb_out_of_range_NO_THROW_01() {
    int a = 1;
    int b = 1;
    APlusB aPlusB;

    CPPUNIT_ASSERT_NO_THROW(aPlusB.aplusb(a, b));
}

void newtestclass::testAplusb_out_of_range_THROW_02() {
    int a = 1;
    int b = 0;
    APlusB aPlusB;

    CPPUNIT_ASSERT_THROW(aPlusB.aplusb(a, b), std::out_of_range);
}

void newtestclass::testAplusb_out_of_range_NO_THROW_02() {
    int a = 1;
    int b = 1;
    APlusB aPlusB;

    CPPUNIT_ASSERT_NO_THROW(aPlusB.aplusb(a, b));
}

void newtestclass::testAplusb_out_of_range_THROW_03() {
    int a = 101;
    int b = 1;
    APlusB aPlusB;

    CPPUNIT_ASSERT_THROW(aPlusB.aplusb(a, b), std::out_of_range);
}

void newtestclass::testAplusb_out_of_range_NO_THROW_03() {
    int a = 100;
    int b = 1;
    APlusB aPlusB;

    CPPUNIT_ASSERT_NO_THROW(aPlusB.aplusb(a, b));
}

void newtestclass::testAplusb_out_of_range_THROW_04() {
    int a = 1;
    int b = 101;
    APlusB aPlusB;

    CPPUNIT_ASSERT_THROW(aPlusB.aplusb(a, b), std::out_of_range);
}

void newtestclass::testAplusb_out_of_range_NO_THROW_04() {
    int a = 1;
    int b = 100;
    APlusB aPlusB;

    CPPUNIT_ASSERT_NO_THROW(aPlusB.aplusb(a, b));
}

void newtestclass::testAplusb() {
    int a = 50;
    int b = 100;
    APlusB aPlusB;

    CPPUNIT_ASSERT_NO_THROW(aPlusB.aplusb(a, b));
}

void newtestclass::testAplusb_01() {
    int a = 2;
    int b = 3;
    APlusB aPlusB;

    CPPUNIT_ASSERT_NO_THROW(aPlusB.aplusb(a, b));
}
