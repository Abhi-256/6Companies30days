#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution{
  public:
      static bool myCmp(pair<string,int> s1, pair<string,int> s2)
    {
        if (s1.first.size() == s2.first.size()) {
            return s1.first < s2.first;
        }
            return s1.first.size() < s2.first.size();
    }
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        int len = string_list.size();
        vector<vector<string> > solution;
        vector<pair<string,int>> copyvec(len);
        for(int i=0;i<len;i++){
            copyvec[i].first = string_list[i];
            copyvec[i].second = i;
        }
        for(auto i:copyvec){
            sort(i.first.begin(),i.first.end());
        }
            sort(copyvec.begin(), copyvec.end(), myCmp);
            vector <string> ans;
            string prev = copyvec[0].first;
            ans.push_back(string_list[copyvec[0].second]);
            for(int i=1;i<len;i++){
            if((prev.compare(copyvec[i].first)) != 0){
                prev = copyvec[i].first;
                // cout<<endl;
                solution.push_back(ans);
                ans.clear();
            }
            // cout<<string_list[copyvec[i].second]<<" ";
            ans.push_back(string_list[copyvec[i].second]);
            
        }
                solution.push_back(ans);
                return solution;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
