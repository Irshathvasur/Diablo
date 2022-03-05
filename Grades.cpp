#include<iostream>
#include<vector>

//shows grades of each mark and shows the count of each grades.

using std::cout,std::cin,std::endl,std::string,std::vector;

int main()
{
    vector<int> marks;
    int sub,count=0;
    vector<int> gcount(10,0);
    system("cls");
    cout<<"Enter the marks of the student"<<endl;
    while(cin>>sub)
    {
        marks.push_back(sub);
        ++gcount[sub/10];
        count++;
    }
    vector<string> grades{"F","F","F","F","C","C+","B","B+","A","A+","A+"};
    for(int i=0;i<count;i++)
    {
            cout<<marks[i]<<"-"<<grades[marks[i]/10]<<endl;
    }

    cout<<"\nCount of each grades\n";
    for(int i=0;i<10;i++)
    {
        if(gcount[i]!=0)
        {
            cout<<"\n";
            cout<<grades[i]<<"-"<<gcount[i]<<endl;
        }
    }
    return 0;
}
