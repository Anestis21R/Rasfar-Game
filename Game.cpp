#include <iostream>
#include <string.h>
#include <Windows.h>


using namespace std;
void Chapter1();
void Chapter2();
void Chapter3();
void Chapter4();
void Chapter5();
void Chapter6();
void Chapter7();
void next();
void next1();
void next2();
void next3();
void next4();
void next5();


void Printstart() {
    string name;
    char getAnswer;
    system("Color 04");
    cout << "=============" << endl;
    cout << "|Rasfar Game|" << endl;
    cout << "=============" << endl;
    cout << "Start The Game [e]" << endl;
    cout << "Quit The Game [q]" << endl;
    cin >> getAnswer;
    cin.ignore();

    if (getAnswer == 'e') {
        cout << "Pws se lene, warrior?" << endl;
        getline(cin, name);
        cout << "Kalws Orises sto Rasfar Game Warrior: " << name << endl;

    }
    else if (getAnswer == 'q') {
        cout << "Quiting" << endl;
          exit(0);
    }
    else {
        cout << "Closed";
        exit(0);

    }
}
void Start() {
    char getAnswer;
    cout << "Molis ksupnhses se mia spulia gia na proxwriseis pata [y] alliws pata kapoio allo koumpi" << endl;
    cin >> getAnswer;
    sleep(1);
    if (getAnswer == 'y') {
        cout << "Vgaineis apo thn spulia kai vlepeis to dasos" << endl;
    }
    else {
        cout << "Force ShutDown";
        exit(0);
    }
sleep(1);
    cout << "Thes na proxwriseis kai na pas pros to dasos?" << endl;
    sleep(1);
    cout << "An thes na proxwriseis pros to dasos pata [y] An thes na stamathseis edw pata [n]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Proxwrises pros to dasos kai vrhkes ena spathi" << endl;
        sleep(1);
        cout << "Pare to spathi pou vrhkes [f]";
        cin >> getAnswer;

        if (getAnswer == 'f') {
            cout << "Sugxarhthria Warrior shkwses to prwto spathi pou exei 20 damage" << endl;
        }
    }
    else if (getAnswer == 'n') {

        cout << "Kalh sunexeia Warrior elpizw na se ksana dw" << endl;
    }
    else {
        cout << "Force ShutDown";
    }

}
void Chapter1() {
    int MaxHP = 100;
    int goblin = 100;
    int goblindmg = 30;
    int sword = 20;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai ena Goblin" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword << "Damage" << endl;
        cout << "Ksekinhses to fight me to Goblin" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                goblin = goblin - sword;
                cout << "Ekanes damage sto Goblin: - " << sword << endl;
                cout << "To Hp tou teratos einai" << goblin << endl;
                block = rand()  % 94 + 3;
                MaxHP = MaxHP - (goblindmg * block / 100);
                cout << "To teras sou ekane: " << goblindmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && goblin > 0);
        if (goblin == 0) {
            cout << "Kerdises to Prwto Chapter proxwras sto epomeno!" << endl;
            cout << "Sugxarhthria kerdises apo authn thn pista to kainourio spathi!" << endl;
             next();
        }

        else {
            cout << "Dusthxws exases ksana prospathise!" << endl;
            Chapter1();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo ta Goblin ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();
    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

} 
void next(){
    char getAnswer;
        cout << "Theleis na proxwriseis sto epomeno Chapter? [y] h [r] gia na fugeis"<<endl;
        cin>> getAnswer;
    if (getAnswer == 'y'){
        Chapter2();
    }
    else if(getAnswer == 'r'){
        cout<<"Efuges"<<endl;
        Printstart();
    }
    else{
        cout<< "Force shutdown" << endl;
        exit(0);
    }
}

void Chapter2() {
    int MaxHP = 100;
    int skeleton = 100;
    int skeletondmg = 30;
    int sword2 = 22;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai ena Skeleton" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword2 << "Damage" << endl;
        cout << "Ksekinhses to fight me to Skeleton" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                skeleton = skeleton - sword2;
                cout << "Ekanes damage sto Skeleton: - " << sword2 << endl;
                    if(skeleton < 0){
                    skeleton = 0;
                }
                cout << "To Hp tou teratos einai" << skeleton << endl;
                block = rand()  % 94 + 4;
                MaxHP = MaxHP - (skeletondmg * block / 100);
                cout << "To teras sou ekane: " << skeletondmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && skeleton > 0);
        if (skeleton == 0) {
            cout << "Kerdises to Deutero Chapter proxwras sto epomeno!" << endl;
            sleep(1);
            cout << "Sugxarhthria kerdises apo authn thn pista to kainourio spathi!" << endl;
            next1();
            
        }
        else {
            cout << "Dusthxws exases thn zwh sou sthn maxh Warrior tha prepei na ksana prospathiseis" << endl;
            Chapter2();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo ta Skeleton ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();

    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

}

void next1(){
    char getAnswer;
        cout << "Theleis na proxwriseis sto epomeno Chapter? [y] h [r] gia na fugeis"<<endl;
        cin>> getAnswer;
    if (getAnswer == 'y'){
        Chapter3();
    }
    else if(getAnswer == 'r'){
        cout<<"Efuges"<<endl;
        Printstart();
    }
    else{
        cout<< "Force shutdown" << endl;
        system("PAUSE");
    }
}

void Chapter3() {
    int MaxHP = 100;
    int zombie = 100;
    int zombiedmg = 30;
    int sword3 = 24;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai ena Zombie" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword3 << "Damage" << endl;
        cout << "Ksekinhses to fight me to Zombie" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                zombie = zombie - sword3;
                cout << "Ekanes damage sto Zombie: - " << sword3 << endl;
                    if(zombie < 0){
                    zombie = 0;
                }
                cout << "To Hp tou teratos einai" << zombie << endl;
                block = rand()  % 94 + 5;
                MaxHP = MaxHP - (zombiedmg * block / 100);
                    if(zombie < 0){
                    zombie = 0;
                }
                cout << "To teras sou ekane: " << zombiedmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && zombie > 0);
        if (zombie == 0) {
            cout << "Kerdises to Trito Chapter proxwras sto epomeno!" << endl;
            sleep(1);
            cout << "Sugxarhthria kerdises apo authn thn pista to kainourio spathi!" << endl;
            next2();
        }

        else {
            cout << "Dusthxws exases ksana prospathise!" << endl;
            Chapter3();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo ta Zombie ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();
    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

}

void next2(){
    char getAnswer;
        cout << "Theleis na proxwriseis sto epomeno Chapter? [y] h [r] gia na fugeis"<<endl;
        cin>> getAnswer;
    if (getAnswer == 'y'){
        Chapter4();
    }
    else if(getAnswer == 'r'){
        cout<<"Efuges"<<endl;
        Printstart();
    }
    else{
        cout<< "Force shutdown" << endl;
        exit(0);
    }
}

void Chapter4() {
    int MaxHP = 100;
    int witch = 100;
    int witchdmg = 30;
    int sword4 = 26;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai ena Witch" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword4 << "Damage" << endl;
        cout << "Ksekinhses to fight me to Witch" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                witch = witch - sword4;
                cout << "Ekanes damage sto Witch: - " << sword4 << endl;
                    if(witch < 0){
                    witch = 0;
                }
                cout << "To Hp tou teratos einai" << witch << endl;
                block = rand()  % 95  + 6;
                MaxHP = MaxHP - (witchdmg * block / 100);
                    if(witch < 0){
                    witch = 0;
                }
                cout << "To teras sou ekane: " << witchdmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && witch > 0);
        if (witch == 0) {
            cout << "Kerdises to Tetarto Chapter proxwras sto epomeno!" << endl;
            sleep(1);
            cout << "Sugxarhthria kerdises apo authn thn pista to kainourio spathi!" << endl;
            next3();
        }

        else {
            cout << "Dusthxws exases ksana prospathise!" << endl;
            Chapter4();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo ta Witch ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();
    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

}

void next3(){
    char getAnswer;
        cout << "Theleis na proxwriseis sto epomeno Chapter? [y] h [r] gia na fugeis"<<endl;
        cin>> getAnswer;
    if (getAnswer == 'y'){
        Chapter5();
    }
    else if(getAnswer == 'r'){
        cout<<"Efuges"<<endl;
        Printstart();
    }
    else{
        cout<< "Force shutdown" << endl;
        exit(0);
    }
}

void Chapter5() {
    int MaxHP = 100;
    int orc = 100;
    int orcdmg = 30;
    int sword5 = 28;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai ena Orc" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword5 << "Damage" << endl;
        cout << "Ksekinhses to fight me to Orc" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                orc = orc - sword5;
                cout << "Ekanes damage sto Orc: - " << sword5 << endl;
                    if(orc < 0){
                    orc = 0;
                }
                cout << "To Hp tou teratos einai" << orc << endl;
                block = rand()  % 95 + 7;
                MaxHP = MaxHP - (orcdmg * block / 100);
                    if(orc < 0){
                    orc = 0;
                }
                cout << "To teras sou ekane: " << orcdmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && orc > 0);
        if (orc == 0) {
            cout << "Kerdises to Pempto Chapter proxwras sto epomeno!" << endl;
            sleep(1);
            cout << "Sugxarhthria kerdises apo authn thn pista to kainourio spathi!" << endl;
            next4();
        }

        else {
            cout << "Dusthxws exases ksana prospathise!" << endl;
            Chapter5();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo ta Orc ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();
    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

}

void next4(){
    char getAnswer;
        cout << "Theleis na proxwriseis sto epomeno Chapter? [y] h [r] gia na fugeis"<<endl;
        cin>> getAnswer;
    if (getAnswer == 'y'){
        Chapter6();
    }
    else if(getAnswer == 'r'){
        cout<<"Efuges"<<endl;
        Printstart();
    }
    else{
        cout<< "Force shutdown" << endl;
        exit(0);
    }
}

void Chapter6() {
    int MaxHP = 100;
    int icequeen = 100;
    int icequeendmg = 30;
    int sword6 = 31;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai mia Ice Queen" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword6 << "Damage" << endl;
        cout << "Ksekinhses to fight me thn Ice Queen" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                icequeen = icequeen - sword6;
                cout << "Ekanes damage sthn Ice Queen: - " << sword6 << endl;
                    if(icequeen < 0){
                    icequeen = 0;
                }
                cout << "To Hp tou teratos einai" << icequeen << endl;
                block = rand()  % 95 + 8;
                MaxHP = MaxHP - (icequeendmg * block / 100);
                    if(icequeen < 0){
                    icequeen = 0;
                }
                cout << "To teras sou ekane: " << icequeendmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && icequeen > 0);
        if (icequeen == 0) {
            cout << "Kerdises to 6 Chapter proxwras sto epomeno!" << endl;
            next5();
        }

        else {
            cout << "Dusthxws exases ksana prospathise!" << endl;
            Chapter6();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo thn Ice Queen ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();
    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

}

void next5(){
    char getAnswer;
        cout << "Theleis na proxwriseis sto epomeno Chapter? [y] h [r] gia na fugeis"<<endl;
        cin>> getAnswer;
    if (getAnswer == 'y'){
        Chapter7();
    }
    else if(getAnswer == 'r'){
        cout<<"Efuges"<<endl;
        Printstart();
    }
    else{
        cout<< "Force shutdown" << endl;
        exit(0);
    }
}

void Chapter7() {
    int MaxHP = 100;
    int bossdragon = 100;
    int bossdragondmg = 30;
    int sword6 = 31;
    char getAnswer;
    int block;
    cout << " WX OXI! Vrethike antipalos mprosta sou kai einai o Boss Dragon" << endl;
    sleep(1);
    cout << "Gia na polemhseis Warrior pata [e] gia na trekseis pata [r]" << endl;
    cin >> getAnswer;
    if (getAnswer == 'e') {
        cout << "To hp pou exeis einai: " << MaxHP << "HP" << endl;
        cout << "Kai to spathi sou exei: " << sword6 << "Damage" << endl;
        cout << "Ksekinhses to fight me to Boss Dragon" << endl;
        cout << "Pata to [n] gia na xtuphseis" << endl;
        do {
            cin >> getAnswer;
            if (getAnswer == 'n') {
                bossdragon = bossdragon - sword6;
                cout << "Ekanes damage sto Boss Dragon: - " << sword6 << endl;
                    if(bossdragon < 0){
                    bossdragon = 0;
                }
                cout << "To Hp tou teratos einai" << bossdragon << endl;
                block = rand()  % 97 + 10;
                MaxHP = MaxHP - (bossdragondmg * block / 100);
                    if(bossdragon < 0){
                    bossdragon = 0;
                }
                cout << "To teras sou ekane: " << bossdragondmg * block / 100 << endl;
                if (MaxHP < 0) {
                    MaxHP = 0;
                }
                cout << "To HP sou twra einai: " << MaxHP << endl;
            }
        } while (MaxHP > 0 && bossdragon > 0);
        if (bossdragon == 0) {
            cout << "======================================" << endl;
            cout << "=SUGXARHTHRIA TERMATISES TO PAIXNIDI!=" << endl;
            cout << "======================================" << endl;
            exit(0);
        }

        else {
            cout << "Dusthxws exases ksana prospathise!" << endl;
            Chapter7();
        }
        
    }
    else if (getAnswer == 'r') {
        cout << "Eisai sigouros oti thes na fugeis? [y]" << endl;
    }
    cin >> getAnswer;
    if (getAnswer == 'y') {
        cout << "Efuges apo to Boss Dragon ksana prospathise apo thn arxh Warrior" << endl;
        Printstart();
    }
    else {
        cout << "Force ShutDown" << endl;
        exit(0);
    }

}
int main() {
    Printstart();
    Start();
    Chapter1();
    char getAnswer;

    return 0;
}