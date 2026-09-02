#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count = 0;
    for(char ch : s){
        if(ch >= '0' && ch <= '9'){
            count++;
        }
    }
    int oldIndex = s.size() - 1;
    s.resize(s.size() + count * 5);
    int newIndex = s.size() - 1;
    while(oldIndex >= 0){
        if(s[oldIndex] >= '0' && s[oldIndex] <= '9'){
            s[newIndex--] = 'r';
            s[newIndex--] = 'e';
            s[newIndex--] = 'b';
            s[newIndex--] = 'm';
            s[newIndex--] = 'u';
            s[newIndex--] = 'n';
            oldIndex--;
        }
        else{
            s[newIndex--] = s[oldIndex--];
        }
    }
    for(char ch : s){
        cout<<ch;
    }
    return 0;
}
