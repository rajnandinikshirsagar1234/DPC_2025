#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {

        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } 
        else {
            if (st.empty()) return false;

            char top = st.top();
            st.pop();

            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    // Test Cases
    string tests[] = {"()", "([)]", "[{()}]", "", "{[}"};
    
    for (string t : tests) {
        cout << "Input: " << (t.empty() ? "\"\"" : t) 
             << " -> Output: " << (isValid(t) ? "true" : "false") << endl;
    }
    
    return 0;
}
