// Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.
// Example 1:
// Input:
// S = "aabacbebebe", K = 3
// Output: 
// 7
// Explanation: 
// "cbebebe" is the longest substring with 3 distinct characters.
// Example 2:
// Input: 
// S = "aaaa", K = 2
// Output: -1
// Explanation: 
// There's no substring with 2 distinct characters.
// Your Task:
// You don't need to read input or print anything. Your task is to complete the function longestKSubstr() which takes the string S and an integer K as input and returns the length of the longest substring with exactly K distinct characters. If there is no substring with exactly K distinct characters then return -1.
// Expected Time Complexity: O(|S|).
// Expected Auxiliary Space: O(|S|).
// Constraints:
// 1 ≤ |S| ≤ 105
// 1 ≤ K ≤ 26
// All characters are lowercase latin characters.

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map <char,int> mp;
        int j=0;
        int i=0;
        int n=s.size();
        int maxi=-1;
        while(j<n){
            mp[s[j]]++;
            
            if(mp.size()<k){
                j++;
            }
            else if(mp.size() == k){
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(mp.size() > k ){
                
                while(mp.size()>k){
                    mp[s[i]]--;
                    if(mp[s[i]] == 0){
                         mp.erase(s[i]);
                    }
                   
                    i++;
                }
                j++;
        }
    }
      return maxi;  
    }
    
};

