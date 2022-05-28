#include<iostream>
#include<string>
using namespace std;
const int MAX_SIZE = 4;
template<class t>
class stack {
	int top;
	t item[MAX_SIZE];
public:
	stack() :top(-1) {}
	bool isEmpty()
	{
		return top < 0;
	}

	bool Full()
	{
		return top >= MAX_SIZE-1 ;
	}

	void push(t Element)
	{
		if (top >= MAX_SIZE-1)
		{
			cout << "Stack full on push";
		}
		else
		{
			top++;
			item[top] = Element;
		}
	}
	void pop()
	{
		if (isEmpty())
			cout << "stack empty on pop";
		else
			top--;
	}

	t getTop()
	{

			return item[top];

	}
	void print(string n) {
		cout << n << " [ ";
		for (int i = 0; i <= top; i++)
		{
			cout << item[i] << " ";
		}
		cout << "]";
		cout << endl;

	}

	bool areSame()
{
	int first = item[0];
    if((!isEmpty())&&(!Full()))
        return 0;
    else {
	for (int i = 1; i <=top; i++)
		if (item[i] != first)
            return 0;
         }
    return 1;
}

	void pushAll(t arr[])
	{
		for (int i=0;i<MAX_SIZE; i++)
			push(arr[i]);
	}
};

bool check(int arr[])
{
int first = arr[0];
if (arr[0]==0)
    return 0;
else {
    for (int i = 1; i < 6; i++)
        if (arr[i] != first)
        return 0;
     }
return 1;
}



int main() {
	stack<int>s1;
	stack<int>s2;
	stack<int>s3;
	stack<int>s4;
	stack<int>s5;
	stack<int>s6;

	int arr1[]={1,2,2,1};
	int arr2[]={4,4,4,3};
	int arr3[]={2,1,2,1};
	int arr4[]={4,3,3,3};

	s1.pushAll(arr1);
	s2.pushAll(arr2);
	s3.pushAll(arr3);
	s4.pushAll(arr4);


	cout<<"you should write (s1 or s2 or s3 or s4 or s5 or s6) only"<<endl<<endl;

	while(true){
	s1.print("s1");
	s2.print("s2");
	s3.print("s3");
	s4.print("s4");
	s5.print("s5");
	s6.print("s6");

	int arrCheck[]={s1.areSame(),s2.areSame(),s3.areSame(),s4.areSame(),s5.areSame(),s6.areSame()};
	
	if(check(arrCheck)){
		cout<<"Congratulations, you have successfully completed the game"<<endl<<endl;
		break;
	}
	else
	{
		
		string src,dis;
		cout<<"Source : ";
		cin>>src;
		cout<<"Destination  : ";
		cin>>dis;

			
		
		

		if (src=="s1")
		{
			if(dis=="s2")
			{
				if(((s1.getTop()==s2.getTop())||(s2.isEmpty()))&&(!(s1.isEmpty())&&(!(s2.Full()))))
				{
					s2.push(s1.getTop());
					s1.pop();
				}
			}
			else if(dis=="s3")
			{
				if(((s1.getTop()==s3.getTop())||(s3.isEmpty()))&&(!(s1.isEmpty())&&(!(s3.Full()))))
				{
					s3.push(s1.getTop());
					s1.pop();
				}
			}
			else if(dis=="s4")
			{
				if(((s1.getTop()==s4.getTop())||(s4.isEmpty()))&&(!(s1.isEmpty())&&(!(s4.Full()))))
				{
					s4.push(s1.getTop());
					s1.pop();
				}
			}
			else if(dis=="s5")
			{
				if(((s1.getTop()==s5.getTop())||(s5.isEmpty()))&&(!(s1.isEmpty())&&(!(s5.Full()))))
				{
					s5.push(s1.getTop());
					s1.pop();

				}
			}
			else if(dis=="s6")
			{
				if(((s1.getTop()==s6.getTop())||(s6.isEmpty()))&&(!(s1.isEmpty())&&(!(s6.Full()))))
				{
					s6.push(s1.getTop());
					s1.pop();
				}
			}

		}

		else if (src=="s2")
		{
			if(dis=="s1")
			{
				if(((s2.getTop()==s1.getTop())||(s1.isEmpty()))&&(!(s2.isEmpty())&&(!(s1.Full()))))
				{
					s1.push(s2.getTop());
					s2.pop();
				}
			}
			else if(dis=="s3")
			{
				if(((s2.getTop()==s3.getTop())||(s3.isEmpty()))&&(!(s2.isEmpty())&&(!(s3.Full()))))
				{
					s3.push(s2.getTop());
					s2.pop();
				}
			}
			else if(dis=="s4")
			{
				if(((s2.getTop()==s4.getTop())||(s4.isEmpty()))&&(!(s2.isEmpty())&&(!(s4.Full()))))
				{
					s4.push(s2.getTop());
					s2.pop();
				}
			}
			else if(dis=="s5")
			{
				if(((s2.getTop()==s5.getTop())||(s5.isEmpty()))&&(!(s2.isEmpty())&&(!(s5.Full()))))
				{
					s5.push(s2.getTop());
					s2.pop();
				}
			}
			else if(dis=="s6")
			{
				if(((s2.getTop()==s6.getTop())||(s6.isEmpty()))&&(!(s2.isEmpty())&&(!(s6.Full()))))
				{
					s6.push(s2.getTop());
					s2.pop();
				}
			}

		}

		else if (src=="s3")
		{
			if(dis=="s2")
			{
				if(((s3.getTop()==s2.getTop())||(s2.isEmpty()))&&(!(s3.isEmpty())&&(!(s2.Full()))))
				{
					s2.push(s3.getTop());
					s3.pop();
				}
			}
			else if(dis=="s1")
			{
				if(((s3.getTop()==s1.getTop())||(s1.isEmpty()))&&(!(s3.isEmpty())&&(!(s1.Full()))))
				{
					s1.push(s3.getTop());
					s3.pop();
				}
			}
			else if(dis=="s4")
			{
				if(((s3.getTop()==s4.getTop())||(s4.isEmpty()))&&(!(s3.isEmpty())&&(!(s4.Full()))))
				{
					s4.push(s3.getTop());
					s3.pop();
				}
			}
			else if(dis=="s5")
			{
				if(((s3.getTop()==s5.getTop())||(s5.isEmpty()))&&(!(s3.isEmpty())&&(!(s5.Full()))))
				{
					s5.push(s3.getTop());
					s3.pop();
				}
			}
			else if(dis=="s6")
			{
				if(((s3.getTop()==s6.getTop())||(s6.isEmpty()))&&(!(s3.isEmpty())&&(!(s6.Full()))))
				{
					s6.push(s3.getTop());
					s3.pop();
				}
			}

		}

		else if (src=="s4")
		{
			if(dis=="s2")
			{
				if(((s4.getTop()==s2.getTop())||(s2.isEmpty()))&&(!(s4.isEmpty())&&(!(s2.Full()))))
				{
					s2.push(s4.getTop());
					s4.pop();
				}
			}
			else if(dis=="s3")
			{
				if(((s4.getTop()==s3.getTop())||(s3.isEmpty()))&&(!(s4.isEmpty())&&(!(s3.Full()))))
				{
					s3.push(s4.getTop());
					s4.pop();
				}
			}
			else if(dis=="s1")
			{
				if(((s4.getTop()==s1.getTop())||(s1.isEmpty()))&&(!(s4.isEmpty())&&(!(s1.Full()))))
				{
					s1.push(s4.getTop());
					s4.pop();
				}
			}
			else if(dis=="s5")
			{
				if(((s4.getTop()==s5.getTop())||(s5.isEmpty()))&&(!(s4.isEmpty())&&(!(s5.Full()))))
				{
					s5.push(s4.getTop());
					s4.pop();
				}
			}
			else if(dis=="s6")
			{
				if(((s4.getTop()==s6.getTop())||(s6.isEmpty()))&&(!(s4.isEmpty())&&(!(s6.Full()))))
				{
					s6.push(s4.getTop());
					s4.pop();
				}
			}

		}

		else if (src=="s5")
		{
			if(dis=="s2")
			{
				if(((s4.getTop()==s2.getTop())||(s2.isEmpty()))&&(!(s5.isEmpty())&&(!(s2.Full()))))
				{
					s2.push(s5.getTop());
					s5.pop();
				}
			}
			else if(dis=="s3")
			{
				if(((s5.getTop()==s3.getTop())||(s3.isEmpty()))&&(!(s5.isEmpty())&&(!(s3.Full()))))
				{
					s3.push(s5.getTop());
					s5.pop();
				}
			}
			else if(dis=="s4")
			{
				if(((s5.getTop()==s4.getTop())||(s4.isEmpty()))&&(!(s5.isEmpty())&&(!(s4.Full()))))
				{
					s4.push(s5.getTop());
					s5.pop();
				}
			}
			else if(dis=="s1")
			{
				if(((s5.getTop()==s1.getTop())||(s1.isEmpty()))&&(!(s5.isEmpty())&&(!(s1.Full()))))
				{
					s1.push(s5.getTop());
					s5.pop();
				}
			}
			else if(dis=="s6")
			{
				if(((s5.getTop()==s6.getTop())||(s6.isEmpty()))&&(!(s5.isEmpty())&&(!(s6.Full()))))
				{
					s6.push(s5.getTop());
					s5.pop();
				}
			}

		}

		else if (src=="s6")
		{
			if(dis=="s2")
			{
				if(((s6.getTop()==s2.getTop())||(s2.isEmpty()))&&(!(s6.isEmpty())&&(!(s2.Full()))))
				{
					s2.push(s6.getTop());
					s6.pop();
				}
			}
			else if(dis=="s3")
			{
				if(((s6.getTop()==s3.getTop())||(s3.isEmpty()))&&(!(s6.isEmpty())&&(!(s3.Full()))))
				{
					s3.push(s6.getTop());
					s6.pop();
				}
			}
			else if(dis=="s4")
			{
				if(((s6.getTop()==s4.getTop())||(s4.isEmpty()))&&(!(s6.isEmpty())&&(!(s4.Full()))))
				{
					s4.push(s6.getTop());
					s6.pop();
				}
			}
			else if(dis=="s5")
			{
				if(((s6.getTop()==s5.getTop())||(s5.isEmpty()))&&(!(s6.isEmpty())&&(!(s5.Full()))))
				{
					s5.push(s6.getTop());
					s6.pop();
				}
			}
			else if(dis=="s1")
			{
				if(((s6.getTop()==s1.getTop())||(s1.isEmpty()))&&(!(s6.isEmpty())&&(!(s1.Full()))))
				{
					s1.push(s6.getTop());
					s6.pop();
				}
			}

		}

	}
	}
}
