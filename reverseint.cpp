// class Solution {
// public:
//     int reverse(int x) {
//         long long rv = 0;

//         while (x != 0) {
//             int digit = x % 10;
//             rv = rv * 10 + digit;
//             x = x / 10;           
//         }

        
//         if (rv > INT_MAX || rv < INT_MIN) {
//             return 0;
//         }

//         return (int)rv;
//     }
// };
