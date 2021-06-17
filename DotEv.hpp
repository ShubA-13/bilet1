//
// Created by yury on 17.06.2021.
//

#ifndef UNTITLED5_DOTEV_HPP
#define UNTITLED5_DOTEV_HPP
#include <iostream>
#include "DOT.hpp"
#include <cmath>

class DotEv : public Dot{
private:
    int z;

public:
    DotEv() {
        z = 0;
    }
    ~DotEv() override = default;
    DotEv(int x1, int y1, int z1) : Dot(x1, y1){
        z = z1;
    }
    void print() {
        Dot::print();
        std::cout<< "z: " << this->z << std::endl;
    }
    float distance(){
        int x_ = getx();
        int y_ = gety();
        return sqrt(x_*x_+y_*y_+z*z);
    }
};
#endif //UNTITLED5_DOTEV_HPP
