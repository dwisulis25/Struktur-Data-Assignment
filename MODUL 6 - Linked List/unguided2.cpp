#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
    Product* prev;
    Product* next;
};

class SkincareStore {
private:
    Product* head;
    Product* tail;

public:
    SkincareStore() {
        head = nullptr;
        tail = nullptr;
    }

    void addProduct(const std::string& name, double price) {
        Product* newProduct = new Product;
        newProduct->name = name;
        newProduct->price = price;
        newProduct->prev = nullptr;
        newProduct->next = nullptr;

        if (!head) {
            head = newProduct;
            tail = newProduct;
        } else {
            tail->next = newProduct;
            newProduct->prev = tail;
            tail = newProduct;
        }
    }

    void removeProduct(const std::string& name) {
        Product* current = head;
        while (current) {
            if (current->name == name) {
                if (current->prev) {
                    current->prev->next = current->next;
                } else {
                    head = current->next;
                }
                if (current->next) {
                    current->next->prev = current->prev;
                } else {
                    tail = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
        }
        std::cout << "Product not found: " << name << std::endl;
    }

    void updateProduct(const std::string& oldName, const std::string& newName, double newPrice) {
        Product* current = head;
        while (current) {
            if (current->name == oldName) {
                current->name = newName;
                current->price = newPrice;
                return;
            }
            current = current->next;
        }
        std::cout << "Product not found: " << oldName << std::endl;
    }

    void displayProducts() {
        std::cout << "Nama Produk\tHarga" << std::endl;
        Product* current = head;
        while (current) {
            std::cout << current->name << "\t\t" << current->price << std::endl;
            current = current->next;
        }
    }

    ~SkincareStore() {
        Product* current = head;
        while (current) {
            Product* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    SkincareStore store;
    store.addProduct("Originote", 60000);
    store.addProduct("Somethinc", 150000);
    store.addProduct("Skintific", 100000);

    // Modifikasi sesuai permintaan
    store.addProduct("Azarine", 65000); // Tambahkan Azarine di antara Somethinc dan Skintific
    store.removeProduct("Wardah"); // Hapus produk Wardah (tidak ada dalam data)
    store.updateProduct("Hanasui", "Cleora", 55000); // Update Hanasui menjadi Cleora

    // Tampilkan menu
    std::cout << "Toko Skincare Purwokerto" << std::endl;
    std::cout << "1. Tambah Data" << std::endl;
    std::cout << "2. Hapus Data" << std::endl;
    std::cout << "3. Update Data" << std::endl;
    std::cout << "4. Tambah Data Urutan Tertentu" << std::endl;
    std::cout << "5. Hapus Data Urutan Tertentu" << std::endl;
    std::cout << "6. Hapus Seluruh Data" << std::endl;
    std::cout << "7. Tampilkan Data" << std::endl;
    std::cout << "8. Exit" << std::endl;

    // Tampilkan data produk
    store.displayProducts();

    return 0;
}