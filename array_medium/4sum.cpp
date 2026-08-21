#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<vector<int>> ans;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n - 3; i++){

        // Skip duplicate i
        if(i > 0 && arr[i] == arr[i - 1]){
            continue;
        }

        for(int j = i + 1; j < n - 2; j++){

            // Skip duplicate j
            if(j > i + 1 && arr[j] == arr[j - 1]){
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while(left < right){

                long long sum = (long long)arr[i]
                              + arr[j]
                              + arr[left]
                              + arr[right];

                if(sum == 0){

                    ans.push_back({
                        arr[i],
                        arr[j],
                        arr[left],
                        arr[right]
                    });

                    left++;
                    right--;

                    // Skip duplicate left
                    while(left < right &&
                          arr[left] == arr[left - 1]){
                        left++;
                    }

                    // Skip duplicate right
                    while(left < right &&
                          arr[right] == arr[right + 1]){
                        right--;
                    }
                }

                else if(sum < 0){
                    left++;
                }

                else{
                    right--;
                }
            }
        }
    }

    for(auto quad : ans){

        for(int x : quad){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}