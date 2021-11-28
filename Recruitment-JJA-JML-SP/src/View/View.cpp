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
        cout << "4. Hire candidate.\n";
        cout << "0. Exit.\n";
        cout << "Select an option: ";
        cin >> opcion;
        system("cls");
        switch (opcion){
            case 1:
                try{
                    //recruitmentSystem.
                }catch(std::invalid_argument &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 2:
                try{
                    cout << "Type the Id of the candidate: ";
                    cin >> id;
                    recruitmentSystem.addCandidate(id);
                }catch(std::invalid_argument &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 3:
                try{
                    cout << "Type the Id of the candidate: ";
                    cin >> id;
                    recruitmentSystem.createInterview(id);
                }catch(std::invalid_argument &ex) {
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 4:
                try{
                    cout << "Type the Id of the candidate: ";
                    cin >> id;
                    recruitmentSystem.hireCandidate(id);
                }catch(std::invalid_argument &ex) {
                    cout << "ERROR: " << ex.what();
                }
                break;
        }
    }while(opcion != 0);
}

View::~View(){}

