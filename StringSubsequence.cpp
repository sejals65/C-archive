#include <iostream>
#include <cmath>
using namespace std;


int subsequence(string input, string output[]){
    if(input.empty()){
        output[0] = "";
        return 1;
    }
    
    string smallString = input.substr(1);
    int count = subsequence(smallString, output);
    int i;
    for(i = 0; i < count; i++)
        output[i+count] = input[0] + output[i];
    return 2 * count;
}
int main()
{
    string input;
    cin >> input;
    
    int n = pow(2,input.size());
    
    string output[n];
    
    int count = subsequence(input, output);
    
    for(int i = 0; i < count; i++)
        cout << output[i] << endl;

    return 0;
}
