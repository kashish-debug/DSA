#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"size of array is "<<n<<endl;
    int arr[n+1];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=n-1;i>=2;i--){
        arr[i+1]=arr[i];
    }
    arr[2]=25;
    for(int i=0;i<=n;i++){
        cout<<" "<< arr[i];
    }

}