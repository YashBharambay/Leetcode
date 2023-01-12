// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

bool isprime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    
    if(n%2==0 || n%3==0) return false;
    
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0 || n%(i+2)==0){
            return false;
        }
    }
        return true;
}

int main() {
    // Write C++ code here
   int n=10;
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    // printf("%s", isprime(n) ? "true" : "false");
    return 0;
}
