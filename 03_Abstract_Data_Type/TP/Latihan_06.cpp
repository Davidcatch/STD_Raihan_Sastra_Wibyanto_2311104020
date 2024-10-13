#include<iostream>
using namespace std;

struct cone
{
  int r, t;
  float phi;
};

//primitif / Header fungsi (&.h)
void inputCone(cone &c);
float volume(cone c);

int main ()
{
  cone cn;
  inputCone(cn); // cn singkatan cone atau kerucut 
  cout << "Volume dari bangun ruang kerucut adalah "<< volume(cn);
  return 0;
}

// Body / relisasi dari primitif (&.c)
void inputCone(cone &c)
{
  cout << "Masukkan PHI : ";
  cin >> (c).phi;
  cout << "Masukkan Jari- Jari : ";
  cin >> (c).r;
  cout << "Masukkan Tinggi : ";
  cin >> (c).t;
}

float volume(cone c)
{
  return (c.phi * c.r *c.r * c.t)/3;
} 

