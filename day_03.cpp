#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
    long num;
    std::string line;
    int count[12]={0};
    
    
    while(std::getline(std::cin, line))
    {
        for(int i =0; i<line.size();i++)
        {
            if(line[i]=='0')
                count[i]-=1;
            else
                count[i]+=1;
        }
    }
    
    int gamma=0;
    int epsilon=0;
    for(int i = 0; i<12;i++)
    {
        if(count[i]<0)
            epsilon+=pow(2,11-i);
        else
            gamma+=pow(2,11-i);
        
    }
    cout << gamma << "*"<<epsilon<<" = "<<gamma*epsilon;
    

    return 0;
}
