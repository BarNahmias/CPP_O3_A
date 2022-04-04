//
// Created by בר נחמיאס on 30/03/2022.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>
#include "Matrix.hpp"

using namespace std;
using namespace zich;


         void printMatrix()  {
             cout <<"********************"<< endl;

             cout <<"********************"<< endl;
         }


//      Addition and subtraction of Unary
        Matrix&  Matrix:: operator+() {return *this;}
        Matrix&  Matrix:: operator-() {return *this;}

//      Multiply matrices binary
//        Matrix zich:: operator*(const Matrix &other) const{return *this;}
//
////      Addition matrices binary
//        Matrix zich::operator+(const Matrix &other) const{return *this;}
//
////      Subtraction matrices binary
//        Matrix zich:: operator-(const Matrix &other) const{return *this;}

//      friend global binary operators
         Matrix zich::operator- (const Matrix& a, const Matrix& b){return a;}
         Matrix zich::operator+ (const Matrix& a, const Matrix& b){return a;}
         Matrix zich::operator* (const Matrix& a, const Matrix& b){return a;}


//      Addition and subtraction in the scalar
        Matrix&  Matrix:: operator+(double scalar) {return *this;}
        Matrix&  Matrix:: operator-(double scalar) {return *this;}
        Matrix  zich::operator+ (double scalar,  Matrix const & a){return a;}
        Matrix  zich::operator- (double scalar,  Matrix const & a){return a;}



//      Promote the matrix values by 1 or -1
        Matrix&  Matrix:: operator++() {return *this;}
        Matrix&  Matrix:: operator--() {return *this;}

//      Addition or subtraction and expression
        Matrix&  Matrix::operator+=( Matrix &other) {return *this;}
        Matrix&  Matrix::operator-=( Matrix &other) {return *this;}
        Matrix&  Matrix::operator*=( Matrix &other) {return *this;}
        Matrix&  Matrix::operator*=( double scalar) {return *this;}


//      Comparison
        bool zich::operator<(const Matrix &a,const Matrix &b) {return true;}
        bool zich::operator<=(const Matrix &a,const Matrix &b) {return true;}
        bool zich::operator>(const Matrix &a,const Matrix &b) {return true;}
        bool zich::operator>=(const Matrix &a,const Matrix &b) {return true;}
        bool zich::operator==(const Matrix &a,const Matrix &b) {return true;}
        bool zich::operator!=(const Matrix &a,const Matrix &b) {return true;}
//      Scalar multiplication
        Matrix&  Matrix::operator*(double scalar) {return *this;}
        Matrix  zich::operator* (double scalar,  Matrix const & a){return a;}




//      output
        std::istream& zich:: operator>>(std::istream& input, const Matrix &m)  { return input ; }

//      input
        std::ostream& zich::operator<<(std::ostream& output ,const Matrix &m) { return output ; }


        //function
        void printMatrix() ;

