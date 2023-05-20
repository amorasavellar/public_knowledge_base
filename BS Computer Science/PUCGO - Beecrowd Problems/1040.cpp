#include<iostream>
#include<iomanip>

using namespace std;

int main (){
	
	float N1,N2,N3,N4,Media,MediaFinal,Exame; // Declarando variaveis
	
	cin>>N1;cin>>N2;cin>>N3;cin>>N4; // 2.0, 4.0, 7.5, 8.0
	Media=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10; // Media=((2.0*2)+(4.0*3)+(7.5*4)+(8.0*1))/10 -> Media=5.4
	
	cout<<fixed<<setprecision(1);// Definindo casas decimais.
	
	if(Media>=7.0){	cout<<"Media: "<<Media<<endl;
					cout<<"Aluno aprovado."<<endl;				   	
					} // 5.4>=7.0 // FALSE
		else{
			if(Media<5.0){	cout<<"Media: "<<Media<<endl;
							cout<<"Aluno reprovado."<<endl;
							} // 5.4<5.0 // FALSE
				else{
					if(Media>=5.0 and Media<=6.9){ //5.4>=5.0 and 5.4<=6.9 // TRUE
						cin>>Exame; //6.4
						MediaFinal= (Media+Exame)/2; //MediaFinal=(5.4+6.4)/2 //MediaFinal=5.9
							
							if(MediaFinal>=5.0){ //5.9>=5.0 //TRUE
							cout<<"Media: "<<Media<<endl;
							cout<<"Aluno em exame."<<endl;
							cout<<"Nota do exame: "<<Exame<<endl;
							cout<<"Aluno aprovado."<<endl;
							cout<<"Media final: "<<MediaFinal<<endl;
							}
								else{//Senão
								cout<<"Media: "<<Media<<endl;
								cout<<"Aluno em exame."<<endl;
								cout<<"Nota do exame: "<<Exame<<endl;
								cout<<"Aluno reprovado"<<endl; 
								cout<<"Media final: "<<MediaFinal<<endl;
								}
					}
				}
		}
	
}