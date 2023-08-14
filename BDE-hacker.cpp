#include<bits/stdc++.h>
using namespace std;
int octaltodesimal(int n){
    int ans  = 0;
    int x = 0;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x*=10;
        n /= 2;

    }
    return ans;
}
int main(){
    int n;
    cout<<"enter your desimal number: ";
    cin>>n;
    cout<<"your binary number is "<<octaltodesimal(n)<< endl;
    return 0;
}