#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int i1=a+c;
    int i2=a+d;
    int i3=b+c;
    int i4=b+d;
    int arr[4]={i1,i2,i3,i4};
    int max = arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     printf("%d",max);
}
}
