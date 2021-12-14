#include <iostream>
#include <sstream>
#include <vector> 
using namespace std;

int main()
{
    int horiz, depth = 0;
    
    std::string line;
    while (std::getline(std::cin, line))
    {
        std::stringstream ss(line); 
 
        std::string s; 
        std::string word="";
        int i=0;
        int n;
        std::stringstream num;
        while (std::getline(ss, s, ' ')) { 
            if(i==1)
                {   
                    num << s;
                    num >> n;
                    i = 0;
                }
            else
            {
                word = s;
                i = 1;
            }
        } 
        if(word=="forward")
            horiz+=n;
        else if (word == "down")
            depth+=n;
        else if (word == "up")
            depth-=n;
    }
    
    cout<< depth << "* "<< horiz <<  "= " <<horiz*depth;

    return 0;
}
