//
// Created by yury on 17.06.2021.
//

#ifndef UNTITLED5_EXCEPTION_HPP
#define UNTITLED5_EXCEPTION_HPP
#include <stdexcept>
#include <iostream>

class Exception : public std::invalid_argument {
private:
    int x, y;

public:
    explicit Exception(const std::string& str, int x1, int y1) : std::invalid_argument(str){
        x = x1;
        y = y1;
    }
    void print(){
        std::cout<<"Invalid argument" << "x: " << this->x << std::endl << "y: " << this->y << std::endl;
    }
};
#endif //UNTITLED5_EXCEPTION_HPP
