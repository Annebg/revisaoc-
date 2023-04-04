#include<iostream>
using namespace std;
int main(){
	float v1,v2,resultado;
	cout<<"informe um numero para divisao:";
	cin>>v1;
	cout<<"informe outro numero para divisao:";
	cin>>v2;
	if(v2==0){
		cout<<"Nao podemos dividir por zero"<<endl;
	}
	else{
		resultado= v1/v2;
		cout<<"o resultado eh:"<<resultado<<endl;
	}
}
