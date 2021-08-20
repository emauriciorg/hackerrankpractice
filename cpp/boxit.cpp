#include <bits/stdc++.h>

using namespace std;

class Box {
    public:
      int len;
        int base;
        int height;

        Box (){
        }

        Box (int len,int base,int height){
            len = len;
            base = base;
            height =height;
        }
      
    public:
        int getLength(){
            return len;
        }
        int getBreadth(){
            return base;
        }
        int getheight(){
            return height;
        }

        virtual int CalculateVolume(){
            return height*base*len;
        }
        
        bool operator <(Box& b){
            if ((len> b.len)) return true;
            if ((base< b.base)&& len == b.len) return true;
            if ((height< b.height)&&(base==b.base)&&(len==b.len)) return true;
            return false;
        }
         friend ostream& operator<<(ostream& os, const Box& b);

};

        ostream& operator<<(ostream& os , Box& b){
                os<<b.len<<" "<<b.base<<" "<<b.height<<"\n";
                return os;
        }


int main (void){
    Box a;
    Box b;
    a.len    = 3;
    a.base   = 2;
    a.height = 1;

    b.len    = 4;
    b.base   = 5;
    b.height = 6;
    bool x = a<b;
    bool y = b<a;

   // cout << "is greater? "<<x <<" "<< y<<"\n";
    cout<<b;
}