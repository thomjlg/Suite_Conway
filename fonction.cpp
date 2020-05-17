//
//  fonction.cpp
//  suite_Conway
//
//  Created by Thomas JAULGEY on 06/09/2019.
//  Copyright © 2019 Thomas JAULGEY. All rights reserved.
//
#include "fonction.h"
#include <stdio.h>
#include <iostream>
using namespace std;

void suite_conway(unsigned int max, unsigned int valeur_souhaitee){
    unsigned int tab[max];
    unsigned int i; // pour circuler dans le tableau
    // initialisation
    i=max-1; //case maximale du tableau
    tab[i]=1;
    
    while(i >= (max - valeur_souhaitee)){
        
        i--;
    }
}
