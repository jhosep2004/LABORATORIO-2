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
    int inicio,fin; 
    do{ 
        cout<<"ingrese inicio: "; 
        cin>>inicio; 
        cout<<"ingrese final: "; 
        cin>>fin; 
    }while(fin<inicio); 
    for(int i=inicio ;i<=fin;i++){ 
        if(primo(i)==true){ 
            cout<<i<<" "; 
        } 
    } 
    return 0; 
}