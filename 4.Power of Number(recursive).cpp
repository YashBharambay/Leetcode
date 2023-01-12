// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int power(int x,int n){
   if(n==0) return 1;
   
   int temp = power(x,n/2);
   temp = temp*temp;
   
   if(n%2==0) return temp;
   else return temp*x;
}

int main() {
    // Write C++ code here
    int x=3;
    int n=5;
    cout<<power(x,n);

    return 0;
}
