#include<iostream>
int main()
{
    int y;
    system("cls");
    std::cout<<"Enter a number";
    std::cin>>y;
    float i,j;
    if(y<=0)
    {
        i=14,j=6;
    }
    else
    {
        i=4.5,j=5.5;
    }
    auto sum=i+j;
    std::cout<<sum;
    return 0;
}