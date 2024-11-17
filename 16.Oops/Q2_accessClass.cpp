#include<iostream>
#include<string>
using namespace std;
class Detail{
    private:
    string names;
    public:
    int age;
    int birth;

    void favFood(){
        cout<<"fav Food is Idile"<<endl;
    }
    void favPlace(){
        cout<<"fav Place is Mumbai"<<endl;
    }

    void setNames(string name){
        names = name;
    }
    string getNames(){
        return names;
    }
    

};
int main(){
    Detail Ramesh;
    Ramesh.age= 23;
    Ramesh.birth=1997;
    Ramesh.setNames("Ramesh");
    cout<<"Name is "<<Ramesh.getNames()<<endl;
    cout<<"Age is "<<Ramesh.age<<endl;
    cout<<"Birth is "<<Ramesh.birth<<endl;
    Ramesh.favFood();
    Ramesh.favPlace();
    return 0;
}

