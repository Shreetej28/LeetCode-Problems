Leetcode c++ Solution for :
  2160. Minimum Sum of Four Digit Number After Splitting Digits



// By Converting into string (Brute Force)
class Solution {
public:
    int minimumSum(int num) {
        string str = to_string(num);

        sort(str.begin(), str.end());

        string s1, s2;

        s1+=str[0];
        s1+=str[2];

        s2+=str[1];
        s2+=str[3];
        
        cout<<s1<<" "<<s2<<endl;

        return (stoi(s1) + stoi(s2));

    }
};

// Optimized Approach (100% Fast Using Vectors)

class Solution {
public:
    int minimumSum(int num) {
        
        vector<int>vec;

        while(num){
            vec.push_back(num%10);
            num/=10;
        }
      
        sort(vec.begin(), vec.end());

        return ((vec[0]*10 + vec[2])+(vec[1]*10+vec[3]));
        
    }
};

