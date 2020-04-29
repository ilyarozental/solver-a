
#include "solver.hpp"

using namespace std;
using namespace solver;


namespace solver{

    double solve(RealVariable& x){
        return 0.0;
    }
    complex<double> solve(ComplexVariable& x){
        return 0.0;  
    }
    /////real////
    //^//--------------------------------------------------------------------
    RealVariable& operator^(RealVariable& n1, const double n2){
        return n1;
    };
    //-//--------------------------------------------------------------------
    RealVariable& operator-(RealVariable& n1, RealVariable& n2){
        return n1;
    };
    RealVariable& operator-(RealVariable& n1, const double n2){
        return n1;
    };
    //+//--------------------------------------------------------------------
    RealVariable& operator+(RealVariable& n1, RealVariable& n2){
        return n1;
    };
    RealVariable& operator+(const double n1, RealVariable& n2){
        return n2;
    };
    RealVariable& operator+(RealVariable& n1, const double n2){
        return n1;
    };
    //*//--------------------------------------------------------------------
    RealVariable& operator*(const double n1, RealVariable& n2){
        return n2;
    };
    // / //------------------------------------------------------------------
    RealVariable& operator/(RealVariable& n1, const double n2){
        return n1;
    };
    //==//-------------------------------------------------------------------
    RealVariable& operator==(RealVariable& n1, RealVariable& n2){
        return n1;
    };
    RealVariable& operator==(RealVariable& n1, const double n2){
        return n1;
    };

    /////complex////
    //^//--------------------------------------------------------------------
    ComplexVariable& operator^(ComplexVariable& n1, const double n2){
        return n1;
    };
    //-//--------------------------------------------------------------------
    ComplexVariable& operator-(ComplexVariable& n1, ComplexVariable& n2){
        return n1;
    };
    ComplexVariable& operator-(ComplexVariable& n1, const double n2){
        return n1;
    };
    //+//--------------------------------------------------------------------
    ComplexVariable& operator+(ComplexVariable& n1, ComplexVariable& n2){
        return n1;
    };
    ComplexVariable& operator+(const double n1, ComplexVariable& n2){
        return n2;
    };
    ComplexVariable& operator+(ComplexVariable& n1 ,complex<double> n2){
        return n1;
    };
    //*//--------------------------------------------------------------------
    ComplexVariable& operator*(complex<double> n1,ComplexVariable& n2){
        return n2;
    };
    ComplexVariable& operator*(const double n1, ComplexVariable& n2){
        return n2;
    };
    // / //------------------------------------------------------------------
    ComplexVariable& operator/(ComplexVariable& n1, const double n2){
        return n1;
    };
    //==//-------------------------------------------------------------------
    ComplexVariable& operator==(ComplexVariable& n1, ComplexVariable& n2){
        return n1;
    };
    ComplexVariable& operator==(ComplexVariable& n1, const double n2){
        return n1;
    };    


}// namespace solver