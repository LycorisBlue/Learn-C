#include <stdio.h> // pour utilise la Fonction printf

int main(){
    char caractere; // initialisation
    int wholeNumber = 18; // initialisation + affectation
    float floatNumber; //initialisation

    caractere = 'a'; // affectation un peu plus bas du code

    //-------------------------------session affichage--------------------------------//
    printf("Bienvenue dans mon programme");
    printf("Un entier => %d\n", wholeNumber);// pour preciser a le compilateur que c'est un entier
    printf("Un caractere => %c\n", caractere);// pareil ici c'est un caractere
    printf("Un flottant => %f\n", floatNumber);// cas un peu special mais pareil


    return 0;
}