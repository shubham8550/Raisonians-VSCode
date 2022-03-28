#include<bits/stdc++.h>
using namespace std;
  
string xor1(string a, string b)
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
 
string mod2div(string divident, string divisor)
{
     
    // Number of bits to be XORed at a time.
    int pick = divisor.length();
     
    // Slicing the divident to appropriate
    // length for particular step
    string tmp = divident.substr(0, pick);
     
    int n = divident.length();
     
    while (pick < n)
    {
        if (tmp[0] == '1')
         
            // Replace the divident by the result
            // of XOR and pull 1 bit down
            tmp = xor1(divisor, tmp) + divident[pick];
        else
         
            tmp = xor1(std::string(pick, '0'), tmp) +
                  divident[pick];
                   
        // Increment pick to move further
        pick += 1;
    }
}
 

 
// Driver code
int main()
{
    string data = "100100";
    string key = "1101";
     
    encodeData(data, key);
     
    return 0;
}
 