#include "Vector.h"
#include <exception>
using namespace my_vector;

Vector::Vector(int s)
:elem{new double[s]},sz{s}
{

}

double& Vector::operator[](int i){
   if (i<0 || size()<=i) throw out_of_range{"Vector::operator[]"};

    return elem[i];
}

int Vector::size(){

    return sz;
}