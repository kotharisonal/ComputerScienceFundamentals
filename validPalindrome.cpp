/*
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

*/


class Solution {
public:
    bool isPalindrome(string s) {
      int start=0,end= s.length()-1; 
      
      while(start < end ){  
        if(!isalpha(s[start]) && !isdigit(s[start])){
          start++;
          continue; 
          
        }
        if(!isalpha(s[end]) && !isdigit(s[end])){
          end--; 
          continue; 
        }
        if(char(tolower(s[start])) != char(tolower(s[end])))
          return false; 
        start++; 
        end--; 
      }
      return true; 
        
    }
};

