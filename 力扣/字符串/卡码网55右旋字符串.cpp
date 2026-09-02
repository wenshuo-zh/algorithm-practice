#include <iostream>
#include <string>
using namespace std;

void flipString(int left, int right, string& s){
    while(left < right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int main(){
    int k;
    string s;
    cin >> k;
    cin >> s;
    int n = s.size();
    flipString(0,n - 1,s);
    flipString(0,k - 1,s);
    flipString(k,n - 1,s);
    for(char ch : s) cout << ch;
    return 0;
}
