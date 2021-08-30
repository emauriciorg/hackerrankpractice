#include <iostream>
#include <vector>
#include <math>


using namespace std;



double square (Vector& V){
    double sum =0;
    for(int i=0; i!=v.size();i++){
        sum += sqrt(v[i]);
    }
    return sum;
}



int main(void){

    try{
        Vector v(-27)
    }
    catch(length_error){
        cout<<"Length error\n";
    }
    catch(bad_alloc)
    {
        cout<<"bad alloc error\n";
    }

    return 0;
}