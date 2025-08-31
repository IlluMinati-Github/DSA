class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            count += min(nums[i] % 3, 3 - nums[i] % 3);

        }
        return count;
    }
};
// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         int count=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]%3!=0){
//                 int a=nums[i];
//                 int b=nums[i];
//                 int plus_count=0;
//                 int minus_count=0;
//                 for(int j=0;j<3;j++){
//                     a--;  
//                     minus_count++;                  
//                     if(a%3==0){
//                         break;
//                     }

//                 }
//                 for(int j=0;j<3;j++){
//                     b++;  
//                     plus_count++;                                      
//                     if(b%3==0){
//                         break;
//                     }
//                 }
//                 int c=min(plus_count,minus_count);
//                 count+=c;
//             }
//         }
//         return count;
//     }
// };