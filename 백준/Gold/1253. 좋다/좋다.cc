#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int sum = 0;

    for (int i = 0; i < N; i++) { 
        int l = 0, r = N - 1;  
        //long fine = arr[i];
        while (l < r) {
            int twoSum = arr[l] + arr[r];
            if (twoSum == arr[i]) {
                if(i!=r && i!=l){
                    sum++;
                    break;  // 한 번 찾으면 종료
                }else if(l==i){ 
                    l++;
                }else if(r==i){
                    r--;
                }
            } else if (twoSum < arr[i]) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << sum;
}
