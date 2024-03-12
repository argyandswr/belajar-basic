#include <iostream>
using namespace std;

double luasPermukaanKubus(double rusuk){
  double L_Pkubus;
  L_Pkubus = 6 * (rusuk*rusuk);
  return L_Pkubus; 
}

double volumeKubus(double rusuk){
  double volume_kubus; 

  volume_kubus = rusuk * rusuk * rusuk;
  return volume_kubus;
}

void menu(){
  int UserInput;
  double rusuk, hasil; 
  char answer; 

do{
  cout << "\nPilih Menu yang Lo Pengen Bro" << endl; 
  cout << "\t1. Luas Permukaan Kubus\n";
  cout << "\t2. Volume Kubus\n"; 
  cout << "\t3. Ga Jadi Ah, Mager\n"; 
  cout << "Jawaban : "; 
  cin >> UserInput; 

    if(UserInput == 1){
    cout << "Masukkan panjang rusuk kubus = ";
    cin >> rusuk;
    cout << "Luas Permukaan Kubus dari rusuk di atas = " << luasPermukaanKubus(rusuk) << endl; 
  } else if(UserInput == 2){
    cout << "Masukkan panjang rusuk kubus = ";
    cin >> rusuk;
    cout << "Volume Kubus dari rusuk di atas = " << volumeKubus(rusuk) << endl; 
  } else if (UserInput == 3){
    break; 
  } else {
    cout << "Masukin yang bener lah brok, ah elah!";
  }

  cout << "Mau ngitung lagi, bro? (y/n) ";
  cin >> answer; 
}while (answer == 'y');


}



int main(){
  char answer;
  
  cout << "=================================================="<< endl; 
  cout << "Program Menghitung Luas Permukaan dan Volume Kubus" << endl;
  cout << "=================================================="<< endl; 

  menu();

  cout << "\nSee u next time, brooo!!!\n";
}

















