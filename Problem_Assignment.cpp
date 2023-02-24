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
  
    int even_arr=(n/2);//even elements in array
       if(n%2!=0) even_arr++;
       int Alice_Mov=even_arr; //odd elements in rray
       int even=0,odd=0;
       for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{ odd++;}
       }
       while(1){
        if(Alice_Mov<0){
              cout<<"Bob win the match"<<endl;
              
              break;
        }
        //if Alice start from even integers
        int val1=Alice_Mov+(Alice_Mov-1);//required element
        int val2=even_arr-Alice_Mov + even_arr-Alice_Mov;
        if(even>=val1 && odd>=val2){
            cout<<"Alice win the match"<<endl;
            break;
        }
         //if Alice start from even integers
        val1=Alice_Mov+Alice_Mov;       //required element
        val2=even_arr-Alice_Mov+even_arr-Alice_Mov-1;
         if(even>=val1 && odd>=val2){
            cout<<"Alice win the match"<<endl;
          break;
        }

        Alice_Mov=Alice_Mov-2;

       } 
    }
};

int main(){
    
    int t;
    cout<<"TestCase:"<<endl;
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
