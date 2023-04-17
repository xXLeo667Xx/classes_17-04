#include <iostream>
#include <math.h>
using namespace std;

//variavel de calculo 
double calcularAreaTriangulo(double a, double b, double c){
    double p = (a + b + c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

int main() {
    double xa, xb, xc, ya, yb, yc;
    
    //interface do usuario de valores do triangulo x
    cout<<"digite a medidas dos lados do triangulo X (separados por espaço): ";
    cin >> xa>>xb>>xc;
    
    //interface do usuario de valores do triangulo y
    cout<<"digite a medidas dos lados do triangulo Y (seprandos por espaço): ";
    cin>>ya>>yb>>yc;
    
    //puxando o calculo e colocando os valores nela
    double AreaX= calcularAreaTriangulo(xa,xb,xc);
    double AreaY= calcularAreaTriangulo(ya,yb,yc);
    
    //interface de usuario onde mostra o resultado do calculo
    cout<<"Area do Triangulo X: "<<AreaX<<endl;
    cout<<"Area do Triangulo Y: "<<AreaY<<endl;
    
    //variaveis de caso um ser maior que o outro mostrara uma mensagem diferente
    if (AreaX>AreaY){
        cout<<"Triangulo X tem a maior area"<<endl;
    }else if(AreaX<AreaY){
        cout<<"Triangulo Y tem a maior area"<<endl;
    }else{
        cout<<"A area dos Triangulos são iguais"<<endl;
    }
   
    return 0;
}