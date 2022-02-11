#include<iostream>

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
struct Sales_data {
std::string bookNo;
unsigned units_sold = 0;
double revenue = 0.0, price=0.0;
};
#endif

int main()
{
    Sales_data obj1,obj2;

    system("cls");

    std::cout<<"Enter the Book no:-";
    std::cin>>obj1.bookNo;
    std::cout<<"Enter units sold and price:-"<<std::endl;
    std::cin>>obj1.units_sold>>obj1.price;
    std::cout<<"\n\nBook no:-"<<obj1.bookNo<<"\nUnits sold:-"<<obj1.units_sold<<"\nPrice:-"<<obj1.price<<std::endl;
    obj1.revenue=obj1.units_sold*obj1.price;
    std::cout<<"\n\nTotal revenue from book no "<<obj1.bookNo<<" is:-"<<obj1.revenue;

    std::cout<<"\n\nSecond book";

    std::cout<<"\n\nEnter the Book no:-";
    std::cin>>obj2.bookNo;

    if(obj1.bookNo==obj2.bookNo)
    {
        std::cout<<"\nPrice of the book is:-"<<obj1.price<<std::endl;
        std::cout<<"enter the additional units sold:-";
        std::cin>>obj2.units_sold;
        obj2.units_sold+=obj1.units_sold;
        obj2.price=obj1.price;
    }
    else
    {
        std::cout<<"\nEnter units sold and price"<<std::endl;
        std::cin>>obj2.units_sold>>obj2.price;
    }

    std::cout<<"\n\nBook no:-"<<obj2.bookNo<<"\nUnits sold:-"<<obj2.units_sold<<"\nPrice:-"<<obj2.price<<std::endl;
    obj2.revenue=obj2.units_sold*obj2.price;
    std::cout<<"\n\nTotal revenue from book no "<<obj2.bookNo<<" is:-"<<obj2.revenue;

    return 0;
}