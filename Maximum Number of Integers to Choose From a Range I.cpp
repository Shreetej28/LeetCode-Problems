/* LeetCode Biweekly Contest 97

Problem No.: 2554

2554. Maximum Number of Integers to Choose From a Range I (100% Fast Solution!!!!)
*/

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        int count =0;
        int sum =0;
        
// Simply store all elements from banned array into unordered_set 
        unordered_set<int>st;
        for(auto i:banned){
            st.insert(i);
        }
      
      // Check if number is present in the set or not.
      //If number is not present in the set, then add it into sum & check sum is less or equal to maxSum 
      // If sum is less or equal to maxSum then increament count!!

        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                sum+=i;
                if(sum<=maxSum)count++;
            }
        }
        return count;
    }
};
