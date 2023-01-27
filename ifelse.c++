#include <iostream>
using namespace std;

void func(int m){
    if(m%3==0 && m%5==0){
        cout<<"Good Number";
    }
    else if(m%3==0 && m%5!=0){
        cout<<"Bad Number";
    }
    else if(m%3!=0 && m%5==0){
        cout<<"Poor Number";
    }
    else{
        cout<<"-1";
    }
}

int main() {
    
    func(30);
    
    return 0;
}
