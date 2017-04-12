#include<iostream>
using namespace std;

int main(){
    char items[4] = {'A', 'B', 'C', 'D'};
    int value[4] = {200, 240, 140, 150};
    int wt[4] = {1, 3, 2, 5};
    int density[4], i, j, cap, t, max=0;
    char temp;
    for(i=0; i<4; i++)
        density[i] = value[i]/wt[i];
    cout<<"\nEnter capacity:  ";
    cin>>cap;
    for(i=0; i<4; i++){
        for(j=i; j<4; j++){
            if(density[i]<density[j]){
                t = density[i];
                density[i] = density[j];
                density[j] = t;
                
                t = wt[i];
                wt[i] = wt[j];
                wt[j] = t;
                
                t = value[i];
                value[i] = value[j];
                value[j] = t;
                
                temp = items[i];
                items[i] = items[j];
                items[j] = t;
            }
        }
    }
    for(i=0; cap!=0; i++){
        if(cap>wt[i]){
            cout<<wt[i]<<" "<<items[i]<<"(s)\n";
            max = max + (wt[i] * density[i]);
            cap = cap - wt[i];
        } else{
            cout<<cap<<" "<<items[i]<<"(s)\n";
            max = max + (cap * density[i]);
            cap = cap - cap;
        }
    }
    cout<<"max sale is "<<max<<"\n";
return 0;
}
