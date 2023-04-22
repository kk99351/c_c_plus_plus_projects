#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<bool> visited(arr.size(),false);
        vector<int> occ;
        for(int i=0;i<arr.size();i++){
            if (visited[i] == true){
                continue;
            }
            int count = 1;
            for(int j=i+1;j<arr.size();j++){
                if (arr[i] == arr[j]){
                    visited[j] = true;
                    count++;
                }
            }
            occ.push_back(count);
        }
        sort(occ.begin(),occ.end());
        int temp=-1;
        for(int i=0;i<occ.size();i++){
            if (temp == occ[i]){
                return false;
            }
            temp = occ[i];
        }
        return true;
    }
};
int main(){
    Solution sol;
    vector<int> myvector{ 1, 2, 3, 3, 4, 5 };
    cout<<sol.uniqueOccurrences(myvector);

}