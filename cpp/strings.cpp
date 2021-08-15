#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    cin >>a;
    cin >>b;
    char aux;

    cout<<a.size()<<" "<< b.size()<<"\n";
    cout<<a+b<<"\n";
    aux  = a[0];
    a[0] = b[0];
    b[0]  = aux;
    cout<<a<<" "<<b<<"\n";

        
    return 0;
}