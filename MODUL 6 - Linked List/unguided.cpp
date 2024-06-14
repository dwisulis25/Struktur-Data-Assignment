#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    int usia;
    Mahasiswa* next;
};

void insertDepan(Mahasiswa** head, string nama, int usia) {
    Mahasiswa* new_node = new Mahasiswa();
    new_node->nama = nama;
    new_node->usia = usia;
    new_node->next = (*head);
    (*head) = new_node;
}

void insertBelakang(Mahasiswa** head, string nama, int usia) {
    Mahasiswa* new_node = new Mahasiswa();
    Mahasiswa* last = *head;
    new_node->nama = nama;
    new_node->usia = usia;
    new_node->next = NULL;
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

void insertTengah(Mahasiswa* prev_node, string nama, int usia) {
    if (prev_node == NULL) {
        cout << "Node sebelumnya tidak boleh NULL";
        return;
    }
    Mahasiswa* new_node = new Mahasiswa();
    new_node->nama = nama;
    new_node->usia = usia;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void hapusNode(Mahasiswa** head, string key) {
    Mahasiswa* temp = *head, *prev;
    if (temp != NULL && temp->nama == key) {
        *head = temp->next;
        delete temp;
        return;
    }
    while (temp != NULL && temp->nama != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    delete temp;
}

void ubahData(Mahasiswa* head, string namaLama, string namaBaru, int usiaBaru) {
    Mahasiswa* temp = head;
    while (temp != NULL) {
        if (temp->nama == namaLama) {
            temp->nama = namaBaru;
            temp->usia = usiaBaru;
            return;
        }
        temp = temp->next;
    }
}

void cetakList(Mahasiswa* node) {
    while (node != NULL) {
        cout << node->nama << " " << node->usia << endl;
        node = node->next;
    }
}

int main() {
    Mahasiswa* head = NULL;
    
    // a. Masukkan data Anda
    insertDepan(&head, "NamaAnda", 20); // Ganti "NamaAnda" dengan nama Anda dan "20" dengan usia Anda
    
    // d. Tambahkan data Igor di awal
    insertDepan(&head, "Igor", 20);
    
    // b. Hapus data Akechi
    hapusNode(&head, "Akechi");
    
    // c. Tambahkan data Futaba di antara John dan Jane
    // Kode ini asumsikan bahwa John ada di list dan berada tepat sebelum Jane
    Mahasiswa* temp = head;
    while (temp != NULL && temp->nama != "John") {
        temp = temp->next;
    }
    if (temp != NULL) {
        insertTengah(temp, "Futaba", 18);
    }
    
    // e. Ubah data Michael menjadi Reyn
    ubahData(head, "Michael", "Reyn", 18);
    
    // f. Tampilkan seluruh data
    cetakList(head);
    
    return 0;
}