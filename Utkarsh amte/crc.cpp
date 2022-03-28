#include<iostrem>
using namespace std;
  
string UAA(string a, string b)
{
     
    string result = "";
     
    int n = b.length();
     
    for(int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
            result += "0";
        else
            result += "1";
    }
    return result;
}
 
 