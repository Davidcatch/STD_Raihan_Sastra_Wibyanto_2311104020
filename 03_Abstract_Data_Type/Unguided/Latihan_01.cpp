#include<iostream>
//#include<>
//#include<>
using namespace std;

struct Mahasiswa
{
  string nim;
  string nama;
  float uts,uas,tugas,finalscore;
};

float hitungFinalScore(float uts, float uas, float tugas)
{
  return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

int main(){
  Mahasiswa mahasiswa[100];
  int count = 0;

  mahasiswa[count++] = {"Raihan","2311104020", 85, 80, 90};
  mahasiswa[count++] = {"Nizar","2311104019", 82, 88, 81};

  //membuat perulangan
  for (int i = 0; i < count; i++){
    float finalscore = hitungFinalScore(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    cout << "Nama : "<< mahasiswa[i].nama << endl;
    cout << "NIM : "<< mahasiswa[i].nim << endl;
    cout << "UTS : "<< mahasiswa[i].uts << endl;
    cout << "UAS : "<< mahasiswa[i].uas << endl;
    cout << "Tugas : "<< mahasiswa[i].tugas << endl;
    cout << "Nilai Akhir : "<< finalscore << endl;
    cout << "-------------------------------------------\n";
  }
  return 0;
} 
