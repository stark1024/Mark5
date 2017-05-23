#include <iostream>
using namespace std;

int pr = 0;
char task[5] = {'A', 'B', 'C', 'D', 'E'};
int profit[5] = {20,15,10,5,1};
int deadline[5] = {2,2,1,3,3};

void sort(){
	 int i,j,t;
	 char temp;
	 for(i=0; i<5; i++){
        for(j=i; j<5; j++){
            if(profit[i]<profit[j]){
                t = profit[i];
                profit[i] = profit[j];
				profit[j] = t;
				
				t = deadline[i];
                deadline[i] = deadline[j];
				deadline[j] = t;
				
				temp = task[i];
                task[i] = task[j];
				task[j] = temp;
			}
		}
	}
}

int main(){
	int i,j,max=deadline[0];
	for(i=0;i<5;i++){
		if(max<deadline[i])
			max=deadline[i];
	}
	sort();
	i=0;
	while(max!=0){
		//cout<<"gone through: "<<task[i]<<" "<<profit[i]<<" "<<deadline[i]<<endl;
		if(deadline[i]==max){
			cout<<task[i]<<endl;
			pr += profit[i];
			deadline[i]=-1;
			for(j=0;j<5;j++){
				if(deadline[j]>=max){
					deadline[j]-=1;
				}
			}
			max--;
			i=0;
		}else{
			i++;
		}
	}
	cout<<pr<<endl;
	cin>>i;
return 0;
}