/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <sstream>
#include <vector> 
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
            {
                
                //cout << n<<" "<<horiz << ", " << depth << endl;
                horiz+=n;
                depth+=aim*n;
                //cout << horiz << ", " << depth << endl;
            }
        else if (word == "down")
            {
                //depth+=n;
                aim+=n;
                
            }
        else if (word == "up")
            {
                //depth-=n;
                aim-=n;
            }
    }
    
    cout<< depth << "* "<< horiz <<  "= " <<(long)horiz*depth;

    return 0;
}
