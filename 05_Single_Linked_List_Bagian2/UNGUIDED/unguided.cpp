#include <iostream>
#include <string>

using namespace std;

// Struktur node untuk menyimpan data siswa
struct Node
{
  int Nim;
  string Name;
  Node* Next;
};

class singleLinkedList{
  private:
    Node* head;

  public:
    singleLinkedList(){
      head = nullptr;
    }

  //
  void addStudent(int nim, string name){
    Node* newNode = new Node();
    newNode -> Nim = nim;
    newNode -> Name = name;
    newNode -> Next = nullptr;
     if (head == nullptr) {
            head = newNode;  
        } else {
            Node* temp = head;
            while (temp->Next != nullptr) {
                temp = temp->Next;
            }
            temp->Next = newNode;  
        }
        cout << "Student " << name << " added with NIM: " << nim << endl;
    }

  //
  void searchStudentByNIM(int nim) {
    Node* temp = head;
      while (temp != nullptr) {
          if (temp->Nim == nim) {
              cout << "Mahasiswa ditemukan: " << temp->Name << endl;
              return;
            }
          temp = temp->Next;
        }
      cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan" << endl;
    }

  // Tampilkan semua siswa (untuk tujuan pengujian)
  void displayStudents() {
      if (head == nullptr) {
          cout << "Tidak ada mahasiswa di dalam daftar." << endl;
          return;
      }
        Node* temp = head;
        while (temp != nullptr) {
            cout << "NIM: " << temp->Nim << ", Nama: " << temp->Name << endl;
            temp = temp->Next;
        }
    }
};

int main() {
    singleLinkedList list;
    
    // Tambahkan mahasiswa ke dalam daftar
    list.addStudent(4020, "Raihan");
    list.addStudent(4038, "Zidan");
    list.addStudent(4019, "Nizar");

    cout <<"\n";

    // Pencarian mahasiswa berdasarkan NIM
    cout << "Searching for NIM 4019:" << endl;
    list.searchStudentByNIM(4019);

    cout << "Searching for NIM 4042:" << endl;
    list.searchStudentByNIM(4042);

    // Menampilkan semua mahasiswa
    cout <<"\n";
    cout << "Daftar Mahasiswa: " << endl;
    list.displayStudents();

    return 0;
}