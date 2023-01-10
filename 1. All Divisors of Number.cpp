// TIme complexity sq.root of N
#include <iostream>
using namespace std;

void prime(int n){
    
int i=1;
//THIS LOOP Traverses from i=1 to square root of N
// Divisors and prime factors are in pairs so this loop gives the smaller divisior of the pair
for(i=1;i*i<=n;i++){                                  
    if(n%i==0){
        cout<<i<<endl;
    }
}

// This loop traverses from sq root n to n ie. 
// This loop gives larger divisor of the pair
for(;i>=1;i--){
    if(n%i==0){
        cout<<n/i<<endl;
    }
}

}


int main() {
    // Write C++ code here
    prime(100);

    return 0;
}
