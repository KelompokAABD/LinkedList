int main (){
    cout<<"LINKED LIST\n\n";
    cout<<"==================";
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
