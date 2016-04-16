#include <iostream>
#include "types.h"

int main() {
    std::cout << "\nHello world" << std::endl;

    Vec3f test;
    std::cout << "\nDefault constructor:\n\t test = " << test.toString() << std::endl;


    test.setXYZ(123.f,0.15f,-.1);
    std::cout << "\nsetXYZ:\n\t test = " << test.toString() << std::endl;

    test.setY(-43.f);
    std::cout << "\nsetY:\n\t test = " << test.toString() << std::endl;

    test.scale(2.f);
    std::cout << "\nscale:\n\t test = " << test.toString() << std::endl;

    Vec3f temp = Vec3f(1.f, 0.f, 0.5f);
    std::cout << "\n'setALL' (overloaded) constructor:\n\t temp = " << temp.toString() << std::endl;

    std::cout << "\ndot product:\n\t test.dot(temp) = " << test.dot(temp) << std::endl;

    temp = test;
    std::cout << "\nAssignment operator:\n\t temp = test => temp = " << temp.toString() << std::endl;

    temp = temp + 2.3f;
    std::cout << "\nAddition with float:\n\t temp = " << temp.toString() << std::endl;

    test = test + temp;
    std::cout << "\nAddition with another vector:\n\t test + temp => test = " << test.toString() << std::endl;

    return 0;
}
