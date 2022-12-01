#include <iostream>

using namespace std;
int num = 0;

void permute(string& a, int l, int r)
{
    if(l == r) {
        for(int i = 0; i < a.size(); i++){
            if(a[i] - 49 == i){
                num++;
                break;
            }
                
        }
    }
    else {
        for (int i = l; i <= r; i++) {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[l], a[i]);
        }
    }
}


int main() {
    int n;
    
    cin >> n;
    string str;
    for(int i = 0; i < n; i++) {
        str += (i+49);
    }
    permute(str, 0, n - 1);
    cout << num;
}