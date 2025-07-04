#include <iostream>
using namespace std;


void changex(int x){
    x =2*x;
    cout << "x =" << x << endl;
}
 int main(){
    int x=6;
    changex(x);

   cout << "x = " << x << endl;
    return 0;
 }