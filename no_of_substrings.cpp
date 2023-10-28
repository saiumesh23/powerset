#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  //print all subsequences
  int n=s.size(); 
  int count=0;
  for(int i=0;i<(1<<n);i++){
    string s1;
    count++;
    for(int j=0;j<n;j++){
        if(i&(1<<j)) s1+=s[j];
    }
    cout<<s1<<endl;

  }
  ////
  cout<<count<<endl;
}
