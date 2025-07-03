#include <iostream>
using namespace std;


int SumN(int n){
    int sum =0;
    for(int i=0;i<=n; i++){
        sum +=i;

    }
    return sum;
}

int main(){
    cout<<SumN (4) <<endl;
return 0;
}