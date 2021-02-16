class Solution {
public:
    int numDecodings(string s) {
        
        int n = s.length();
        if(s[0] == '0' || n == 0 ) return 0;
    
        vector<int> v(n+1, 0);
        v[0] = 1;
        v[1] = 1;
        
        
        for(int i = 2; i<=n; ++i){
            
            // If the last digit is not 0, 
        // then last digit must add to the number of words
            if(s[i-1] >= '1'){
                v[i] += v[i-1];
            }
             // If second last digit is smaller 
        // than 2 and last digit is smaller than 7,
        // then last two digit form a valid character 
            if(s[i-2] == '1' || ( s[i-2] == '2' && s[i-1] <= '6')){
                v[i] += v[i-2];
            }
            
        }
        
        return v[n];
    }
};
