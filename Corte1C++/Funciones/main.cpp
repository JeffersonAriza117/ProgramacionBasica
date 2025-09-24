#include <iostream>
using namespace std;

int sumar(int a, int b){
    int r=a+b;
    return r;
}

int restar(int c, int i){
    int t=c-i;
    return t;
}

int multiplicar(int x, int y){
    int v=x*y;
    return v;
    
}
int main(){
	
	int f=sumar(34,8);
	int h=restar(27,17);
	int j=multiplicar(117,1);
	
	cout<<"Suma:"<<f<<endl;
	
	cout<<"Resta:"<<h<<endl;
	
	cout<<"Multiplicacion:"<<j<<endl;
}
