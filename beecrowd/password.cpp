#include <iostream>
#include <string>

using namespace std;

int up_lo_number(const string& str){
  size_t found_number = str.find_last_of("0123456789");
  size_t found_lo = str.find_last_of("abcdefghijklmnopqrstuvwxyz");
  size_t found_up = str.find_last_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
  
  if((found_number == string::npos) || (found_lo == string::npos) || (found_up == string::npos))
    return 0;
  else
    return 1;
}

int special_char(const string& str){
  size_t found = str.find_last_of("!@#$%&*()_-+=[{]}~^/?;:.>,<`´\"\' ");
  
  if(found == string::npos)
    return 1;
  else
    return 0;
}

int password_size(string s){
  int tamanho;
    tamanho = s.length();
    if((tamanho >= 6) && (tamanho <= 32))
      return 1;
    else
      return 0;
}

int main() {
  string entrada;

  while (getline(cin, entrada)) {
    if(up_lo_number(entrada) && special_char(entrada) && password_size(entrada))
      cout << "Senha valida." << endl;
    else
      cout << "Senha invalida." << endl;
  }

  return 0;
}