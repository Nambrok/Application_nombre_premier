using namespace std;
#include <iostream>
#include <stdlib.h>
#include "NombrePremier.cpp"

int main(int argc, char *argv[]){

  if(argc > 2){
    cerr<<"Le programme ne prend qu'un seul argument entier."<<endl;
    exit(0);
  }
  else if(argc < 2){
    cerr<<"Le programme prend un entier en entrée qui représente le nombre limite maximal."<<endl;
    cerr<<" -./a.out [entier]"<<endl;
    exit(0);
  }
  else{
    int n = atoi(argv[1]);

    NombrePremier T(n);
    T.afficherOP();
  }
}
