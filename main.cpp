//
//  main.cpp
//  suite_Conway
//
//  Created by Thomas JAULGEY on 06/09/2019.
//  Copyright © 2019 Thomas JAULGEY. All rights reserved.
//
#include "fonction.h"
#include <iostream>
using namespace std;


int main() {
    const unsigned int max = 100;
    cout<<"Cet algorithme calcule la suite de Conway jusqu'a une valeur de "<< max <<"chiffres."<<endl;
    int valeur_souhaitee;
    cout<<"Quelle valeur de la suite souhaitez vous voir ? ";
    cin>> valeur_souhaitee;
    while (valeur_souhaitee > max){
        cout<<"ERREUR, veuillez saisir une valleur maximale de "<< max << " : ";
    }
    valeur_souhaitee--; // on remet par rapport à 0 (16ème valeur crspd à u15)
    
    suite_conway(max, valeur_souhaitee);
    
    return 0;
}
