using namespace std;
#include <iostream>
#include "NombrePremier.cpp"
int main(){
  int n = 1000;
  NombrePremier* T = new NombrePremier(n);
  T->nombrePremierInitialisation();
  T->afficher();
  delete T;
}
