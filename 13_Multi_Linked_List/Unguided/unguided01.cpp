#include <iostream>
#include <string>
using namespace std;

struct Proyek {
    string nama;
    int duration;
    Proyek* next;
};

struct Pegawai {
    string nama;
    string id;
    Pegawai* next;
    Proyek* projectHead;
};

Pegawai* createPegawai(string nama, string id) {
    Pegawai* newPegawai = new Pegawai;
    newPegawai->nama = nama;
    newPegawai->id = id;
    newPegawai->next = nullptr;
    newPegawai->projectHead = nullptr;
    return newPegawai;
}

Proyek* createProject(string nama, int duration) {
    Proyek* newProject = new Proyek;
    newProject->nama = nama;
    newProject->duration = duration;
    newProject->next = nullptr;
    return newProject;
}

void addPegawai(Pegawai*& head, string nama, string id) {
    Pegawai* newPegawai = createPegawai(nama, id);
    if (!head) {
        head = newPegawai;
    } else {
        Pegawai* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newPegawai;
    }
}

Pegawai* findPegawai(Pegawai* head, string id) {
    Pegawai* temp = head;
    while (temp && temp->id != id) {
        temp = temp->next;
    }
    return temp;
}

void addProject(Pegawai* Pegawai, string nama, int duration) {
    if (!Pegawai) return;
    Proyek* newProject = createProject(nama, duration);
    if (!Pegawai->projectHead) {
        Pegawai->projectHead = newProject;
    } else {
        Proyek* temp = Pegawai->projectHead;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newProject;
    }
}

void removeProject(Pegawai* Pegawai, string nama) {
    if (!Pegawai || !Pegawai->projectHead) return;
    Proyek* temp = Pegawai->projectHead;
    Proyek* prev = nullptr;

    while (temp && temp->nama != nama) {
        prev = temp;
        temp = temp->next;
    }

    if (temp) {
        if (!prev) {
            Pegawai->projectHead = temp->next;
        } else {
            prev->next = temp->next;
        }
        delete temp;
    }
}

void displayPegawais(Pegawai* head) {
    Pegawai* emp = head;
    while (emp) {
        cout << "Pegawai: " << emp->nama << " (ID: " << emp->id << ")" << endl;
        Proyek* proj = emp->projectHead;
        while (proj) {
            cout << "  Proyek: " << proj->nama << ", Duration: " << proj->duration << " months" << endl;
            proj = proj->next;
        }
        emp = emp->next;
    }
}

int main() {
    Pegawai* PegawaiList = nullptr;

    addPegawai(PegawaiList, "Andi", "P001");
    addPegawai(PegawaiList, "Budi", "P002");
    addPegawai(PegawaiList, "Citra", "P003");

    addProject(findPegawai(PegawaiList, "P001"), "Aplikasi Mobile", 12);
    addProject(findPegawai(PegawaiList, "P002"), "Sistem Akuntansi", 8);
    addProject(findPegawai(PegawaiList, "P003"), "E-commerce", 10);

    addProject(findPegawai(PegawaiList, "P001"), "Analisis Data", 6);

    removeProject(findPegawai(PegawaiList, "P001"), "Aplikasi Mobile");

    displayPegawais(PegawaiList);

    return 0;
}
