using namespace std;
#include <iostream>
#include "NombrePremier.cpp"

int main(){
  int n = 0;
  cout<<"Veuillez entrez une valeur jusqu'à laquel calculer les nombres premiers :!";
  cin>>n;
  NombrePremier* T = new NombrePremier(n);
  T->nombrePremierInitialisation();
  T->afficher();
  delete T;
}
