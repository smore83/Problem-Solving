//Problem Assignment:
/*Alice and Bob are playing a game on a sequence a1,a2,…,an of length n.
 They move in turns and Alice moves first.
In the turn of each player, he or she should select an integer and 
remove it from the sequence. The game ends when there is no integer left in the sequence.
Alice wins if the sum of her selected integers is even; otherwise, Bob wins.
Your task is to determine who will win the game, if both players play optimally.
*/
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void Alice_Bob(vector<int>arr, int n){
      int Alice_sum=0;
      for(int i=0;i<n;i+=2){
         Alice_sum+=arr[i];
      }
      if(Alice_sum%2==0){ cout<<"Alice Win the Game";}
      else{ cout<<"Bob win the Game";}
    }
};

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        ob.Alice_Bob(s, n);
        
        cout << endl;
    }
return 0;
}


// } Driver Code Ends