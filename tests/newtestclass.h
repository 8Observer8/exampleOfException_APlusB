/*
 * File:   newtestclass.h
 * Author: Ivan
 *
 * Created on May 29, 2013, 2:19:34 PM
 */

#ifndef NEWTESTCLASS_H
#define	NEWTESTCLASS_H

#include <cppunit/extensions/HelperMacros.h>

class newtestclass : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(newtestclass);

    CPPUNIT_TEST(testAplusb_out_of_range_THROW_01);
    CPPUNIT_TEST(testAplusb_out_of_range_NO_THROW_01);
    CPPUNIT_TEST(testAplusb_out_of_range_THROW_02);
    CPPUNIT_TEST(testAplusb_out_of_range_NO_THROW_02);
    CPPUNIT_TEST(testAplusb_out_of_range_THROW_03);
    CPPUNIT_TEST(testAplusb_out_of_range_NO_THROW_03);
    CPPUNIT_TEST(testAplusb_out_of_range_THROW_04);
    CPPUNIT_TEST(testAplusb_out_of_range_NO_THROW_04);
    CPPUNIT_TEST(testAplusb);
    CPPUNIT_TEST(testAplusb_01);

    CPPUNIT_TEST_SUITE_END();

public:
    newtestclass();
    virtual ~newtestclass();
    void setUp();
    void tearDown();

private:
    void testAplusb_out_of_range_THROW_01();
    void testAplusb_out_of_range_NO_THROW_01();
    void testAplusb_out_of_range_THROW_02();
    void testAplusb_out_of_range_NO_THROW_02();
    void testAplusb_out_of_range_THROW_03();
    void testAplusb_out_of_range_NO_THROW_03();
    void testAplusb_out_of_range_THROW_04();
    void testAplusb_out_of_range_NO_THROW_04();
    void testAplusb();
    void testAplusb_01();
};

#endif	/* NEWTESTCLASS_H */

