#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int record_breaking(vector<int> arr, int n)
{
    int ans = 0;
    int m = -1;
    for(int i = 0; i<n; i++)
    {
        
        //For the last element
        if(i == n - 1 && arr[i] > m)
        {
                ans++;
                //cout<<arr[i]<<" is a answer "<<endl;
               
        }

        //For first element
        else if(i == 0 && arr[0] > arr[1])
        {
               ans++;
        }

        //Normal Case
        else if(arr[i] > m && arr[i] > arr[i + 1])
        {
                ans++;
                //cout<<arr[i]<<" is a answer "<<endl;
        }
        m = max(arr[i], m);
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    for(int test = 1; test <= t; test++)
    {
        int n, temp;
        cin>>n;
        vector<int> arr;
        //long long int arr[200000];
        //int *arr = new int [n];
        for(int i = 0; i<n; i++)
        {
            cin>>temp;
            arr.push_back(temp);
        }
        cout<<endl<<"Case #"<<test<<": "<<record_breaking(arr, n);
        //delete [] arr;
    }
    
    return 0;
}