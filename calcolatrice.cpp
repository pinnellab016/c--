/*
Scrivi un programma che chiede all'utente di inserire due numeri (operandi) di tipo double.
Il programma visualizza poi il menu seguente:
1. Addizione
2. Sottrazione
3. Moltiplicazione
4. Divisione
0. Esci
L'utente inserisce un numero per effettuare una scelta e, se questa è inesistente, il programma stampa un messaggio di errore e visualizza nuovamente il menu.
Se viene scelta l'opzione 1,2 o 3, il programma stampa il risultato dell'operazione corrispondente applicata agli operandi, e visualizza nuovamente il menu, mentre se il divisore è nullo il programma stampa un messaggio d'errore e rintrona al menu.
*/

#include <iostream>
using namespace std;

int main(){
    int scelta;
    double num1, num2;
    while (true){
        cout<<"*** MENU PRINCIPALE ***"<<endl;
        cout<<"1. Inserisci operandi"<<endl;
        cout<<"2. Addizione"<<endl;
        cout<<"3. Sottrazione"<<endl;
        cout<<"4. Moltiplicazione"<<endl;
        cout<<"5. Divisione"<<endl;
        cout<<"0. Esci"<<endl;
        cout<<"Inserisci la tua scelta: ";
        cin>>scelta;
        while (scelta<0 || scelta>5){
            cout<<"Scelta non valida, riprova: ";
            cin>>scelta;
        }

        switch(scelta){
            case 1: inserisci_operandi();
                    break;
            case 2: addizione();
                    break;
            case 3: sottrazione();
                    break;
            case 4: moltiplicazione();
                    break;
            case 5: divisione();
                    break;
            case 0: cout<<"Arrivederci!"<<endl;
                    return 0;
        }
    }