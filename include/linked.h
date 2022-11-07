#ifndef LINKED_H
#define LINKED_H
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;
class linked
{

    private:
        struct node
        {
        string data;
        node* next;

        };

        node* curr;
        node* head;
        node* tail;
        node* tem;
        int counter, n, n2;
        string add;



    public:

        linked();
        void create_node(string val);
        void insert_position();
        int get_counter();
        void node_print();
        void node_save();
        void set_num(int num);
        int get_num();
        void set_num2(int num2);
        int get_num2();
        void DeleteNode();
        void SpecialF();
        void set_addLine(string add);
        string get_addLine();
        void deLast();

};

#endif // LINKED_H
