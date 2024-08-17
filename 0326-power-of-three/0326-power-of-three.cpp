// class Solution {
// public:
//     bool isPowerOfThree(int n) {

//         if(n<0) return false;
//         int i=0;
//         bool ans=false;
//         while(pow(3,i)<=n)
//         {
//             if(pow(3,i)==n)
//             {
//                 ans=true;
//                 break;
//             }
//             i++;
//         }
//         return ans;
        
//     }
// };

class Solution {
public:
    bool isPowerOfThree(int n) {
        // The largest power of 3 within the range of 32-bit signed integers is 3^19 = 1162261467
        return n > 0 && 1162261467 % n == 0;
    }
};