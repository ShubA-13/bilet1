#include <iostream>
#include "DOT.hpp"
#include "DotEv.hpp"
#include <vector>
#include <algorithm>

int main() {
    Dot p1(95, 100);
    p1.print();

    try{
        Dot p2(-5, 90);
    }
    catch (Exception& e){
        std::cout<<e.what() << std::endl;
        e.print();
    }
    Dot p3(5, 0);
    p3.print();
    std::cout<<p1+p3;

    DotEv p4(3,5,8);
    p4.print();
    DotEv p5(3,76,8);
    DotEv p6(5,3,32);
    DotEv p7(7546,5,8);
    DotEv p8(3,43,8);

    std::vector<DotEv> v;
    v.push_back(p4);
    v.push_back(p5);
    v.push_back(p6);
    v.push_back(p7);
    v.push_back(p8);
    std::sort(v.begin(), v.end(), [](DotEv& a, DotEv& b){
        return a.distance() < b.distance();
    });
    for (DotEv i : v){
        i.print();
    }
}
