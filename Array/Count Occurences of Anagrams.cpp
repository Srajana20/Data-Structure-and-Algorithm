// Given a word pat and a text txt. Return the count of the occurrences of anagrams of the word in the text.
// Example 1:
// Input:
// txt = forxxorfxdofr
// pat = for
// Output: 3
// Explanation: for, orf and ofr appears
// in the txt, hence answer is 3.

// Example 2:
// Input:
// txt = aabaabaa
// pat = aaba
// Output: 4
// Explanation: aaba is present 4 times
// in txt.
// Your Task:
// Complete the function search() which takes two strings pat, txt, as input parameters and returns an integer denoting the answer. 
// You don't need to print answer or take inputs.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(26) or O(256)

// Constraints:
// 1 <= |pat| <= |txt| <= 105
// Both strings contain lowercase English letters.


class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int textsize=txt.size();
	    int patsize = pat.size();
	    
	    unordered_map <char,int> mp;
	   
	    int ans=0;
	    
	    for(auto &x:pat){
	        mp[x]++;
	    }
	    int count=mp.size();
	    int j=0;
	    int i=0;
	    
	    while(j<textsize){
	        if(mp.find(txt[j]) != mp.end()){
	            mp[txt[j]]--;
	            if(mp[txt[j]]==0){
	                count--;
	            }
	        }
	        
	        if(j-i+1 < patsize){
	            j++;
	        }
	        else if(j-i+1 == patsize){
	            if(count==0){
	                ans++;
	            }
	            if(mp.find(txt[i]) != mp.end()){
	                mp[txt[i]]++;
	                if(mp[txt[i]]==1){
	                    count++;
	                }
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};
