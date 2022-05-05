#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cout<<"ingrese la cantidad de estudiantes: "; 
    cin>>n; 
    int nota1,nota2,nota3; 
    for (int i=0;i<n;i++){ 
        cout<<"ALUMNO "<<i+1<<endl; 
        cout<<"ingrese nota 1: "; 
        cin>>nota1; 
        cout<<"ingrese nota 2: "; 
        cin>>nota2; 
        cout<<"ingrese nota 3: "; 
        cin>>nota3; 
        cout<<"El promedio de este alumno es: "<<(nota1+nota2+nota3)/3<<endl; 
    } 
}