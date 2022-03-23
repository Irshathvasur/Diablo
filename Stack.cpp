#include<iostream>
#define max 5

using std::cout,std::cin,std::endl;

int top=0;
class stack
{
    int item[max];
    public:
    void push(int x);
    void pop();
    void display();
};

void stack::push(int x)
{
    if(top==max)
    {
        cout<<"\nStack is full";
    }
    else
    {
    item[top]=x;
    top++;
    cout<<"pushed successfully into stack";
    }
}

void stack::pop()
{
    if(top==0)
    {
        cout<<"\nStack is empty";
    }
    else
    {
    cout<<"\nThe popped element is "<<item[--top]<<endl;
    }
}

void stack::display()
{
    cout<<"The elements in the stack are\n";
    for(int i=top-1;i>=0;i--)
    {
        cout<<item[i]<<"\t";
    }
}

int main()
{
    stack obj;
    int ch,x;
    system("cls");
    cout<<"Stack";
    cout<<"\n1.Push";
    cout<<"\n2.Pop";
    cout<<"\n3.Display";
    cout<<"\n4.exit";

    do
    {
        cout<<"\nChoose your choice:-";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter the element you want push:-";
            cin>>x;
            obj.push(x);
            break;

            case 2:
            obj.pop();
            break;

            case 3:
            obj.display();
            break;

            case 4:
            cout<<"Exiting the program";
            break;

            default:
            cout<<"Enter a valid choice";
            break;
        }
    } while (ch!=4);
    return 0;
}