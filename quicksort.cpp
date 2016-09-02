#include<iostream>
using namespace std;
void quicksort(int *a,int start,int end)
{
	int mid,min,max,temp,i;
	mid=start;
	min=start;
	if(end-start<1)
	{
			
	}
	else
	{
		for(max=start+1;max<end;max++)
		{
			if(a[max]<a[mid])
			{
				temp=a[min+1];
				a[min+1]=a[max];
				a[max]=temp;
				min++;
			}
		}
		temp=a[min];
		a[min]=a[mid];
		a[mid]=temp;
		quicksort(a,start,min);
		quicksort(a,min+1,end);
	}
	
}
int main()
{
	int d=1;
	while(d!=0){
	int a[8],i,mid,x,pos,y;
	cout<<"enter elements in array:"<<endl;
	for (i=0;i<8;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,8);
	for (i=0;i<8;i++)
	{
			cout<<a[i]<<"\t";
	}
	cout<<"\n";
	cin>>d;
	}
}
