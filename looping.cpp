#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;
    //Perulangan dengan FOR
    //mencetak tulisan seabnyak 5 kali
    cout<<"PERULANGAN FOR"<<endl;
    for(int i=0;i<=4;i++){
        cout<<"Teknologi Informasi UMY"<<endl;
    }
    cout<<endl;
    //untuk mendapatkanb urutan angka acak yang berbeda
    srand(time(0));

    //perulangan dengan WHILE
    cout<<"PERULANGAN WHILE"<<endl;
    x = 1 + rand()%10;

    while(x<=5){
        cout<<"bilangan acak ="<<x <<endl;
        x = rand()%10;
    }

    cout<<"Bilangan acak while yang terakhir = "<<x <<endl;
    cout<<endl;

    //perulangan dengan DO....WHILE
    cout<<"PERULANGAN DO....WHILE"<<endl;
    x = 1 + rand()%10;
    do{
        cout<<"Bilangan acak = "<<x <<endl;
        x = rand()%10;
    }while(x<=5);

    cout<<"Bilangan acakl do-white yang terakhir ="<<x <<endl;
    cout<<endl;
}

//Logika not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matemaatika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if (!(rerata < 60) )
        status = "lulus";
    else
        status = "tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;

}

//Logika OR
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) || (nilM >= 70))
        status = "Lulus";
    else
        status = "Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}

//Logika AND
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata = (nilB+nilM)/2;

    if ((rerata >= 60) && (nilM >= 70))
            status = "Lulus";
    else
        status ="Tidak lulus";

    cout<<"Status kelulusan = "<<status<<" ,dengan nilai rata-rata = "<<rerata<<endl;
}