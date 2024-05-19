#include <iostream>

using namespace std;

// Node class
int main() {
    // Coba deklarasi pointer menggunakan nullptr
class Node {
public:
    int data;
    Node* next;
    Node* ptr = nullptr;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Menambahkan node di awal linked list
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Menghapus node dengan nilai tertentu
    void deleteNode(int data) {
        Node* temp = head;
        Node* prev = nullptr;

        // Mencari node yang akan dihapus
        while (temp != nullptr && temp->data != data) {
            prev = temp;
            temp = temp->next;
        }

        // Jika node tidak ditemukan
        if (temp == nullptr)
            return;

        // Menghapus node
        if (prev == nullptr) {
            head = temp->next;
        } else {
            prev->next = temp->next;
        }

        delete temp;
    }

    // Mencari node dengan nilai tertentu
    bool search(int data) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == data)
                return true;
            temp = temp->next;
        }
        return false;
    }

    // Memperbarui nilai node dengan nilai baru
    void update(int oldData, int newData) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == oldData) {
                temp->data = newData;
                return;
            }
            temp = temp->next;
        }
        cout << "Data not found." << endl;
    }

    // Membalik linked list
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head = prev;
    }

    // Menampilkan linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Penyisipan
    list.insertAtBeginning(3);
    list.insertAtBeginning(2);
    list.insertAtBeginning(1);
    cout << "Linked list setelah penyisipan: ";
    list.display();

    // Penghapusan
    list.deleteNode(2);
    cout << "Linked list setelah penghapusan: ";
    list.display();

    // Penelusuran Pencarian
    int searchKey = 3;
    cout << "Apakah " << searchKey << " ditemukan? ";
    if (list.search(searchKey))
        cout << "Ya" << endl;
    else
        cout << "Tidak" << endl;

    // Pembaruan
    list.update(3, 4);
    cout << "Linked list setelah pembaruan: ";
    list.display();

    // Pembalikan
    list.reverse();
    cout << "Linked list setelah pembalikan: ";
    list.display();

    return 0;
}

