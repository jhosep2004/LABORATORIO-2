#include <iostream> 
using namespace std; 
bool primo (int n){ 
    for(int i=2;i<=n;i++){ 
        if(n%i==0){ 
            if(n==i){ 
                return true; 
            } 
            else { 
                return false; 
            } 
        } 
    } 
    return false; 
} 
int main(){ 
    for(int i=2 ;i<=50;i++){ 
        if(primo(i)==true){ 
            cout<<i<<" "; 
        } 
    } 
    return 0; 
}