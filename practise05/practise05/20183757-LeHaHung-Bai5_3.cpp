#include <iostream>
#include <string.h>
#include <stack>

using namespace std;

int par(string str) {
    int a = str.length();
    stack<char> S;
    char x, y;
    for (int i = 0; i < a; i++) {
        x = str[i];
        if (x == '(' || x == '[' || x == '{') {
            S.push(x);
            //chạy đc
        }
        else {
            if (x == ')') {
                if (S.top() == '(') {
                    S.pop();
                }
                else 
                    return 0;
            }
            else if (x == ']') {
                if (S.top() == '[') {
                    S.pop();
                }
                else return 0;
            }
            else if (x == '}') {
                if (S.top() == '{') {
                    S.pop();
                }
                else return 0;
            }
        }
    }
    //chạy đc đến đây
    if (S.top() != NULL) {
        return 0;
    }
    else return 1;
}

int main() {
    int n;
    string str;

    cin >> n;
    //chạy đc đến đây
    for (int i = 0; i < n; i++) {
        cin >> str;
        cout << par(str) << endl;
    }

    return 0;
}