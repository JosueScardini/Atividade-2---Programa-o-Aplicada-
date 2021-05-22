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
         P2 = P2 + L2;
        cout << "Valor de P2 no IF: " << P2[i] << endl;
      }else{
         P2 = P2 + P1[i];
        cout << "Valor de P2 no ELSE: " << P2[i] << endl;
      }
 qtdtrocas=qtdtrocas+1;
 }
  cout << "P2 vale: " << P2 << endl;
  *palavranova=  P2;
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
cout<<"A palavra modificada é: "<<palavranova<<endl;
cout<<"A quantidade de trocas foi: "<<resultadofinal<<endl;



}