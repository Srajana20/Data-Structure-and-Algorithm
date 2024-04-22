// John is at a toy store help him pick maximum number of toys. He can only select in a continuous manner and he can select only two types of toys.


// Example:
// Input:
// 1
// abaccab


#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string s ="abaccab";
    int i=0,j=0,k=2;
    unordered_map <char,int> mp;
    int maxi=0;
   

    while(j<7)
    {
        mp[s[j]]++;
        
        if((mp.size())<k)
            j++;
        else if((mp.size()) == k)
        {
            
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(mp.size() >k){
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
    
        cout<<maxi<<" ";
    
}
