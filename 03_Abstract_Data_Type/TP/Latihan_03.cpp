#include<iostream>
using namespace std;

int main(){
  int no = 5;
  int *ptr = &no;

  cout << "Nilai dari no: "<<no <<endl;
  cout << "Alamat dari no dan disimpan di pointer: "<<ptr <<endl;
  cout << "Nilai berada di alamat tersimpan di pointer dari no: "<<*ptr <<endl;

  return 0;
}
