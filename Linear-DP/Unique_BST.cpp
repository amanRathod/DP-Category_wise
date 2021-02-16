
class Solution {
public:
   

    int numTrees(int n) {
        vector<int> v(n+1);
         v[0] = 1;
        v[1] = 1;
        
        for(int i = 2; i <= n; ++i){
            int cnt = 0;
            for(int j = 1; j <= i; ++j){
                int left = abs(j - 1); // calculate no.of node possible on left-sub tree
                int right = abs(j-i);  //  calculate no.of node possible on right-sub tree
                cnt += (v[left] * v[right]); // no.of unique combination possible for node j
            }
            v[i] = cnt;
        }
        return v[n];
    }
};
