#include <iostream>

int main(){
  int n;
    float m=0;
    cin >> n;
    float max[n];
    for (int i=0;i<n;i++){
        float a=0;
        cin >>a;
        max[i]=a;
    }
    cout << massimo (max,n,m);
  return 0;
}
