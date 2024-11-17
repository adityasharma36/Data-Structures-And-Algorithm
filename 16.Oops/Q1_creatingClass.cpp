// #include<iostream>
// #include<string>
// using namespace std;
// class animal{
//     private:
//     int weight;
//     public:
//     string name;
//     int age;
    
//     void eat(){
//         cout<<"eating "<<endl;
//     };
//     void sleep(){
//         cout<<"sleeping "<<endl;
//     };
//     void setWeight(int w){
//         weight = w;
//     }
//     int getWeight(){
//         return weight;
//     }
// };
// int main(){
//     animal Ramesh;
//     Ramesh.age = 17;
//     Ramesh.name = "Rahul";
//     cout<<"names of Ramesh is : "<<Ramesh.name<<endl;
//     cout<<"age of Ramesh is : "<<Ramesh.age<<endl;
//     Ramesh.eat();
//     Ramesh.sleep();
//     Ramesh.setWeight(100);
//     cout<<"weight of Ramesh is : "<<Ramesh.getWeight()<<endl;
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
    string name;
    int age;
    int weight;
    animal(){
        cout<<"Constructor Called "<<endl;
    }
    animal(int age){
        this->age = age;
        cout<<"the age is "<<age<<endl;
    }
    animal(int age,int weight){
        this->age = age;
        this->weight = weight;
        cout<<"the age is "<<age<<"the weight is "<<weight<<endl;
    }
    void eat(){
        cout<<"eating "<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    // string getName(){
    //     return name;
    // }
    // string setName(string names){
    //     name = names;
    // }
};
int main(){
    animal Ramesh;
    animal(12);
    animal(17,65);
    // Ramesh.age = 17;
    // Ramesh.name = "Rahul";
    // Ramesh.weight = 2;
    // cout<<"the names is "<<Ramesh.name<<endl;
    // cout<<"the age is "<<Ramesh.age<<endl;
    // cout<<"the weight is "<<Ramesh.weight<<endl;
    // Ramesh.eat();
    // Ramesh.sleep();
    // Ramesh.setName("aditya");
    // cout<<"name is "<<Ramesh.getName()<<endl;
    // animal* Ramesh = new animal;
    // (*Ramesh).age = 15;
    // (*Ramesh).name = "rahul";
    // (*Ramesh).weight= 120;
    // cout<<"the names is "<<(*Ramesh).age<<endl;
    // cout<<"the names is "<<(*Ramesh).name<<endl;
    // cout<<"the names is "<<(*Ramesh).weight<<endl;
    // return 0;
}