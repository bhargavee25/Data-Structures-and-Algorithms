class Solution {
public:
    int countPrimes(int n) {
        vector<bool> helper(n, true);
        int p=0;
        for (int i=2; i<n; ++i){
            if (helper[i]){
                ++p;
                for (long long j=(long long)i*i; j<n; j+=i){
                    helper[j] = false;
                }
            }
        }  
        return p; 
    }
};
