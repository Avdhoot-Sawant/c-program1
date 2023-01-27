#include <iostream>
using namespace std;

int reverseDigit(int N){
    
    int num=0;
    
    while(N!=0){
        int x=N%10;
        N/=10;
        num=num*10+x;
    }
    
    return num;
    
}
int main() {

cout<<reverseDigit(2234);
    return 0;
}
