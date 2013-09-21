#include<iostream>
using namespace std;
float trans(int choose,float wendu){
	float result=NULL;
	if(choose == 1){//T to K
	result=((1.0*9/5)*wendu)+32;
	}
	else if(choose == 2){
	result=(1.0*5/9)*(wendu-32);
	}
	return result;
}
int main(){
	int n;
	float wendu;
cout<<"Please choose the type of the calculation:(1:T to K,2:K to T)";
cin>>n;
cout<<"Please input the initial date:\t";
cin>>wendu;
cout<<"The result of the calculation is:\t"<<trans(n,wendu);
getchar();
getchar();
	return 0;
}
