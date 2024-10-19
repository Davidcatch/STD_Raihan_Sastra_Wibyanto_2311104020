#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
using namespace std;
typedef int infotype;
typedef struct elmlist *address;

// Membuat dekarasi tipe list
struct elmlist
{
  infotype info;
  address next;

};

struct List
{
  address first;
};

// Membuat procedure createList
void createList(List &L);

// Membuat elemen dengan menggunakan fungsi allocate
address allocate(infotype x);

// Elemen harus diinsert ke List 
void insertFirst(List &L, address P);

// Menampilkan isi list
void printInfo(List L);

// tambah procedure iL,iA,dL,dA
void createList(List &L);
address allocate(infotype x);
void insertFirst(List &L, address P);
void insertLast(List &L, address P);      // New function
void insertAfter(address Prec, address P);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);     // New function
void deleteAfter(address Prec, address &P);
address searchInfo(List L, infotype x);   // New function
void printInfo(List L);

