#include <iostream>
#include <cmath>
using namespace std;
//variavel classe 
class Triangulo{
    private:
       double a, b, c;
    public:
      Triangulo(double lado1, double lado2, double lado3){
         a=lado1;
         b=lado2;
         c=lado3;
      }
      
//variavel de calculo 
    double calcularArea(){
       double p = (a + b + c)/2.0;
       double area(p*(p-a)*(p-b)*(p-c));
       return area;
    }
    //colocando variaveis para colocar valores de outras variaveis
    double getlado1(){return a;}
    double getlado2(){return b;}
    double getlado3(){return c;}
};
int main() {
    double a, b, c;
    
    //interface do usuario de valores do triangulo x
    cout<<"digite a medidas dos lados do triangulo X (separados por espaço): ";
    cin >> a>>b>>c;
    Triangulo X(a, b, c);
    //interface do usuario de valores do triangulo y
    cout<<"digite a medidas dos lados do triangulo Y (seprandos por espaço): ";
    cin>>a>>b>>c;
    Triangulo Y(a, b, c);
    //puxando o calculo e colocando os valores nela
    double AreaX= X.calcularArea();
    double AreaY= Y.calcularArea();
    
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
