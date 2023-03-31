#include <iostream>
#include <string>
#include <map> 

using namespace std;

int main(){
    char C;
    std::map<int, int> m;
    std::map<int,int>::iterator itr;  


    while(cin >> C){
        itr = m.find(int(C));

        if(itr != m.end())
            itr->second += 1;
        else
            m.insert(std::pair<int,int>(int(C), 1));
    }

    std::cout << "Updated map Contains:\n";  

    for( itr = m.begin(); itr != m.end(); ++itr){
        cout << "Key => " << itr->first << ", Value => " << itr->second << endl;      
    }  

    return 0;
}