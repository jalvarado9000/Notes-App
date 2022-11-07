#include "linked.h"
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;
linked::linked()
{
    head = nullptr;
    tail = nullptr;
    curr = nullptr;
    tem = nullptr;
    counter = 1;
    string add = " ";
}

void linked::create_node(string val)
{

node *temp = new node;
    temp->data = val;
    temp->next = NULL;

    if(head == NULL){
        head = temp;
        tail = temp;
        counter++;
        }

    else{
        tail->next = temp;
        tail = temp;
        counter++;
        }
}

   void linked::node_print(){

    curr = head;
    counter =1;

   while(curr!=nullptr){

    if(add == " "){
     cout << "<"<<counter++ << " " <<curr->data<< endl;
     curr = curr->next;
    }

   else{
        cout << "<"<<counter++ << add << " " <<curr->data<< endl;
        curr = curr->next;
}
     }
   }





   void linked::node_save(){

    fstream file;
    file.open("linked.txt", ios::out);
    curr = head;
    counter =1;

   while(curr!=nullptr){

    if(add == " "){
     file << "<"<<counter++ << " " << curr->data << endl;
     curr = curr->next;
    }

   else{
        file << "<"<<counter++ << add << " " << curr->data << endl;
        curr = curr->next;
}
     }
    file.close();
   }


void linked:: insert_position(){

if(n == 0 && n2 == 0){
curr = head;
int i,c;

for(i = 1,c = (counter -2); i < c; i++)
 curr = curr->next;

counter = (counter-1);
tail = curr;

}

else{
curr = head;
counter = 1;

for(int i = 1; i < (n-1); i++){
 curr = curr->next;
 counter++;
}

tail = curr;
counter++;
}

}

void linked::DeleteNode()
{

bool finished = true;

if (n2 == 0 && n > 0){

node* delptr = nullptr;
tem = head;
curr = head;

for (int i = 1; i < n; i++){
    tem = curr;
    curr = curr->next;
}

    if(curr == nullptr){}

    else{
        delptr = curr;
        curr = curr->next;
        tem->next = curr;

        if(delptr == head){
                head = head->next;
                tem = nullptr;
            }

                delete delptr;
        }
}

else if(n2 > n && n2 <= counter){

    int toDelete = n2;

    do{

    node* delptr = nullptr;
    tem = head;
    curr = head;

    for (int i = 1; i < toDelete; i++){
    tem = curr;
    curr = curr->next;
}

    if(curr == nullptr){}

    else{
        delptr = curr;
        curr = curr->next;
        tem->next = curr;
        if(delptr == head){
                head = head->next;
                tem = nullptr;
        }
                delete delptr;
        }

    if(toDelete == n)
        finished = false;

        toDelete--;
    }while(finished);
}

else{

node* delptr = nullptr;
tem = head;
curr = head;

for (int i = 1; i < (counter-1); i++){
    tem = curr;
    curr = curr->next;
}

    if(curr == nullptr){}

    else{
        delptr = curr;
        curr = curr->next;
        tem->next = curr;
        if(delptr == head){
                head = head->next;
                tem = nullptr;
            }
                delete delptr;
            }
        }
}


void linked:: SpecialF()
{
    cout <<"/*********************************************************************************************************************" << endl;
    cout << "Special comands are:" << endl;
    cout <<"if you press E at the start of the line it will exit the program and save what you have written." << endl;
    cout <<"if you press I at the start of the line space and a number it will take you back to that line number." << endl;
    cout <<"if you press I at the start and enter it will take you back to the previous line." << endl;
    cout <<"if you press D at the start of the line space and a number it will delete the number of line entered." << endl;
    cout <<"if you press D at the start of the line space and a number space and a number it will delete num1-num2 line entered." << endl;
    cout <<"if you press D at the start and enter it will delete the current line." << endl;
    cout <<"if you press A it will add text the previous line with the new next enterd." << endl;
    cout <<"if you press L it will print the list." << endl;
    cout << "*********************************************************************************************************************/"<< endl;
}


void linked:: set_num(int num){n = num;}
int linked:: get_num(){return n;}
void linked:: set_num2(int num2){n2 = num2;}
int linked:: get_num2(){return n2;}
int linked::get_counter(){return counter;}
void linked :: set_addLine(string a){add = a;}
string linked :: get_addLine(){return add;}
