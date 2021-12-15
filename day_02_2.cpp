#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int horiz=0, aim=0, depth= 0;
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
            if(i==1){   
                num << s;
                num >> n;
                i = 0;
            }
            else{
                word = s;
                i = 1;
            }
        } 
        if(word=="forward"){
            horiz+=n;
            depth+=aim*n;
        }
        else if (word == "down")
            aim+=n;

        else if (word == "up")
            aim-=n;
    }
    
    cout<< depth << "* "<< horiz <<  "= " <<(long)horiz*depth;

    return 0;
}
