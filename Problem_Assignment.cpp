//Problem Assignment:
/*Alice and Bob are playing a game on a sequence a1,a2,…,an of length n.
 They move in turns and Alice moves first.
In the turn of each player, he or she should select an integer and 
remove it from the sequence. The game ends when there is no integer left in the sequence.
Alice wins if the sum of her selected integers is even; otherwise, Bob wins.
Your task is to determine who will win the game, if both players play
 optimally.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void Alice_Bob(vector<int>arr, int n){
    // //   int Alice_sum=0;
    // //   for(int i=0;i<n;i+=2){
    // //      Alice_sum+=arr[i];
    // //   }
    // //   if(Alice_sum%2==0){ cout<<"Alice Win the Game";}
    // //   else{ cout<<"Bob win the Game";}
    //    int even_count=0,odd_count=0;
    //    for(int i=0;i<n;i++){
    //      if(arr[i]%2==0){even_count++;}
    //      else{odd_count;}
    //    }
    //    //1 2 3 4 5
    //    //frequency
    //    //calculating condition of alice getting even
    //    even_count=even_count%2;
    //    odd_count=odd_count%4;
    //    if(odd_count==3 ||  odd_count==0 || (even_count==1 && odd_count==1)){
    //            cout<<"Alice Win"<<endl;
    //    }else{
    //            cout<<"Bob Win"<<endl;
    //    }
    int mov=(n/2);
       if(n%2!=0) mov++;
       int now=mov;
       int even=0,odd=0;
       for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{ odd++;}
       }
       int f=0;
       while(1){
        if(now<0){
              cout<<"Bob win the match"<<endl;
              f=1;
        }
        if(f==1) break;
        int val1=now+(now-1);
        int val2=mov-now + mov-now;
        if(even>=val1 && odd>=val2){
            cout<<"Alice win the match"<<endl;
            f==1;
        }
        if(f==1) break;
        val1=now+now;
        val2=mov-now+mov-now-1;
         if(even>=val1 && odd>=val2){
            cout<<"Alice win the match"<<endl;
            f==1;
        }
        if(f==1) break;
        now=now-2;

       } 
    }
};

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cout<<"Enter the number of sequence n:";
        cin >> n;
        vector<int>s(n);
        cout <<"Enter All sequence numbers:";
        for(int i = 0; i < n; i++)
            cin >> s[i];
        Solution ob;
        ob.Alice_Bob(s, n);
        
        cout << endl;
    }
return 0;
}
