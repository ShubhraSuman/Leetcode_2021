class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int,vector<int>> mp;
        for(auto p: pieces)
        {
            //mapping the first element of piece to piece vector
            mp[p[0]]=p;
        }
        vector<int> res;
        for(int i=0;i<arr.size();i++)
        {
            if(mp.find(arr[i])!=mp.end())
            {
               res.insert(res.end(),mp[arr[i]].begin(),mp[arr[i]].end());          
            }
        }
        return res==arr;
    }
};