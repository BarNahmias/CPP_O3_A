//
// Created by בר נחמיאס on 31/03/2022.
//
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <vector>
#include <string>
#include <algorithm>
#include "Matrix.hpp"

using namespace std;
using namespace zich;







// add Matrices not of the same order in nXm size.

TEST_CASE("Bad input for add to matrix") {

    for(double i=1;i<100;i++) {

        vector<double> matrix5x3 = {i, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
        vector<double> matrix4x4 = {1, 0, 0, 0, 1, 0, 0, 0, 1, 4, i + 9, 4, 2, 2, 2, 4};

        Matrix A{matrix5x3, 5, 3};
        Matrix B{matrix4x4, 4, 4};

            CHECK_THROWS(A+B);
            CHECK_THROWS(B+A);
    }
}





    TEST_CASE("Bad input for mul two matrix") {
    vector<double> matrix5x3 = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1 ,1 ,1 ,1 ,1 ,1};
    vector<double> matrix4x4 = {1, 0, 0, 0, 1, 0, 0, 0, 1, 4, 4, 4, 2, 2, 2, 4};
    Matrix A{matrix5x3, 5, 3};
    Matrix B{matrix4x4, 4, 4};

        CHECK_THROWS(A*B);
        CHECK_THROWS(B*A);

    }
    TEST_CASE("good input for mul scalar  x*A") {

    vector<double> vec = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    Matrix A{vec, 3, 3};

            CHECK((4 * A) == A);
//                            " [4 0 0]\n"
//                                         " [0 4 0]\n"
//                                         " [0 0 4]*/");

            CHECK((5 * A) == A);
//                            " [5 0 0]\n"
//                                         " [0 5 0]\n"
//                                         " [0 0 5]*/");
}


    TEST_CASE("good input for add scalar x+A") {
        vector<double> vec = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        Matrix A{vec, 3, 3};

                CHECK((4+A) ==A);

//                " [5 4 4]\n"
//                               " [4 5 4]\n"
//                               " [4 4 5]*/");

                CHECK((3+A) == A);

//                " [4 3 3]\n"
//                               " [3 4 3]\n"
//                               " [3 3 4]*/");


            CHECK((4.0+A )==A);
//    " [5 4 4]\n"
//                           " [4 5 4]\n"
//                           " [4 4 5]*/");

            CHECK((3+A) == A);
//            " [4 3 3]\n"
//                           " [3 4 3]\n"
//                           " [3 3 4]*/");
}


    TEST_CASE("good test comer two same matrix") {
                for(double i=1;i<100;i++){
                    vector<double> a = {i, i+i, i, 0, 1, 0, 0, i+6, i};
                    vector<double> b = {i, i+i, i, 1, 1, 0, 0, i+5, i};
                    Matrix A{a,3,3};
                    Matrix B{b,3,3};
                    CHECK((A==B)==true);
                }
    }



    TEST_CASE("good test comer two same matrix") {
        for(double i=1;i<100;i++){
           vector<double> a = {i, 2*i, i, 0, 1, 0, 0, i+6, i};
           vector<double> b = {i, i, i, 1, 1, 0, 0, i+5, i};
            Matrix A{a,3,3};
            Matrix B{b,3,3};

            CHECK((A>=B)==true);
        }
    }
    TEST_CASE("good test comer two same matrix") {
        for(double i=1;i<100;i++){
            vector<double> a = {i, 2*i, i, 0, 1, 0, 0, i*6, i};
            vector<double> b = {i, -i, i, 1, 1, 0, 0, i+5, i};
            Matrix A{a,3,3};
            Matrix B{b,3,3};

            CHECK((A!=B)==true);
        }
    }



