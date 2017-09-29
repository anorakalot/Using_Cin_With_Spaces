# include <iostream>
int main(){
  char a[256] ;
  std :: cout << "what do you want outputted: ";
  std :: cin.getline(a,sizeof(a));
  std :: cout << a;
  return 0;
}
