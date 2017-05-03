#include <iostream>
#include <cstddef>
using namespace std;

struct node{
	int wt;
	node *left = NULL;
	node *right = NULL;
};

struct node *point = NULL;

int ls = 0;
int list[4] = {5, 7, 3, 4};

void sort(int k){
	 int i,j,t;
	 for(i=k; i<4; i++){
        for(j=i; j<4; j++){
            if(list[i]>list[j]){
                t = list[i];
                list[i] = list[j];
				list[j] = t;
			}
		}
	}
}

void ins(int a, int b){
	node *n, *r, *l;
	n = new node;
	r = new node;
	l = new node;
	n->left = l;
	n->right = r;
	l->wt = a;
	r->wt = b;
	n->wt = a+b;
}

int main(){
	sort();
	
	
return 0;
}
