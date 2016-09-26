using namespace std;
#include <iostream>

int* nombrePremier(int n){
  int* T = new int[n];
  for(int i = 0; i<n; i++){
    T[i] = i;
  }
  return T;
}

int main(){
  cout<<"Test sur les tableaux : "<<endl;
  int n = 10;
  int* T = nombrePremier(n);
  for(int i = 0; i<n; i++){
    cout<<T[i]<<endl;
  }
  delete T;
}
