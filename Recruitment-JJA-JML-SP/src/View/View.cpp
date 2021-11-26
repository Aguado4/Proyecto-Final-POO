#include "View.h"

View::View(){
}

void View::mostrarMenu(){
    int opcion, id;
    do{
        cout << "System Menu:\n";
        cout << "1. Consult the cultural knowledge by nationality.\n";
        cout << "2. Create candidate.\n";
        cout << "3. Schedule interview.\n";
        cout << "4. Generate interview guide.\n";
        cout << "5. Hire candidate.\n";
        cout << "0. Exit.\n";
        cout << "Select an option: ";
        cin >> opcion;
        system("cls");
        switch (opcion){
            case 1:
                //recruitmentSystem.
                break;
            case 2:
                //recruitmentSystem.
                break;
            case 3:
                cout << "Type the Id of the candidate: ";
                cin >> id;
                recruitmentSystem.createInterview(id);
                break;
            case 4:
                //recruitmentSystem.
                break;
            case 5:
                cout << "Type the Id of the candidate: ";
                cin >> id;
                recruitmentSystem.hireCandidate(id);
                break;
        }
    }while(opcion != 0);
}

View::~View(){}

