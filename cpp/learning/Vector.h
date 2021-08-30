#ifndef _MY_VECTOR_H_
#define _MY_VECTOR_H_
//#pragma once

namespace my_vector{
        class Vector{
            public : 
                Vector(int s);
                double& operator[](int i);
                int size();
            private :
                double *elem;
                int sz;
        };
}

#endif /*_MY_VECTOR_H_*/

