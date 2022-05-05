#include <iostream> 
using namespace std; 
int main() { 
    int num; 
    cout<<"numero : "; 
    cin>>num; 
    string matriz[num][num]; 
    for(int i=0;i<num;i++){ 
        for (int j=0;j<num;j++){ 
            matriz[i][j]=' '; 
            if(i>=j ){ 
                matriz[i][j]='*'; 
            } 
        } 
    } 
    for(int i=0;i<num;i++){ 
        for(int j=0;j<num;j++){
            cout<<matriz[i][j]; 
        } 
        cout<<endl; 
    } 
}