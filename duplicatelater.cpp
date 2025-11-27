// class Solution {
// public:
//     string removeDuplicateLetters(string s) {
//         vector<int> freq(26, 0);
//         vector<bool> seen(26, false);

//         // Count frequency
//         for (char c : s) {
//             freq[c - 'a']++;
//         }

//         string stack = "";

//         for (char c : s) {
//             freq[c - 'a']--;  // इस character की एक occurrence कम

//             // Agar already result me hai → skip
//             if (seen[c - 'a']) continue;

//             // Pop condition:
//             while (!stack.empty() &&
//                    c < stack.back() && 
//                    freq[stack.back() - 'a'] > 0)
//             {
//                 seen[stack.back() - 'a'] = false;
//                 stack.pop_back();
//             }

//             // Push new character
//             stack.push_back(c);
//             seen[c - 'a'] = true;
//         }

//         return stack;
//     }
// };
