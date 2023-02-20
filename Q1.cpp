#include <iostream>
#include <string>
using namespace std;

class computer{
private:
    string operatingsystem;
public:
void setoperatingsystem(string o){
    operatingsystem = o;
    }
 string getoperatingsystem(){
    return operatingsystem;
    }
    };

class client:public computer{
private:
    string UserName;
public:
 void setUserName(string name){
    UserName = name;
    }
string getUserName(){
    return UserName;
    }
    };

class server:public computer{
private:
    string model;
public:
void setmodel(string name){
   model = name;
   }
string getmodel(){
     return model;
     }
     };

int main(){
client myobj1;
myobj1.setoperatingsystem("windows");
myobj1.setUserName("Duncan Mibei");

server myobj2;
myobj2.setoperatingsystem("windows");
myobj2.setmodel("Dell");

cout<<"The operating system:"<<myobj1.getoperatingsystem()<<"\n";
cout<<"Served:"<<myobj1.getUserName()<<"\n";
cout<<"Using the server:"<<myobj2.getmodel();
return 0;
}
