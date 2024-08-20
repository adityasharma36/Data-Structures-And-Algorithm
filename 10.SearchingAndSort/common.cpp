// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(int array[],int size,int target){
//     int left = 0;
//     int right = size-1;
//         int med = (left+right)/2;
//     while(right>=left){
//         if(array[med]==target){
//             return med;
//         }else if(array[med]>target){
//             right = med-1;
//         }else{
//             left = med + 1;
//         }
//         med = (left+right)/2;
//     }
//     return -1;
// };
// int main(){
//     int array[]= {1,2,3,4,5,6,7,8};
//     int size = 8;
//     int target = 9;
//     int targetSearch = binarySearch(array,size,target);
//     if(targetSearch == -1){
//         cout<<"not found"<<endl;
//     }else{
//         cout<<"found "<<"index "<<targetSearch<<endl;
// }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// int main()
// {
//     int array[] = {1, 2, 3, 4, 5, 6, 7};
//     int size = 7;
//     int target = 5;
//     int targetSearch = binary_search(array, array + size, target);
//     if (targetSearch == target)
//     {
//         cout << "found" << endl;
//     }
//     else
//     {
//         cout << " not found " << endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOcciur(vector<int>arr,int target){
//     int left = 0;
//     int right = arr.size()-1;
//     int ans = -1;
//     while(right>=left){
//         int mid = left+(right-left)/2;
//         if(arr[mid]==target){
//             ans= mid;
//             right = mid-1;
//         }else if(arr[mid]>target){
//             right = mid-1;
//         }else{
//             left = mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>arr = {1,2,3,4,5,6,7};
//     int target = 7;
//     int first = firstOcciur(arr,target);
//     if(first){
//         cout<<"first occurance of "<<target<<" is "<<first<<endl;
//     }

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOcciur(vector<int>arr,int target){
//     int left = 0;
//     int right = arr.size()-1;
//     int ans = -1;
//     while(right>=left){
//         int mid = left+(right-left)/2;
//         if(arr[mid]==target){
//             ans= mid;
//             left = mid+1;
//         }else if(arr[mid]>target){
//             right = mid-1;
//         }else{
//             left = mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>arr = {1,2,3,4,7,7,9};
//     int target = 7;
//     int first = firstOcciur(arr,target);
//     if(first){
//         cout<<"first occurance of "<<target<<" is "<<first<<endl;
//     }

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOccurrence(vector<int>array,int target){
//     int start = 0;
//     int last = array.size()-1;
//     int nums = -1;
//     while(last>=start){
//         int mid = start + (last-start)/2;
//         if(array[mid]==target){
//             nums= mid;
//             last = mid-1;
//         }else if(array[mid]>target){
//             last = mid -1;
//         }else{
//             start = mid+1;
//         }
//     }
//     return nums;
// }
// int lastOccurrence(vector<int>array,int target){
//     int start = 0;
//     int last = array.size()-1;
//     int nums2 = -1;
//     while(last>=start){
//         int mid = start + (last-start)/2;
//         if(array[mid]==target){
//             nums2= mid;
//             last = mid+1;
//         }else if(array[mid]>target){
//             last = mid -1;
//         }else{
//             start = mid+1;
//         }
//     }
//     return nums2;
// }
// int main(){
//     vector<int> array = {1,2,3,4,5,5,5,5,5,5,5,5,6};
//     int target = 5;
//     int result =  firstOccurrence(array,target);

//     int lastResult = lastOccurrence(array,target);

// int totalOccuence = lastResult - lastResult+1;
// cout<<totalOccuence<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOccurence(vector<int> array,int target){
//     int start = 0;
//     int last = array.size()-1;
//     int nums = 0;
//     while(start<=last){
//         int mid = start + (last - start)/2;
//         if(array[mid]==target){
//             nums = mid;
//             last = mid-1;
//         return nums;
//         }else if(array[mid]>target){
//             last = mid-1;
//         }else{
//             start = mid+1;

//         }
//     }
//     return -1;
// }
// int lastOccurence(vector<int> array,int target){
//     int start = 0;
//     int last = array.size()-1;
//     int numse = 0;
//     while(start<=last){
//         int mid = start + (last - start)/2;
//         if(array[mid]==target){
//             numse = mid;
//             start = mid+1;
//         }else if(array[mid]>target){
//             last = mid-1;
//         }else{
//             start = mid+1;

//         }
//     }
//     cout<<numse<<" ";
// }
// int main(){
//     vector<int> array{1,2,3,3,4,4};
//     int target;
//     cin>>target;
//     int first = firstOccurence(array,target);
//     int last = lastOccurence(array,target);
//     cout<<last<<endl;
//     int totalElemnt = last - first +1;
//      cout<<"total elment is "<<" "<<totalElemnt<<endl;
// }

// #include <iostream>
// using namespace std;
// int squreRoot(int targer)
// {
//     int start = 0;
//     int last = targer;
//     int root = 0;
//     while (start <= last)
//     {
//         int mid = start + (last - start) / 2;
//         if (mid * mid == targer)
//         {
//             return mid;
//         }
//         else if (mid * mid > targer)
//         {
//             last = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//             root = mid;
//         }
//     }
//     return root;
// }
// int main()
// {
//     int targer;
//     cout << "enter your square number" << endl;
//     cin >> targer;
//     int target = squreRoot(targer);
//     cout << "square root is " << target << endl;

//     int decimalDigit;
//     cout << "enter your digits upto" << endl;
//     cin >> decimalDigit;
//     double ans = target;
//     int numb = 0.1;
//     for (int i = 0; i < decimalDigit; i++)
//     {
//         for (double dec = ans; dec * dec < targer; dec = +numb)
//         {
//             ans = dec;
//         }
//         numb = numb / 10;
//     }
//     cout << ans << endl;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int nearlyElemnt(vector<int> array,int target){
//     int start = 0;
//     int last = array.size()-1;
//     while(start<=last){
//         int mid = start + (last -start)/2;
//         if(array[mid]==target){
//             return mid;
//         }else if(array[mid-1]==target){
//             return mid -1;
//         }else if(array[mid+1]==target){
//             return mid+1;
//         }else if(array[mid]>target){
//             last = mid -2;
//         }else{
//             start = mid + 2;
//         }
//     }
//     return -1;
// };
// int main(){
//     vector<int> array = {10,3,40,20,50,80,70};
//     int target;
//     cout<<"enter your target digit"<<endl;
//     cin>>target;
//     cout<<nearlyElemnt(array,target);

// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOccurence(vector<int> array,int target){
//     int start = 0;
//     int last = array.size() -1;
//     int storage = -1;
//     while(start<=last){
//         int mid = start + (last-start)/2;
//         if(array[mid] == target){
//             storage = mid;
//             last = mid -1;
//         }else if(array[mid]>target){
//             last = mid -1;
//         }else{
//             start = mid + 1;
//             storage = start;
//         }
//     }
//     return storage;
// }
// int main(){
//     int target;
//     cin>>target;
//     vector<int> array{1,2,3,3,3,3,4,4,5,6,7};
//     cout<<firstOccurence(array,target);
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int lastOccur(vector<int> array,int target){
//     int start = 0;
//     int last = array.size()-1;
//     int storage = -1;
//     while(start<=last){
//         int mid = start + (last-start)/2;
//         if(array[mid]==target){
//             start = mid +1;
//             storage = mid;
//         }else if(array[mid]>target){
//             last = mid -1;

//         }
//         else{
//             start = mid +1;
//             storage = start;
//         }

//     }
//     return storage;
// };
// int main(){
//     int target;
//     cin>>target;
//     vector<int> array{1,2,3,3,3,3,4};
//     cout<<lastOccur(array,target);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int squareRoot(int target){
//     int start = 0;
//     int last = target;
//     int storage = -1;
//     while(start<=last){
//         int mid = start + (last-start)/2;
//         if(mid*mid == target){
//             return mid;
//         }else if(mid*mid>target){
//             last = mid-1;
//         }else{
//             start = mid+1;
//             storage = mid;

//         }
//     }
//     return storage;
// }
// int main(){
//     int target;
//     int decimal;
//     cout<<"enter your square root number"<<endl;
//     cin>>target;
//     int answer = squareRoot(target);
//     cout<<"enter your decimal upto "<<endl;
//     cin>>decimal;
//     double ans = answer;
//     double deci = 0.1;
//     for(int i = 0;i<decimal;i++){
//         for(double j = ans;j*j<=target;j+=deci){
//             ans = j;
//         }
//         deci = deci/10;
//     }
//     cout<<"square root of "<<target<<" is "<<ans<<endl;
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> array,int target){
    
}
int main(){
    vector<int> array = {1,1,1,2,2,3,3,4};
    int target = 2;
    firstOccurence(array,target)
}