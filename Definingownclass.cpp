#include<iostream>
#include<conio.h>
struct students
{
    std::string name; 
    int id, age;
    float percentage;
};
int main()
{
students stu;
int age;
int id;
float mark;
system("cls");
std::cout<<"Enter the second student name-";
std::string stuname,firstname,secondname;
std::cin>>firstname>>secondname;
stuname=firstname+" "+secondname;
std::cout<<"Enter the age of "<<stuname;
std::cin>>age;
std::cout<<"Enter the ID no of "<<stuname;
std::cin>>id;
std::cout<<"Enter the Mark of "<<stuname;
std::cin>>mark;
stu={stuname, id, age, mark};
std::cout<<"Students details are"<<std::endl;
std::cout<<"Name-"<<stu.name<<std::endl;
std::cout<<"Age-"<<stu.age<<std::endl;
std::cout<<"ID-"<<stu.id<<std::endl;
std::cout<<"Mark-"<<stu.percentage<<std::endl;
getch();
return 0;
}