// ELIMINARE "X" ELEMENTI DALL'ARRAY

#include <stdio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int n,n1, i,j,x,px;
    int array[100];
    
    srand(time(NULL));
    
    cout<<"numero elementi: ";
    cin>>n;
    
    for (i=0; i<n; i++){
        array[i] = rand()%101;
        
        cout<<array[i]<<" ";
    }
    
    cout<<endl<<"Quanti elementi vuoi eliminare? ";
    cin>>x;
    
    for (j=0; j<x; j++){
        cout<<"Inserisci la posizione del "<<j+1<<"° elemento da eliminare: ";
        cin>>px;
        
        for(i=px-1-j; i<n-1-j; i++){
            array[i] = array[i+1];
        }
    }
    
    n = n - x;
    
    for (i=0; i<n; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}