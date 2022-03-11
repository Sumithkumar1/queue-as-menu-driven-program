//menu driven progam for queue//
#include<iostream>
using namespace std;
class queue
{
public:
int q[5],front,rear,x,result;
void enq();
void dque();
void disp();
queue()
{
	front=0;
	rear=0;
}

};
void queue::enq()
{
	if(rear>=5)
	cout<<"\nqueue overflow!!\n";
	else{
		cout<<"\n enter the number to be inserted:";
		cin>>x;
		rear++;
		q[rear]=x;
		cout<<"\n number pushed in the queue:"<<q[rear];
	}
}
void queue::dque()
{
	if(rear==0)
	cout<<"\nqueue underflow!!\n";
	else
	{
		if(front==rear){
			front=0;
			rear=0;
		}
		else
		 front++;
	}
	cout<<"\ndeletd elemnt is:";
	result=q[front];
	cout<<result;
}
void queue::disp()
{
	if(rear==0)
	cout<<"\nqueue unerflow!!\n";
	else
	cout<<"/ncontents of queue is:";
	for(int i=front+1;i<=rear;i++)
	cout<<q[i]<<"\t";
}
int main()

{
	int c;
	queue qu;
	cout<<"\n**********";
	cout<<"queue";
	cout<<"*********\n";
	do
	{
		cout<<"\n.insertion\n2.deletion\n3.display\n";
		cout<<"\n enter your chioce:";
		cin>>c;
		switch(c)
		{
			case 1:
				qu.enq();
				break;
				case 2:
				qu.dque();
				break;
				case 3:
				qu.disp();
				break;
				default:
				cout<<"\ninvalid choise!!\n";
			
		}
	}
	while(c<4);
	return 0;
}
