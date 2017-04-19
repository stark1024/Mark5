#include <iostream>
#include <cstddef>
using namespace std;

struct node{
	int wt;
	node *left = NULL;
	node *right = NULL;
};

struct node *point = NULL;

int list[4] = {5, 7, 3, 4};

int least(){
	int min = list[0], i;
	for(i=0; i<4; i++){
		if(min>list[i])
			min = list[i];
	}
	return min;
}

void rem(int n){
	int i;
	for(i=0; list[i]!=n; i++){}
	list[i] = 
}

void ins(int a){
	node *n, *r, *l;
	n = new node;
	r = new node;
	l = new node;
	n->left = l;
	n->right = r;
	r->wt = least;
	
}

int main(){
	
return 0;
}
