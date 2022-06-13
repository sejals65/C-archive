#include <iostream>
#include <string>
using namespace std;
string map[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int keypad(int num, string output[]){
    
    if(num == 0){
        output[0] = "";
        return 1;
    }

    int count = keypad(num/10, output);
    int r = num % 10;
    int len = map[r].size();
    int k = count;
    int i,j;
    
    for(i = 0; i < len-1; i++){
        for(j = 0; j < count; j++)
            output[k++] = output[j];
    }
    k = 0;
    for(i = 0; i < len; i++){
        for(j = 0; j < count; j++){
            output[k] = output[k] + map[r][i];
            k++;
        }
    }
    return len * count;

}



int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
