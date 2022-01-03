string encode(string src)
{     
  string ans="";
   int i=0,j=0;
   while(j<s.length()){
       while(s[i]==s[j]){
           j++;
       }
       ans+=s[i] + to_string(j-i);
       i=j;
   }
   return ans;
}     
 
