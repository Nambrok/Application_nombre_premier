using namespace std;
#include <iostream>

class NombrePremier{

private:
    int* T;
    int n;

public:

    //Le constructeur prend n (un entier) qui représente la limite maximale jusqu'à laquel le programme va calculer les
    //nombres premiers.
    //Il appelle ensuite nombrePremierInitialisation() et nombrePremierCalcul().
    NombrePremier(int n){
      this->T = new int[n];
      this->n = n;
      this->nombrePremierInitialisation();
      this->nombrePremierCalcul();
    }

    //Initialise tout le tableau T à 1.
    void nombrePremierInitialisation(){
      for(int i = 0; i<this->n; i++){
        this->T[i] = 1;
      }
    }

    //Implémentation de l'algorithme du crible d'Eratosthène qui calcul les nombres premiers.
    //Si un nombre est premier, il laisse T[id] à 1. Sinon il le met à 0. Il met ensuite tous les multiples de ce nombre premier
    //à 0. id représente le chiffre. On saute les id 0 et 1 sinon tout le reste du tableau serait mis à 0.
    void nombrePremierCalcul(){
        int i = 2,j;
        //this->T[n] : tableaux d'entiers (ou de booléens) initialisé en 1.
        Calculer le nombre de nombre premiers dans le tableau.
        while((i*i)<this->n){
          if(this->T[i]){
            j = 2*i;
            while(j < this->n){
              this->T[j] = 0;
              j+=i;
            }
          }
          i++;
        }
    }

    //Fonction afficher qui affiche tout le tableau, nombre premier ou composé.
    void afficher(){
      for(int i = 0; i<this->n; i++){
        cout<<i<<" -> "<<this->T[i]<<" | ";
        if(!(i%10)){
          cout<<endl;
        }
      }
    }

    //Affiche une liste des nombres premiers sous la forme [nombre premier]\n
    void afficherOP(){
      for(int i = 0; i<this->n; i++){
        if(this->T[i]){
          cout<<i<<endl;
        }
      }
    }

    //Destructeur, détruit juste le tableau dynamique après l'éxécution du programme.
    ~NombrePremier(){
      delete this->T;
    }
};
