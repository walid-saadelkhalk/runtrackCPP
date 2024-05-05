#include <iostream>
#include <string>
#include <vector>

struct Student {
    std::string name;
    std::string firstname;
    double score;
};

void addNotes(std::vector<Student>& students) {
    std::string name, firstname;
    double score;

    std::cout << "Entrez le nom de l'etudiant : ";
    std::cin >> name;

    std::cout << "Entrez le prenom de l'etudiant : ";
    std::cin >> firstname;

    do {
        std::cout << "Entrez le score de l'etudiant (compris entre 0 et 20) : ";
        std::cin >> score;
        if (score < 0 || score > 20) {
            std::cout << "Le score doit etre compris entre 0 et 20. Veuillez reessayer." << std::endl;
        }
    } while (score < 0 || score > 20);

    Student newStudent = {name, firstname, score};
    students.push_back(newStudent);
}

void deleteStudent(std::vector<Student>& students) {
    std::string name, firstname;
    std::cout << "Entrez le nom de l'etudiant a supprimer : ";
    std::cin >> name;
    std::cout << "Entrez le prenom de l'etudiant a supprimer : ";
    std::cin >> firstname;

    for (auto it = students.begin(); it != students.end(); ++it) {
        if (it->name == name && it->firstname == firstname) {
            students.erase(it);
            break;
        }
    }
}

void printStudents(const std::vector<Student>& students) {
    for (const auto& student : students) {
        std::cout << "Nom : " << student.name << std::endl;
        std::cout << "Prenom : " << student.firstname << std::endl;
        std::cout << "Score : " << student.score << std::endl;
        std::cout << "" << std::endl;
    }
}

void middleScore(const std::vector<Student>& students) {
    double sum = 0;
    for (const auto& student : students) {
        sum += student.score;
    }
    double middle = sum / students.size();
    std::cout << "La moyenne de la classe est de : " << middle << std::endl;
}


int main() {
    std::vector<Student> studentList;
    
    char addAnother;
    while (true) {
        std::cout << "" << std::endl;
        std::cout << "Voulez-vous ajouter un etudiant ? tapez o : " << std::endl;
        std::cout << "Voulez-vous supprimer un etudiant ? tapez d : " << std::endl;
        std::cout << "Voulez-vous afficher la liste des etudiants ? tapez l : " << std::endl;
        std::cout << "Voulez-vous la moyenne de la classe? tapez m" << std::endl;
        std::cout << "Voulez-vous quitter ? tapez q : " << std::endl;
        
        std::cin >> addAnother;

        if (addAnother == 'o' || addAnother == 'O') {
            addNotes(studentList);
        } else if (addAnother == 'd' || addAnother == 'D') {
            deleteStudent(studentList);
        } else if (addAnother == 'l' || addAnother == 'L') {
            printStudents(studentList);
        } else if (addAnother == 'm' || addAnother == 'M') {
            middleScore(studentList);
        } else if (addAnother == 'q' || addAnother == 'Q') {
            break;
        } else {
            std::cout << "Entrée non valide. Veuillez reessayer." << std::endl;
        }
    }

    return 0;
}
