// Criar um programa em c++ que realize as 4 operações 

#include<iostream>
using namespace std;
int main(){
	float n1,n2,res;
	cout<<"Informe o primeiro numero:";
	cin>>n1;
	if (n1==0){
		cout<<"O primeiro numero nao pode ser 0"<<endl;
	}
	else{ 
		cout<<"Informe o primeiro numero:";
	cin>>n2;
	if (n2==0){
		cout<<"O primeiro numero nao pode ser 0"<<endl;
	}
	else{
	res= n1+n2;
	cout<<"A soma eh:"<<res<<endl;
	res=n1-n2;
	cout<<"A subtracao eh:"<<res<<endl;
	res=n1*n2;
	cout<<"A multiplicacao e:"<<res<<endl;
	res= n1/n2;
	cout<<"A divisao eh: "<<res<<endl;
}
	}
	
}
