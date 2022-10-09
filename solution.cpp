/* Need optimized solution of given problem (preferable language-C++)

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

*/

#include <stack>
#include <iostream>

using namespace std;

bool isValid(string s){
  stack <char> st;
  
  for( int i = 0; i < s.size(); ++i ){
    char ch = s[i];
    // if for a given closing bracket there is no matching opening bracket at the top of stack then it is invalid
    if( ch == ')' ){
      if( !st.empty() && st.top() == '(') st.pop();
      else return false;
    }
    else if( ch == ']' ){
      if( !st.empty() && st.top() == '[') st.pop();
      else return false;
    }
    else if( ch == '}' ){
      if( !st.empty() && st.top() == '{') st.pop();
      else return false;
    }
    // else push it to the stack as it is an opening bracket
    else st.push(ch);
  }
  
  // if there are some unpaired opening bracket then it is invalid string
  if(st.size()) return false;
  
  return true;
}

int main(){
  
  string s;
  cout << "Enter input string : ";
  cin >> s;
  
  isValid(s) ? cout << "This is a valid string\n" : cout << "This is an Invalid string\n";
  
  return 0;
}
