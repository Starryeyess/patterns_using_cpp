#include <iostream>
using namespace std;
void StarPattern(int n){
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=n){
            cout<<"*";
            j++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }

    void DisplayRow(int n){
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=n){
            cout<<i;
            j++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }

    void DisplayColumn(int n){
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=n){
            cout<<j;
            j++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }

    void ReverseColumn(int n){
    int i=n;
    while(i>=1){
         int j= n;
         while(j>=1){
            cout<<j;
            j--;
         }
         cout<<endl;
         i--;
    }
    cout<<endl;
    }

    void ReverseRow(int n){
    int i=n;
    while(i>=1){
         int j= n;
         while(j>=1){
            cout<<i;
            j--;
         }
         cout<<endl;
         i--;
    }
    cout<<endl;
    }

    void CountPattern(int n){
    int count = 1;   
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=n){
            cout<<count;
            j++;
            count++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }

    void StarPattern2(int n){
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=i){
            cout<<"*";
            j++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }

    void StarPattern3(int n){
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=n){
            if((i+j)>n){
            cout<<"*";
            }
            else{
               cout<<" ";
            }
            j++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }

    void StarPattern4(int n){
    int i=1;
    while(i<=n){
         int j= 1;
         while(j<=n){
            if((i+j)<=(n+1)){
            cout<<"*";
            }
            else{
               cout<<" ";
            }
            j++;
         }
         cout<<endl;
         i++;
    }
    cout<<endl;
    }
    int main(){
        int n;
        cout<<"ENTER NUMBER OF ROWS: ";
        cin>>n;
      //   StarPattern(n);
      //   DisplayRow(n);
      //   DisplayColumn(n);
      //   ReverseRow(n);
      //   ReverseColumn(n);
      //   CountPattern(n);
      //   StarPattern2(n);
        StarPattern3(n);
        StarPattern4(n);
        return 0;
    }
