#include <iostream> 
using namespace std; 
int main() { 
    int a; 
    cout<<"ingrese cantidad de numeros : "; 
    cin>>a; 
    int numeros[a]; 
    for (int i=0;i<a;i++){ 
        cout<<"numero : "; 
        cin>>numeros[i]; 
    } 
    int cont=0; 
    int media; 
    int mayor=numeros[0]; 
    int menor=numeros[0]; 
    for(int j=0;j<a;j++){ 
        cont=cont+numeros[j]; 
        if (mayor<numeros[j]){ 
            mayor=numeros[j]; 
        } 
        if (menor>numeros[j]){
            menor=numeros[j]; 
        } 
    } 
    media=cont/a; 

    cout<<"el numero menor es : "<<menor<<endl; 
    cout<<"el numero mayor es : "<<mayor<<endl; 
    cout<<"la media es : "<<media; 
}