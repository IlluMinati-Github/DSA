class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        sort(nums.begin(), nums.end()); 

        for(int i = 0; i < nums.size(); i += 2){
            int alice = nums[i];       
            int bob = nums[i+1];       

            arr.push_back(bob);        
            arr.push_back(alice);      
        }

        return arr;
    }
};



// class Solution {
// public:
//     int minimum(vector<int>& nums){
//         int minVal = INT_MAX;
//         int id = -1;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] < minVal){
//                 minVal = nums[i];
//                 id = i;
//             }
//         }
//         return id;
//     }

//     vector<int> numberGame(vector<int>& nums) {
//         vector<int> arr;

//         while(!nums.empty()){
//             int d = minimum(nums);
//             int a = nums[d];
//             nums.erase(nums.begin() + d);

//             int c = minimum(nums);
//             int b = nums[c];
//             nums.erase(nums.begin() + c);

//             arr.push_back(b);
//             arr.push_back(a);
//         }

//         return arr;
//     }
// };
