#include<bits/stdc++.h>
using namespace std;
struct node
{	int data;
	node *next;
};
int main()
{	int a; 
	node *head,*p;
	head=new node;
	head->next=NULL; 
	cin>>a;
	while(a!=0)
	{	p=new node;
		p->data=a;
		p->next=head->next;
		head->next=p;
		cin>>a;
	}
	p=head;
	while(p->next!=NULL)
	{	p=p->next;
		cout<<p->data<<' ';
	}
	return 0;
}
