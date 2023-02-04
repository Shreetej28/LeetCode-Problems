/*
LeetCode Biweekly Contest 97

2553. Separate the Digits in an Array
*/


class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int>ans;
        
        for(int i=-0;i<nums.size();i++){
          // If number is less than 10 then simply push into vector
          
            if(nums[i]<10)ans.push_back(nums[i]);
         
            else{
              
                int num = nums[i];
              
                vector<int>temp; 
                while(num!=0){
                    int rem = num%10;
                    temp.push_back(rem);
                    num/=10;
                }
              
              //we have stored last digit first so we will pus_back digit From last index
              
                for(int j=temp.size()-1;j>=0;j--){
                    ans.push_back(temp[j]);
                }
            }
        }
        return ans;
    }
};
