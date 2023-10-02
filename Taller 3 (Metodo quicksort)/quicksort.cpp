#include <iostream>

using namespace std;

void quicksort (int* arr, int izq, int der){
    int i = izq; int j = der; 
    int temporal; 
    int pivote = arr[(izq + der) /2]; 

    
    while (arr[i] < pivote) i++;
    while (arr[j] > pivote) j--;

        if (i <= j) {
           
            temporal = arr[i];
            arr[i] = arr[j];
            arr[j] = temporal;
            i++; j--;
        }

        if (izq < j){
            quicksort (arr, izq, j); 
        }
        if (i < der){
            quicksort (arr, i, der); 
        }  
}

int main(){
    cout<<"METODO QUICKSORT: \n";
    cout<<"LISTA ORIGINAL: \n";
    cout<<"12, 43, 22, 21, 62, 145, 41, 11, 1, 12, 211, 54, 76, 89, 98, 34, 35, 48, 15, 17 \n";
    cout<<"LISTA ORDENADA: \n";
    int arr[20] = {12, 43, 22, 21, 62, 145, 41, 11, 1, 12, 211, 54, 76, 89, 98, 34, 35, 48, 15, 17};

    quicksort(arr, 0, 19);

    for (int i = 0; i < 20; i++)
    {
        cout<< arr[i] <<" ";
    }
    system("pause");
    return 0;
}
