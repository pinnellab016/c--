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

void menu_ristretto(int &scelta){
    cout<<"1. Inserisci operandi"<<endl;
    cout<<"0. Esci"<<endl;
    cout<<"Inserisci la tua scelta: ";
    cin>>scelta;
    while (scelta<0 || scelta>1){
        cout<<"Scelta non valida, riprova: ";
        cin>>scelta;
    }
}
void menu_completo(int &scelta){
    cout<<"1. Inserisci operandi"<<endl;
    cout<<"2. Visualizza operandi"<<endl;
    cout<<"3. Addizione"<<endl;
    cout<<"4. Sottrazione"<<endl;
    cout<<"5. Moltiplicazione"<<endl;
    cout<<"6. Divisione"<<endl;
    cout<<"0. Esci"<<endl;
    cout<<"Inserisci la tua scelta: ";
    cin>>scelta;
    while (scelta<0 || scelta>6){
        cout<<"Scelta non valida, riprova: ";
        cin>>scelta;
    }
}

void inserisci_operandi(double &n1, double &n2, float &ins){
    cout<<"Inserisci il primo operando: ";
    cin>>n1;
    cout<<"Inserisci il secondo operando: ";
    cin>>n2;
    ins = true;
}

void visualizza_operandi(double &n1, double &n2, float &ins){
    if (ins){
        cout<<"Il primo operando è: "<<n1<<endl;
        cout<<"Il secondo operando è: "<<n2<<endl;
    } else {
        cout<<"Nessun operando inserito."<<endl;
    }
}

void addizione(double n1, double n2){
    cout<<"La somma è: "<<n1 + n2<<endl;
}
void sottrazione(double n1, double n2){
    cout<<"La differenza è: "<<n1 - n2<<endl;
}
void moltiplicazione(double n1, double n2){
    cout<<"Il prodotto è: "<<n1 * n2<<endl;
}
void divisione(double n1, double n2){
    if (n2 != 0){
        cout<<"Il quoziente è: "<<n1 / n2<<endl;
    } else {
        cout<<"ERRORE: divisione per zero!!!"<<endl;
    }
}

int main(){
    int scelta;
    double num1, num2;
    float inseriti = false;
    while (true){
        cout<<"*** MENU PRINCIPALE ***"<<endl;

        if (!inseriti) menu_ristretto(scelta);
        else menu_completo(scelta);
        
        switch(scelta){
            case 1: inserisci_operandi(num1, num2, inseriti);
                    break;
            case 2: visualizza_operandi(num1, num2, inseriti);
                    break;
            case 3: addizione(num1, num2);
                    break;
            case 4: sottrazione(num1, num2);
                    break;
            case 5: moltiplicazione(num1, num2);
                    break;
            case 6: divisione(num1, num2);
                    break;
            case 0: cout<<"Arrivederci!"<<endl;
                    return 0;
        
        }
    }
}