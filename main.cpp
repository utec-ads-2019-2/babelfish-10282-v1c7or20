#include <iostream>
#include <map>
#include <sstream>

using namespace std;

map<string,string> diccionary;
string linea, babel, english;
int main() {
    getline(cin,linea);
    while(linea!=""){
        stringstream string(linea);
        string>>english>>babel;
        diccionary[babel]=english;
        getline(cin,linea);
    }
    while(cin>>babel){
        if(!diccionary[babel].empty())
            cout<<diccionary[babel]<<endl;
        else
            cout<<"eh"<<endl;
    }
    return 0;
}