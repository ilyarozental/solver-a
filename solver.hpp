#pragma once
#include <iostream>
#include <complex>

using namespace std;

namespace solver{

    class RealVariable{
        private:
        double number;
        public:
        RealVariable(double number = 0): number(number){}
        //^//--------------------------------------------------------------------
        friend RealVariable& operator^(RealVariable& n1, const double n2);
        //-//--------------------------------------------------------------------
        friend RealVariable& operator-(RealVariable& n1, RealVariable& n2);
        friend RealVariable& operator-(RealVariable& n1, const double n2);
        //+//--------------------------------------------------------------------
        friend RealVariable& operator+(RealVariable& n1, RealVariable& n2);
        friend RealVariable& operator+(const double n1, RealVariable& n2);
        friend RealVariable& operator+(RealVariable& n1, const double n2);
        //*//--------------------------------------------------------------------
        friend RealVariable& operator*(const double n1, RealVariable& n2);
        // / //------------------------------------------------------------------
        friend RealVariable& operator/(RealVariable& n1, const double n2);
        //==//-------------------------------------------------------------------
        friend RealVariable& operator==(RealVariable& n1, RealVariable& n2);
        friend RealVariable& operator==(RealVariable& n1, const double n2);
    };//RealVariable

   class ComplexVariable{
        private:
        complex<double> re;
        complex<double> im;
        public:
        ComplexVariable (const double& re= 0.0,const double& im= 0.0): re(re), im(im) {}
        //^//--------------------------------------------------------------------
        friend ComplexVariable& operator^(ComplexVariable& n1, const double n2);
        //-//--------------------------------------------------------------------
        friend ComplexVariable& operator-(ComplexVariable& n1, ComplexVariable& n2);
        friend ComplexVariable& operator-(ComplexVariable& n1, const double n2);
        //+//--------------------------------------------------------------------
        friend ComplexVariable& operator+(ComplexVariable& n1, ComplexVariable& n2);
        friend ComplexVariable& operator+(const double n1, ComplexVariable& n2);
        friend ComplexVariable& operator+(ComplexVariable& n1 ,complex<double> n2);
        //*//--------------------------------------------------------------------
        friend ComplexVariable& operator*(complex<double> n1,ComplexVariable& n2);
        friend ComplexVariable& operator*(const double n1, ComplexVariable& n2);
        // / //------------------------------------------------------------------
        friend ComplexVariable& operator/(ComplexVariable& n1, const double n2);
        //==//-------------------------------------------------------------------
        friend ComplexVariable& operator==(ComplexVariable& n1, ComplexVariable& n2);
        friend ComplexVariable& operator==(ComplexVariable& n1, const double n2);

    };//ComplexVariable
    
    double solve(RealVariable& x);
    complex<double> solve(ComplexVariable& x);
}// namespace solver