using namespace std;
#include <iostream>

class NombrePremier{

private:
    int* T;
    int n;

public:

    NombrePremier(int n){
      this->T = new int[n];
      this->n = n;
    }

    void nombrePremierInitialisation(){
      for(int i = 0; i<this->n; i++){
        this->T[i] = 1;
      }
    }

    void afficher(){
      for(int i = 0; i<this->n; i++){
        cout<<i<<" "<<this->T[i]<<endl;
      }
    }

    ~NombrePremier(){
      delete this->T;
    }
};
