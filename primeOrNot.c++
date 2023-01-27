#include <iostream>
using namespace std;

void cheakPrime(int n){
    
    if(n==0 || n==1 || n%2==0){
        cout<<n<<" is not prime number";
        return;
    }
    else{
        
        for(int a=3;a<n;a+=2){
            if(n%a==0){
                cout<<n<<" is not prime number";
                return;
            }
        }
        
        cout<<n<<" is prime number";
        return;
        
    }
    
}
int main() {
cheakPrime(9);
    return 0;
}
