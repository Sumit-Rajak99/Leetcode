class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int ans = 0;

        for(int i = left; i <= right; i++){
            int setBits = __builtin_popcount(i);

            
            if(setBits >= 2){
                bool prime = true;
                for(int j = 2; j * j <= setBits; j++){
                    if(setBits % j == 0){
                        prime = false;
                        break;
                    }
                }
                if(prime) ans++;
            }
        }

        return ans;
    }
};