//Quick sort

#include<iostream>
using namespace std;

int a[7] = {2,1,6,4,9,5,3};

int quick(int i, int e){
        int l=i+1, r=e, t;
        while(r>=l){
                if(a[l]<a[i]){
                        l++;      
                }
                if(a[r]>a[i]){
              	        r--;      
                }
                if(r>=l){
                        t=a[l];
                        a[l]=a[r];
                        a[r]=t;
                }
        }
        t=a[i];
        a[i]=a[r];
        a[r]=t;
        return r;
}

int sort(int i, int e){
        if(i!=e){
                int m = quick(i, e);
                sort(i, m-1);
                sort(m+1, e);
                return 0;
        }else {
                return 0;
        }
}

int main(){
        int i;
        sort(0,6);
        for(i=0; i<7; i++){
                cout<<a[i]<<" ";         
        }
        cout<<"\n";
return 0;
}
