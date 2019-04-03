#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
           };
node *head, *tail;

int isEmpty(){
    if (head == NULL)
        return 1;
    else return 0;
             }
void InsFront(int nilai){
    node *baru;
    beru = new node;
    baru->data=nilai;
    baru->next=NULL;
}else{
    baru->next=head;
    head=baru;
}
cout<<"\n data "<<nilai<<" dimasukan ke dalam list\n";
}

void InsBack(int nilai){
    node *baru, *bantu;
    baru=new node;
    baru->data=nilai;
    baru->next=NULL;
}else{
    bantu=head;
    while(bantu->next!=NULL){
        bantu=bantu->next;
    

int main (){
    cout<<"LINKED LIST\n\n";
    cout<<"==================\n";
    cout<<"1. Insert Depan\n";
    cout<<"2. Insert Belakang\n";
    cout<<"3. Hapus Depan\n";
    cout<<"4. Hapus Belakang\n";
    cout<<"5. Insert Sesuai letak\n";
    cout<<"6. Keluar Program\n\n";
    menu:
    int pil;
    int nilai, letak;
    cout<<"Masukkan Pilihan = ";cin>>pil;
switch (pil){
        case 1 : cout<<"Masukkan data = ";
                 cin>>nilai;
                 InsFront(nilai);
                 Display();
                 goto menu;
        case 2 : cout<<"Masukkan data = ";
                 cin>>nilai;
                 InsBack(nilai);
                 Display();
                 goto menu;
        case 3 : DelFront();
                 cout<<"\nBerhasil di hapus.\n";
                 Display();
                 goto menu;
        case 4 : DelBack();
                 cout<<"\nBerhasil di hapus.\n";
                 Display();
                 goto menu;
        case 5 : cout<<"Masukkan Letak ke Berapa = ";cin>>letak;
                 cout<<"Masukkan Nilai = ";cin>>nilai;
                 InsertPos(letak,nilai);
                 Display();
                 goto menu;
      case 6 : cout<<"\n\nTERIMA KASIH :) \n";
                 exit(0);
