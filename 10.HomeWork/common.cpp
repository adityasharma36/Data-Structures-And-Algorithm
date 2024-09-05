// #include<iostream>
// #include<vector>
// #include<set>
// #include<algorithm>
// using namespace std;
// int pairDifference(vector<int> array,int difference){
//     int start = 0;
//     int second = 1;
//     int end = array.size()-1;
//      set<pair<int,int> >ans;
//     while(start<=end){

//         int diff = abs(array[second]-array[start]);
//         if(diff== difference){
//             ans.insert({array[start],array[second]});
//             second++;
//             start++;
//         }
//         else if(diff>difference){
//             start++;
//         }else{
//             second++;
//         }
//         if(start == second) second++;
//     }
//     return ans.size();
    
// };
// int main(){
//     vector<int> array = {1,1,3,4,5};
//     int difference;
//     cout << "Enter the difference: ";
//     cin >> difference;
//     cout<<pairDifference(array,difference);
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int kClosetElement(vector<int> array,int x,int diff){
//     int start = 0;
//     vector<int> array1;
//     int end = array.size()-1;
//     while(start<=end){
//         array1.push_back(abs(diff-array[start]));
//         start++;
//     };
//     // sort(array1.begin(),array1.end());
//     for(int i = 0;i<x;i++){
//         cout<<array1[i]+diff<<" ";
//     }
// }
// int main(){
    // vector<int> array{12,16,22,30,35,39,42,45,48,50,53,55,56};
//     int x,diff;
//     cin>>x;
//     cin>>diff;
//     kClosetElement(array,x,diff);
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int kClosestElement(vector<int> array, int x,int y){
//     int start = 0,last = array.size()-1;
//     while(last-start>=y){
//         if(x-array[start]>array[last]-x){
//             start++;
//         }else{
//             last--;
//         }
//     }
//     vector<int> array2;
//     for(int i = start;i<=last;i++){
//         array2.push_back(array[i]);
//         };
//     for(int i = 0;i<array2.size();i++){
//         cout<<array2[i]<<" ";
//     }
// };

// int main(){
//     int x,y;
//     cin>>x>>y;
//     vector<int> array{12,16,22,30,35,39,42,45,48,50,53,55,56};
//     kClosestElement(array,x,y);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int bs(int a[],int start,int end , int x){
//     while(start<=end){
//         int mid = (start+end)/2;
//         if(a[mid]==x){
//             return mid;
//         }else if(a[mid]>x){
//             end = mid-1;
//         }else{
//             start = mid+1;
//         }
//     }
//     return -1;
// }
// int expSearch(int a[],int n,int x){
//     if(a[0]==x) return 0;
//     int i = 1;
//     while(i<n && a[i]<=x){
//         i = i<<1;
//     }
//     return bs(a,i/2,min(i,n-1),x);
// }
// int main(){
//     int a[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//     int n = sizeof(a)/sizeof(int);
//     int x = 1;
//     int ans = expSearch(a,n,x);
//     cout<<ans<<endl;
// }


// #include<iostream>
// #include<set>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int kDiffPair(vector<int> array,int diff){
//     int start = 0;
//     int end = 1;
//     set<pair<int,int>> ans;
//     sort(array.begin(),array.end());
//     while(end<=array.size()){
//         if(array[end]-array[start] == diff){
//             ans.insert({array[start],array[end]});
//             start++;
//             end++;
//         }
//         else if(array[end]-array[start]>diff){
//             start++;
//         }else{
//             end++;
//         }
//         if(start==end) end++;
//     }
//     return ans.size();
// };
// int main(){
//     vector<int> array{1,1,3,4,5};
//     int diff = 2;
//     cout<<kDiffPair(array,diff)<<endl;
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int kClosestElement(vector<int> array,int element,int number){
//     sort(array.begin(),array.end());
//     vector<int> array2;
//     int start = 0;
//     while(start<array.size()){
//         array2.push_back(abs(element-array[start]));
//         start++;
//     };
//     sort(array2.begin(),array2.end());
//     for(int i = 0;i<number;i++){
//         cout<<array2[i]+element<<" ";
//     }

// }
// int main(){
    // vector<int> array{12,16,22,30,35,39,42,45,48,50,53,55,56};
//     int element,number;
//     cout<<"enter your element "<<endl;
//     cin>>element;
//     cout<<"number of closest element "<<endl;
//     cin>>number;
//     kClosestElement(array,element,number);
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int twoPointerApp(vector<int> array,int element,int number){
//     sort(array.begin(),array.end());
//     int start = 0,end= array.size()-1;
//     while(end-start>=number){
//         if(element-array[start]>array[end]-element){
//             start++;
//         }else{
//             end--;
//         }
//     }
//     vector<int> ans;
//     for(int i = start;i<=end;i++){
//         ans.push_back(array[i]);
//     }
//     for(int i = 0;i<number;i++){
//         cout<<ans[i]<<" ";
//     }
// };
// int main(){
//     vector<int> array{12,16,22,30,35,39,42,45,48,50,53,55,56};
//     int element,number;
//     cout<<"enter your element "<<endl;
//     cin>>element;
//     cout<<"number of closest element "<<endl;
//     cin>>number;
//     twoPointerApp(array,element,number);
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits.h>
// using namespace std;
// int bs(int array[],int start,int end,int number){
//     while(start<=end){
//         int mid = start + (end-start)/2;
//         if(array[mid]==number){
//             return mid;
//         }
//         else if(array[mid]>number){
//             end = mid -1;
//         }else{
//             start = mid +1;
//         }
//     }
//     return -1;
// }
// int expSearch(vector<int> array,int number){
//     if(array[0]==number){
//         return 0;
//     int i = 1;
//     while(i<array.size() && array[i]<=number){
//         i = i*2;
//     }
//     bs(array,i/2,min(i,array.size()-1),number);
// }
    
// };
// int main(){
//     vector<int> array{3,4,5,6,11,13,14,15,56,70};
//     int number;
//     cout<<"enter your target "<<endl;
//     cin>>number;
//     int ans = expSearch(array,number);
//     cout<<ans<<endl;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// using namespace std;


