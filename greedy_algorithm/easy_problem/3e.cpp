
https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-number-of-coins
 
class Solution{
public:
    vector<int> minPartition(int v)
    {
        
         vector<int>ans;
      int demo[]= { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 } ;
        int  n=10;
        
      for(int i=n-1;i>=0;i--){
          
          while(demo[i]<=v){
              v-=demo[i];
              ans.push_back(demo[i]);
              
          }
      }
      
      return ans;
        
    }
};