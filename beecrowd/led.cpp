#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string entrada;
	int n;
	char c;
  	int leds;
  	int quantidade;
  	int control = 0;
  	cin >> quantidade;

  	while(control <= quantidade){
  		getline(cin, entrada);  	
      	leds = 0;

		for(int i = 0; i < entrada.length(); i++){
			c = entrada[i];
			string s(1, c);
		    n = stoi(s);
		    switch(n) {
			  case 1:
			    leds += 2;
			    break;
			  case 2:
			    leds += 5;
			    break;
			  case 3:
			    leds += 5;
			    break;
			  case 4:
			    leds += 4;
			    break;
			  case 5:
			    leds += 5;
			    break;
			  case 6:
			    leds += 6;
			    break;
			  case 7:
			    leds += 3;
			    break;
			  case 8:
			    leds += 7;
			    break;
			  case 9:
			    leds += 6;
			    break;	
			  case 0:
			  	leds += 6;
			  	break;
			}
	  	}  
	  	if(leds > 0)
    		cout << leds << " leds" << endl;
  		control++;
  	}

	return 0;
}