#include<iostream>
using namespace std;

int compress(vector <char>& chars){
    //Step 1: Initialization
    int n=chars.size();
    int index=0;

    //Step 2: Traverse and count repeats
    for(int i=0;i<n;){
        char current_char=chars[i];
        int count=0;

        while(i<n && chars[i]==current_char ){
            i++;
            count++;
        }

        chars[index++]=current_char;

        if(count>1){
            string count_str=to_string(count);
            for(char c: count_str){
                char[index++]=c;
            }
        }
    }
    return index;
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c', 'c'};
    int new_length = compress(chars);
    cout << "New length: " << new_length << endl;
    cout << "Compressed chars: ";
    for (int i = 0; i < new_length; ++i) {
        cout << chars[i];
    }
    cout << endl;
    return 0;
}
