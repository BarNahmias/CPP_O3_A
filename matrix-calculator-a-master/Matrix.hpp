//
// Created by בר נחמיאס on 30/03/2022.
//
#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

namespace zich{

    class Matrix {

    private:
        double _row;
        double _column;
        std::vector<double> _vec;

    public:
        //constructor

        Matrix(std::vector<double> vec , double row,double column):_row(row),_column(column),_vec(vec){}


//      **operators**

//      Addition and subtraction of Unary
        Matrix& operator+() ;
        Matrix& operator-() ;

////      Multiply matrices binary
//        Matrix operator*(const Matrix &other) const;
//
////      Addition matrices binary
//        Matrix operator+(const Matrix &other) const;
//
////      Subtraction matrices binary
//        Matrix operator-(const Matrix &other) const;

//      friend global binary operators
        friend Matrix operator- (const Matrix& a, const Matrix& b);
        friend Matrix operator+(const Matrix& a, const Matrix& b);
        friend Matrix operator* (const Matrix& a, const Matrix& b);


//      Addition and subtraction in the scalar
        Matrix &operator+(double scalar) ;
        Matrix &operator-(double scalar) ;
        friend Matrix operator+ (double scalar,  Matrix const & a);
        friend Matrix operator- (double scalar,  Matrix const & a);

//      Promote the matrix values by 1 or -1
        Matrix &operator++() ;
        Matrix &operator--() ;

//      Addition or subtraction and expression
        Matrix &operator+=( Matrix &other) ;
        Matrix &operator-=( Matrix &other) ;
        Matrix &operator*=( Matrix &other) ;
        Matrix &operator*=( double scalar) ;


        //      Comparison
        friend bool operator<(const Matrix &a,const Matrix &b) ;
        friend  bool operator<=(const Matrix &a,const Matrix &b) ;
        friend  bool operator>(const Matrix &a,const Matrix &b) ;
        friend  bool operator>=(const Matrix &a,const Matrix &b) ;
        friend  bool operator==(const Matrix &a,const Matrix &b) ;
        friend   bool operator!=(const Matrix &a,const Matrix &b) ;

//      Scalar multiplication
        Matrix &operator*(double scalar) ;
        friend Matrix operator* (double scalar,  Matrix const & a);



//      output
        friend std::istream& operator>>(std::istream& input, const Matrix &m) ;

//      input
        friend std::ostream& operator<<(std::ostream& output ,const Matrix &m) ;


        //function
        void printMatrix() ;

    };
}


