#include <iostream>
#include <string>

using namespace std;

// Struktur Node untuk menyimpan data buku
struct Node
{
  int IdBuku;
  string JudulBuku;
  string PenulisBuku;
  Node* next;
  Node* prev;
};

class doubleLinkedList{
  private:
    Node* head;
    Node* tail;

  public:
    doubleLinkedList(){
      head = nullptr;
      tail = nullptr;
    }

  // Fungsi untuk menambah buku di akhir linked list
  void addBookAtEnd(int idBuku, string judulBuku, string penulisBuku){
    Node* newNode = new Node();
    newNode->IdBuku = idBuku;
    newNode->JudulBuku = judulBuku;
    newNode->PenulisBuku = penulisBuku;
    newNode->next = nullptr;
    newNode->prev = tail;

    if(tail ==  nullptr){
      head = tail = newNode;
    }else{
      tail->next = newNode;
      tail = newNode;
    }
    cout << "Buku '" << judulBuku << "' berhasil ditambahkan." <<endl;
  }

  // Fungsi untuk menampilkan semua buku dari awal ke akhir
  void displayFromStart(){
    if(head ==  nullptr){
      cout << "Daftar buku kosong." << endl;
      return;
    }

    Node* temp = head;
    cout << "Daftar Buku dari Awal ke Akhir:" <<endl;
    while (temp != nullptr)
    {
      cout << "ID Buku: " << temp->IdBuku << ", Judul: " << temp->JudulBuku << ", Penulis: " << temp->PenulisBuku <<endl;
      temp = temp->next;
    } 
  }

  // Fungsi untuk menampilkan semua buku dari akhir ke awal
  void displayFromEnd(){
    if(tail == nullptr){
      cout << "Daftar buku kosong." << endl;
      return;
    }

    Node* temp = tail;
    cout << "Daftar Buku dari Akhor ke Awal:" << endl;
    while (temp != nullptr)
    {
      cout << "ID Buku: " << temp->IdBuku << ", Judul: " << temp->JudulBuku << ", Penulis: " << temp->PenulisBuku <<endl;
      temp = temp->prev;
    }
  }
};

int main() {
    doubleLinkedList listBuku;

    // Menambahkan beberapa buku
    listBuku.addBookAtEnd(101, "Belajar C++", "Raihan");
    listBuku.addBookAtEnd(102, "Struktur Data", "Haikal");
    listBuku.addBookAtEnd(103, "Pemrograman Berorientasi Objek", "Hafizh");

    // Menampilkan daftar buku dari awal ke akhir
    cout << endl;
    listBuku.displayFromStart();

    // Menampilkan daftar buku dari akhir ke awal
    cout << endl;
    listBuku.displayFromEnd();

    return 0;
}
