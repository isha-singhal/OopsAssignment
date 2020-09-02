#include<iostream>
#include<string.h>
using namespace std;

string testPalindrome(string isPalindrome, int start , int last)
{
  if (start == last)
  {
      return "true";
  }
  if (isPalindrome[start] != isPalindrome[last])
  {
      return "false";
  }
  if (start < last)
  {
      testPalindrome(isPalindrome, start + 1, last - 1);
      return "true";
  }

}

int main()
{
  string isPalindrome;
  cout<<"Enter the string to check palindrome or not \n";
  getline(cin, isPalindrome);
  int last =  isPalindrome.size();
  int start = 0;
  cout << testPalindrome(isPalindrome, start, last - 1);
  return 0;
}
