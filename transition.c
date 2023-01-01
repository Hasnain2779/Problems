#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int transitionPoint(int arr[],int n){
    int i,j,k=0;
    if(n==1 && arr[i] == 1){
        return 0;
    }
    else if(n==1&& arr[0]==0){
        return -1;
    }
    
    
    for(i=0;i<1;i++){
        for(j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                
                return j;
                break;}
            
            
            else if(j==n-1 && arr[i]==arr[j] && arr[i]==1) {
                return 0;
                
            }
            else if(j==n-1 && arr[i]==arr[j] && arr[i]==0) {
                return -1;
                
            }
            
    
        }
        
    }
    


}
