//
// Created by yury on 17.06.2021.
//

#ifndef UNTITLED5_DOT_HPP
#define UNTITLED5_DOT_HPP
#include <iostream>
#include "exception.hpp"

class Dot{
private:
    int x;
    int y;

public:
    Dot(){
        x = 0;
        y  = 0;
    }
    virtual ~Dot() = default;

    Dot(int x1, int y1){
        if (x1 < 0 || y1 < 0)  throw Exception("Invalid argument", x1, y1);
        x = x1;
        y = y1;
    }
    virtual void print(){
        std::cout<< "x: " << x << std::endl << "y: " << y << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& out, const Dot& d){
        return out << "x: " << d.x << std::endl << "y: " << d.y << std::endl;
    }
    friend std::istream& operator>>(std::istream& in, Dot& d){
        in >> d.x;
        in >> d.y;
        if (d.x < 0 || d.y < 0) throw Exception("Invalid argument", d.x, d.y);
        return in;
    }
    Dot operator+(const Dot& a){
        Dot buf(x+a.x, y+a.y);
        return buf;
    }

    virtual int getx(){return x;}
    virtual int gety(){return y;}
};

#endif //UNTITLED5_DOT_HPP
