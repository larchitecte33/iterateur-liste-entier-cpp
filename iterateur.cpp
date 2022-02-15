#include<iostream>
#include<list>

using namespace std;

int main() {
    int entiers[] = {13, 3, 29, 24, 66};
    list<int> listeEntiers(entiers, entiers + 5);

    list<int>::iterator it;

    cout<<"listeEntiers contient :";

    for(it = listeEntiers.begin() ; it != listeEntiers.end() ; it++) {
        cout<<" "<<*it;
    }

    cout << endl;
}