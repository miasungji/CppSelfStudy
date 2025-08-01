//
// Created by MiaKim on 01/08/2025.
//

//Object (객체)
// Friend: name, address, age, height, weight, ...
//    print()

#include <iostream>
#include <string>
#include <vector>

using namespace std;
//Friend : name, address, age, height, weight

class Friend {
public: //access specifier (public, private, protected)
    string m_name;
    string address;
    int age;
    double height;
    double weight;

    void print()
    {
        cout << m_name << " " <<address << " " << age << " " << height << " " <<  weight << " " << endl;
    }
};



void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
    cout << name << " " << address << " " << age << " " << height << " " << weight << " " << endl;
}

int main()
{

    Friend jj{"Jack Jack","Uptown",30,170,50}; //instanciation, instance

    jj.print();

    vector<Friend> my_friends;
    my_friends.resize(2);

    // my_friends[0].print();
    // my_friends[1].print();
    for (auto &ele : my_friends)
        ele.print();


    //print(jj.name,jj.address,jj.age,jj.height,jj.weight);
    //print(jj);


    // vector<string> name_vec;
    // vector<string> addr_vec;
    // vector<int> age_vec;
    // vector<double> height_vec;
    // vector<double> weight_vec;
    //
    // print(name_vec[0],addr_vec[0],age_vec[0],height_vec[0],weight_vec[0]);



    return 0;
}