#ifndef PELAJARAN_H
#define PELAJARAN_H

#include<string> //library untuk memanggil string
using namespace std;
// tipe
struct pelajaran
{
  string namaMapel,kodeMapel;
};

pelajaran create_pelajaran(string namaMapel, string kodeMaspel);// fungsi

void tampil_pelajaran(pelajaran pel); // prosedur

#endif