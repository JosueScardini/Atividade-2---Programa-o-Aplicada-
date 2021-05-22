#include <iostream>
#include <string>

using namespace std;

int troca(string* palavra, char L1, char L2, string* palavranova){
int qtdtrocas=0, vetorpalavra;
string P1;
string P2;
P1= *palavra;
vetorpalavra = P1.size();
 
 for (int i=0; i<=vetorpalavra; i++){
      if (P1[i] == L1){
        P2[i]=L2;
      }else{
        P2[i]= P1[i];
      }
 qtdtrocas=qtdtrocas+1;
 }
  *palavranova= P2[vetorpalavra];
  return qtdtrocas;
}

int main() {
char L1, L2;
string palavra, palavranova, P1, P2;
int qtdtrocas;

cout<< "Digite uma palavra "<<endl;
cin>> palavra;  

cout<< "A partir dessa palavra digite a letra a ser substituída "<<endl;
cin>> L1;

cout<< "Digite a letra que será colocada no lugar "<<endl;
cin>>L2;

int resultadofinal = troca(&palavra,L1, L2, &palavranova);

cout<<"A palavra digitada é: "<<palavra<<endl;
cout<<"A palavra modificada é: "<<P2<<endl;
cout<<"A quantidade de trocas foi: "<<qtdtrocas<<endl;



}