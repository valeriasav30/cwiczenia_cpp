#include<iostream>
#include<cstdlib>
#include<ctime>
 
using namespace std;
 
int main()
{
    const int n = 10;   //określenie wielkości tablicy
    
    srand(time(NULL)); //gwarantuje, że każdorazowe
                                                //uruchomienie programu spowoduje
                                                //wygenerowanie innej sekwencji liczb
        int tab[n]; //deklaracja tablicy jednowymiarowej o 10 elementach
        for(int i=0;i<n;i++)
        {
                tab[i] = rand()%100; //wygenerowanie liczb z zakresu [0..99]
                cout<<tab[i]<<" ";      //wypisanie wygenerowanych liczb
        }
        
        cout<<endl;
        
        for(int i=0;i<n;i++)
                if(tab[i]%2==0) //lub if(!(tab[i]%2))
                        cout<<tab[i]<<" "; //wypisanie liczb parzystych
                        
        cout<<endl;
        
        for(int i=0;i<n;i++)
                if(tab[i]%2) //lub if(tab[i]%2==1)
                        cout<<tab[i]<<" "; //wypisanie liczb nieparzystych
        
        cout<<endl;
        
        system("pause");
        
        return 0;
}
