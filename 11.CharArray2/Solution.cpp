#include <iostream>
#include <vector>
using namespace std;
int findMissing(vector<int> &arr)
{
    int last = arr.size();
    int start = 0;
    int nextStart = start + 1;
    int diff = (arr[last - 1] - arr[0]) / last;
    while (nextStart < last)
    {
        if (arr[start] + diff != arr[nextStart])
        {
            return arr[start] + diff;
        }
        start++;
        nextStart++;
    }
}
int main()
{
    vector<int> arr = {1, 6, 11, 16, 21, 31};
    cout << findMissing(arr) << endl;
}