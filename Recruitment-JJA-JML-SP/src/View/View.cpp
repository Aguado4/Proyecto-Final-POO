#include "View.h"

View::View(){
}

void View::mostrarMenu(){
    int opcion;
    do{
        cout << "System Menu:\n";
        cout << "1. Consult the cultural knowledge by nationality.\n";
        cout << "2. Create candidate.\n";
        cout << "3. Schedule interview.\n";
        cout << "4. Generate interview guide.\n";
        cout << "5. Generate welcome letter.\n";
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
                //recruitmentSystem.
                break;
            case 4:
                //recruitmentSystem.
                break;
            case 5:
                //recruitmentSystem.
                break;
        }
    }while(opcion != 0);
}

