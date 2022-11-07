#include <iostream>
#include <cstring>
#include <string>
#include<linked.h>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
  linked list;
  string line, check, append;
  bool flag = true;
  char decision;


  cout << "Enter EDIT to begin the program" << endl;
  getline(cin, line);
  check = line.substr(0,4);


  if(check == "EDIT")
    {
        list.SpecialF();


    do{

    cout << "<" << list.get_counter();
    getline(cin,line);


    string check_string = line.substr(0,6);
    char letter = check_string[0];
    char numb = check_string[2];
    char numb2 = check_string[4];
    int n_conv = numb - '0';
    int n_conv2 = atoi(&(numb2));


    if(n_conv > 0 && n_conv <= list.get_counter() && n_conv2 >= 0 && n_conv2 <= list.get_counter()){
        list.set_num(n_conv);
        list.set_num2(n_conv2);

    }

    else{
        list.set_num(0);
        list.set_num2(0);

    }






            switch(letter) {

                    case 'I':
                            list.insert_position();
                            break;

                    case 'D':
                            list.DeleteNode();
                            break;

                    case 'E':
                            list.node_save();
                            flag = false;
                            cout << "check out your code folder for the text saved" << endl;
                            break;

                    case 'A':
                            append = line.substr(1,line.size());
                            list.set_addLine(append);
                            break;
                    case 'L':
                            list.node_print();

                            break;

                    default:
                         list.create_node(line);
            }
    }while(flag);

}
    else
        cout << "you did not write 'EDIT' right instead you wrote " << check << endl;


    return 0;
}










