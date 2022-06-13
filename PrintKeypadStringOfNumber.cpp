#include <iostream>
#include <string>
using namespace std;

void helper(int num, string output){
	string map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    if(num == 0){
        cout << output << endl;
        return;
    }
    int r = num%10;
    helper(num/10, map[r][0] + output);
    helper(num/10, map[r][1] + output);
    helper(num/10, map[r][2] + output);
    
    if(map[r].size() == 4)
    	helper(num/10, map[r][3] + output);
    
}

void printKeypad(int num){
    string output = "";
    helper(num, output);
}

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
