/*
DICHIARAZIONE DI UN ARRAY, INSERIMENTO DATI, LETTURA DATI, AGGIUNTA ELEMENTI
 */

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    // inizializzo il generatore di numeri pseudo-casuali
    srand(time(NULL));
    
    int n, n2;
    //DICHIARAZIONE VETTORE CON UNA DIMENSIONE "FISICA" DI 100 ELEMENTI
    int array[100];

    //INSERIMENTO DIMENSIONE "LOGICA" DEL VETTORE
    cout<<"Quanti elementi vuoi inserire nel vettore?"<<endl;
    cin>>n;

    //VERIFICA "SEMPLICE" SULL'INPUT DI N
    if ( (n>100) && (n<=0) ){
        cout<<"La dimensione dell'array deve essere compresa tra 1 e 100"<<endl;
        return 0; //ESCO DAL PROGRAMMA
    }

    //VERSIONE ALTERNATIVA SULL'INPUT DI N (SOSTITUISCE LE RIGHE DA 15 A 23)
    do{
        cout<<"Quanti elementi vuoi inserire nel vettore? (inserisci un numero compreso tra 1 e 100)"<<endl;
        cin>>n;
    }
    while ( (n>100) || (n<0) );
        
    //INSERIMENTO DI N DATI ALL'INTERNO DEL VETTORE
    for (int i=0;i<n;i++){
        array[i]=rand()%101;
            
        /* METODO CHE RICHIEDE L'INSERIMENTO DI OGNI ELEMENTO DA PARTE DELL'UTENTE:
            cout<<"Inserisci il "<<i+1<<"° elemento: ";
            cin>>array[i];
        */
    }

    //STAMPA DI N DATI ALL'INTERNO DEL VETTORE
    for (int i=0;i<n;i++){
        cout<<"Il "<<i+1<<"° elemento è: "<<array[i]<<endl;
    }
    
}