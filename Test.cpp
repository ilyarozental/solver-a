#include "doctest.h"
#include "solver.hpp"
#include <string>
using namespace std;
using namespace solver;


TEST_CASE("Test RealVariable"){
    RealVariable x;

    CHECK(solve((x^2) == 9) == 3);
    CHECK(solve((x^2) == 81) == 9);
    CHECK(solve(9*x == 18) == 2);
    CHECK(solve(7*x+11-x == 10+7) == 1);
    CHECK(solve(49*x == 343) == 7);
    CHECK(solve(x-15 == 8) ==- 23);
    CHECK(solve(-3*(-1*x-7) == 8*x) == 4.5);
    CHECK(solve(x+7 == 5*x-1)==2);
    CHECK(solve(14*x/7 == 8)==4);
    CHECK(solve(17*x+4*x == (65-2))==3);
    CHECK(solve(x-1 == 0)==1);
    CHECK(solve(19*x == 0)==0);
    CHECK(solve(-1*x+6 == 3*x-2)==2);
    CHECK(solve(10*x+8 == 4*x+44)==6);
    CHECK(solve(3*x-x == 10)==5);
    CHECK(solve(5*x+2 == 4)==0.25);
    CHECK(solve(20+x+6==100-3+x+x) == -71);
    CHECK((solve(x+x - x - 4 == 10) == 14));
    CHECK((solve(x + 4 == 10) == 6));
    CHECK((solve((x^2)-20*x+100 == 0) == 10));
    CHECK((solve((x^2)-16*x+64 == 0) == 8));
    CHECK(solve(2*x-2 == 10) == 8);
    CHECK(solve(15*x-5*x == 10) == 1);
    CHECK(solve(2*x-3*x == 10) == -10);
    CHECK(solve(1000*x-2900 == 100) == 3);
    CHECK(solve(2*x-4==10*x) == -0.5);
    CHECK(solve(33*x/3==3*x) == 0);
    CHECK(solve(12*x/3==4) == 1);
    CHECK(solve(2*x==16+x) == 16);
    CHECK(solve(7*(x^2) == 28)==2);
    CHECK(solve(0.5*(x^2)-3*x == -4)==4);
    CHECK(solve(-1*(x^2) == -36)==6);
    CHECK(solve(19*(x^2) == 0)==0);
    CHECK(solve(-1*(x^2)+6 == -3)==3);
    CHECK(solve(5*(x^2)-25*x+30 == 0)==3);
    CHECK(solve(-3*(-1*x-7)+(x^2) == (x^2)+8*x)==4.5);
    CHECK(solve(20*(x^2)+100 == 420)==4);
    CHECK(solve((x^2) == 0)==0);
    CHECK((solve((x^2) -5*x + 6 == 0) == 3 || solve((x^2) -5*x + 6 == 0) == 2));
    CHECK((solve((x^2) -8*x + 7 == 0) == 7 || solve((x^2) -8*x + 7 == 0) == 1));
    CHECK((solve((x^2) == 9) == 3 || solve((x^2) == 9) == -3));
    CHECK((solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4));
    CHECK_THROWS(solve(3*x-x == x+x+1));
    CHECK_THROWS(solve(77*x/7 == 11*x-7));
    CHECK_THROWS(solve(8*x-4*x == 4*x+16));
    CHECK_THROWS(solve(-3*x+5 == -5*x+2*x));
    CHECK_THROWS(solve(56*x/8 == 7*x+40));
    CHECK_THROWS(solve(0*x == 9100));
    CHECK_THROWS(solve(1*x-1*x == 1));
    CHECK_THROWS(solve(36*x-36*x == 686868));
    CHECK_THROWS((solve(x/0 == 3)));
    CHECK_THROWS(solve(100*(x^2)-43 == 100*(x^2)));
    CHECK_THROWS(solve(11*x-4*(x^2) == 25+7*(x^2)));
    CHECK_THROWS(solve((x^2) == -9));
    CHECK_THROWS(solve((x^2)+16 == 0));
}


TEST_CASE("Test ComplexVariable"){

    ComplexVariable x;
    CHECK((solve((x^2) - 6*x + 9 == 0) == double(3)));
    CHECK((solve(x+3i == 6)==complex<double>(6,3)));
    CHECK((solve(x+4.0+1i ==3.0)==complex<double>(-1,-1)));
    CHECK((solve(10*x == 2.0)==complex<double>(0.2,0)));
    CHECK((solve(2*x-4 == 10) == double(7)));
    CHECK((solve(x+x-4 == 10) == double(7)));
    CHECK((solve(x+x-x-4 == 10) == double(14)));
    CHECK((solve(-1*x == 10) == double(-10)));
    CHECK((solve((x^2) == 4) == double(2) || solve((x^2) == 4) == double(-2)));
    CHECK((solve((x^2) + 12*x + 36 == 0) == double(-6)));
    CHECK((solve(x-4 == 10) == double(14)));
    CHECK((solve(2*x-4 == 10) == double(7)));
    CHECK((solve(x+x-4 == 10) == double(7)));
    CHECK((solve(x+x-x-4 == 10) == double(14)));
    CHECK((solve(-1*x == 10) == double(-10)));
    CHECK(solve(5+x==2*x) == complex(5.0));
    CHECK(solve(2*x/1==2+x) == complex(2.0));
    CHECK((solve((x^2) == -121) == complex<double>(0,-11)));
    CHECK((solve((x^2) == -100) ==  complex<double>(0,10)));
    CHECK((solve((x^2) == -49) ==  complex<double>(0,7)));
    CHECK((solve((x^2)+ 3*x - 4 == -121 + 3*x - 4) == complex<double>(0,11)));
    CHECK((solve((x^2) + 4*x/4 == -81 + x) == complex<double>(0,9)));
    CHECK((solve((x^2) + 2 + 4*x== -23 +3*x + x) == complex<double>(0,5)));
    CHECK((solve((x^2) + 6*x == -16 +12*x/2) == complex<double>(0,4)));
    ComplexVariable y;
    CHECK((solve((y^2) == -4)==complex<double> (0,2) || solve((y^2) == -4) == complex<double> (0,-2)));
    CHECK((solve((y^2) + 100 == 0) == complex<double> (0,10) || solve((y^2) + 100 == 0) == complex<double> (0,-10)));
    CHECK((solve((y^2) + 4*y + 5 == 0) == complex<double> (-2,1) || solve((y^2) + 4*y + 5 == 0) == complex<double> (-2,-1)));
    CHECK((solve((2*y^2) -6*y + 5 == 0) == complex<double> (1.5,0.5) || solve((2*y^2) -6*y + 5 == 0) == complex<double> (1.5,-0.5)));
    CHECK((solve((x^2) == -9) == complex<double>(0,3) || solve((x^2) == -9) == complex<double>(0,-3)));
    CHECK((solve((x^2) == -1) == complex<double>(0,1) || solve((x^2) == -1) == complex<double>(0-1)));
    CHECK((solve(3*(x^2)+8i==+10*x/2-4+2*(x^2)+3*x-12)==complex<double>(2,2) || solve(3*(x^2)+8i==+10*x/2-4+2*(x^2)+3*x-12)==complex<double>(6,-2)));
    CHECK((solve(3*(x^2)-10*x/2+4-2*(x^2)+8i==3*x-12)==complex<double>(2,2) || solve(3*(x^2)-10*x/2+4-2*(x^2)+8i==3*x-12)==complex<double>(6,-2)));
    CHECK((solve(4*(x^2)-4*x+4==0)==complex<double>(0.5,sqrt(3)/2) || solve(4*(x^2)-4*x+4==0)==complex<double>(0.5,-sqrt(3)/2)));
    CHECK((solve(2*(x^2)-2*x+4==0)==complex<double>(0.5,sqrt(7)/2) || solve(2*(x^2)-2*x+4==0)==complex<double>(0.5,-sqrt(7)/2)));
    CHECK((solve(4*(x^2)+4*x+2==0)==complex<double>(-2/5,sqrt(6)/5) || solve(4*(x^2)+4*x+2==0)==complex<double>(-2/5,-sqrt(6)/5)));
    CHECK((solve(4*(x^2)-6*x+5==0)==complex<double>(3/4,sqrt(11)/4) || solve(4*(x^2)-6*x+5==0)==complex<double>(3/4,sqrt(11)/4)));
    CHECK((solve((x^2)+4==0)==complex<double>(0,2) || solve((x^2)+4==0)==complex<double>(0,2)));
    CHECK((solve(4*(x^2)==-36)==complex<double>(0,3) || solve(4*(x^2)==-36)==complex<double>(0,-3)));
    CHECK((solve(3*(x^2)==-99)==complex<double>(0,sqrt(33)) || solve(3*(x^2)==-99)==complex<double>(0,-sqrt(33))));
    CHECK((solve((x^2)+64==0)==complex<double>(0,8) || solve((x^2)+64==0)==complex<double>(0,-8)));
    CHECK_THROWS((solve(x/0 == 3)));
    CHECK_THROWS(solve(x==x-5));
    CHECK_THROWS(solve(x+5i == x+complex<double>(5,0)));
    CHECK_THROWS(solve(3*x+26.0 == 3*x+complex<double>(17,0)));
    CHECK_THROWS(solve(4*x+18.0 == 4*x+complex<double>(2,0)));
    CHECK_THROWS(solve(x+14i == x+complex<double>(0,25)));
}