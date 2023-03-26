#include<iostream>
#include <algorithm>

using namespace std;

int isTautogram(string str){
  transform(str.begin(), str.end(), str.begin(), ::toupper);
  char primeira = str[0];
	bool v = true;
	for (int i = 0; i < str.length(); i++){		
		if (str[i] == ' ')
			v = true;	
		else if (str[i] != ' ' && v == true){
      if(str[i] != primeira)
        return 0;
			v = false;
		}
	}
  return 1;
}

int main(){
	string str;
  while(true){
    getline (cin, str);
    if(str == "*")
      break;
    else{
      if(isTautogram(str))
        cout << "Y" << endl;
      else
        cout << "N" << endl;
    }    
  }
  
	return 0;
}