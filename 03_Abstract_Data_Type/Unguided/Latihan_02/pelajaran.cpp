#include<pelajaran.h>
#include<iostream>
using namespace std;

pelajaran create_pelajaran(string namaMapel, string kodeMapel){
  pelajaran p;
  p.namaMapel = namaMapel;
  p.kodeMapel = kodeMapel;
  return p;
}

void tampil_pelajaran(pelajaran p){
  cout << "Nama Pelajaran : " << p.namaMapel << endl;
  cout << "Kode Pelajaran : " << p.kodeMapel <<endl;
}