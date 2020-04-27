#include<bits/stdc++.h>
#include<vector>
#include<iterator>
using namespace std;
/*STATEMENT:
    For a quiz competition greeb and purple balloons are awarded(any of the balloons can be given)
    so given the price of balloons we have to reduce the total cost.
   Quiz:
     2 questions for each(1-answered 0-wrong)
 SAMPLE CASE:
  1     test case
  9 6   cost of green and purple
  10    number of students
  1 1
  1 1
  0 1
  0 0
  0 1
  0 0
  0 1
  0 1
  1 1
  0 0
  69   minimum cost i.e output
 MY LOGIC:
  considering the test case 1st question is answered less so I'll buy that much of costly balloon 
  (i.e 3 times 9  3-solved 1st problem ,9-cost of green is high)
  
  then multiplying rest (7-solved 2nd problem ,6-cost of purple balloon) 
  hence the money spent is less 69
  


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int cost_g,cost_p;cin>>cost_g>>cost_p;
        int n;cin>>n;
        vector<int> problem1(n),problem2(n);
        for(int i=0;i<n;i++){
            cin>>problem1[i]>>problem2[i];
        }

        int count_1=accumulate(problem1.begin(),problem1.end(),0);
        int count_2=accumulate(problem2.begin(),problem2.end(),0);

        if(count_1<count_2 && cost_g>cost_p){
                    int s1=count_1*cost_g;
                    int s2=count_2*cost_p;
                    cout<<s1+s2;
        }
        else if(count_2>count_1 && cost_p>cost_g){
                    int s1=count_2*cost_g;
                    int s2=count_1*cost_p;
                    cout<<s1+s2;
        }
        else{
                int s1=count_1*cost_g;
                int s2=count_2*cost_p;
                cout<<s1+s2;

        }
        cout<<"\n";
    }
    return 0;
}
