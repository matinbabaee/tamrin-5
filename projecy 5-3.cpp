#include <iostream>
using namespace std;
int main() {
    char sentence[100];
    int counter=1;
    cout << "benevisid: ";
    gets(sentence);
    for (int i = 0; sentence[i] != NULL; ++i)
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t')
            counter++;
    cout << "tedad kalamat: "<< counter;
    return 0;
}
