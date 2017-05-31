#include<iostream>
#include<math.h>
using namespace std;

//binary search tree

int main(){
	int n, i, t=0, p;
	cout<<"enter no. of elements\n";
	cin>>n;
	p=pow(2,n)-1;
	int a[i];
	for(t=0;t<i;t++)
		a[t]=-1;
	p=n;
	while(n!=0){
		cout<<"Enter element: ";
		cin>>i;
		t=0;
		while(t<p){
			if(a[0]==-1){
				a[0]=i;
				t++;
			} else if(i<a[t]){
				if(a[2*t]==-1){
					t=2*t;
					a[t]=i;
				}else{
					t=2*t;
				}
			} else if(i>a[t]){
				if(a[(2*t)+1]==-1){
					t=(2*t)+1;
					a[t]=i;
				}else{
					t=(2*t)+1;
				}
			}
		}
		n--;
	}
	t=0, n=1;
	for(i=0;i<p;i++){
		cout<<a[i]<<" ";
		if(i==t){
			cout<<endl;
			n++;
			t=t+pow(2,n);
		}
	}
return 0;
}

