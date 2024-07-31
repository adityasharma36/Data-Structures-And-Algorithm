// #include<iostream>
// using namespace std;
// bool primeNum(int nums){
//     for(int i = 2;i<nums;i++){
//         if(nums%i==0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     int nums;
//     cin>>nums;
//     for(int i = 2;i<nums;i++){
//         if(primeNum(i)){
//             cout<<i<<" "<<"primeNo"<<endl;
//         }else{
//             cout<<i<<" "<<"not a primeNo"<<endl;
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int factorial(int numb){
//     int total = 1;
//     for(int i = numb;i>=1;i--){
//         total*=i;
//     }
//     return total;
// }
// int main(){
//     int numb;
//     cin>>numb;
//     cout<<factorial(numb)<<" ";
// }
// #include<iostream>
// #include<cmath>
// using namespace std;
// int binaryToDec(int numb){
//     int dec = 0;
//     int power = 0;
//     while(numb>0){
//         int rem = numb%2;
//         dec = rem*pow(10,power++) + dec;
//         numb = numb/2;
//     }
//     cout<<dec<<" ";
// }
// int main(){
//     int numb;
//     cin>>numb;
//     binaryToDec(numb);
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int binaryToDec(int numb){
//     int dec = 0;
//     int power = 0;
//     while(numb>0){
//         int rem = numb%10;
//         dec = rem*pow(2,power++) + dec;
//         numb = numb/10;
//     }
//     cout<<dec<<" ";
// }
// int main(){
//     int numb;
//     cin>>numb;
//     binaryToDec(numb);
// }
