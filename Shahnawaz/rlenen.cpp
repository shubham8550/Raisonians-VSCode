#include <iostream>
using namespace std;
 
void RLE(string str)
{
    for (int i = 0; i < str.length(); i++) {
 
        int count = 1;
        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
 
        cout << str[i] << count;
        cout <<endl;
    }
}
 
int main()
{
    string str;
    cin>>str;
    RLE(str);
    cout<< endl;
    return 0;
}