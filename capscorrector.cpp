#include<iostream>
//Caps corrector. Not going to correct everything tho.
//Transforms the first letter of every sentence to caps. 
using std::string,std::cout,std::cin,std::endl;

int main()
{
    string line;
    system("cls");
    cout<<"Enter a line"<<endl;
    getline(cin, line);
    line[0]=toupper(line[0]);
    for(decltype(line.size()) i=0;i<=line.length();i++)
    {
        int j=i-1;
        int k=i-2;
        if(line[k]=='.')
        {
            if(isspace(line[j])&& islower(line[i]))
            {
                line[i]=toupper(line[i]);
            }      
        } 
    }
    cout<<line;
    return 0;
}