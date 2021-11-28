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
                cout << "0. Colombian\n1. German\n2. Afghan\n3. Japanese\nType the nationality code: ";
                cin >> id;
                try{
                    recruitmentSystem.showNationalityInfo(id);//Muestra una nacionalidad especifica
                }catch(std::invalid_argument &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 2:
                cout << "Type the Id of the candidate: ";
                cin >> id;
                try{
                    recruitmentSystem.addCandidate(id);//Añade candidato
                }catch(std::invalid_argument &ex){
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 3:
                cout << "Type the Id of the candidate: ";
                cin >> id;
                try{
                    recruitmentSystem.createInterview(id);//Le crea una entrevista a un candidato
                }catch(std::invalid_argument &ex) {
                    cout << "ERROR: " << ex.what();
                }
                break;
            case 4:
                cout << "Type the Id of the candidate: ";
                cin >> id;
                try{
                    recruitmentSystem.hireCandidate(id); //Contrata a un candidato
                }catch(std::invalid_argument &ex) {
                    cout << "ERROR: " << ex.what();
                }
                break;
        }
    }while(opcion != 0);
}

View::~View(){}

