// leetcode q - 125

class Solution {
public:
    bool isValid(char ch){
        if(ch >= 'A' && ch <='Z' || ch >= 'a' && ch <='z' || ch >= '0' && ch <='9'){
            return true;
        }
        return false;
    }
    char toLower(char ch){
        if(ch >= 'a' && ch <='z' || ch >= '0' && ch <='9'){
            return ch;
        }
        else{
            return (ch-'A'+'a');
        }
    }
    bool checkPalindrome(string s){
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i] == s[j]){
            i++;
            j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string temp = "";
        // remove all non-alphanumeric char

        for(int i=0; i<s.length(); i++){
            if(isValid(s[i])){
                temp.push_back(s[i]);
            }
        }
  
        // convert uppercase to lowercase
        for(int i=0; i<temp.size(); i++){
            temp[i] = toLower(temp[i]);
        }
        // palindrome check
        return checkPalindrome(temp);
    }
};