#include "Node.h"
#include <iostream>
#include <unistd.h>

using namespace std;
int Node::nodeCount=0;
extern int share_memory[5][5];

Node::Node(int ammount){
        this->ammount = ammount;
        processID = ++nodeCount;
        cout<< "Process created = " << processID << endl;
}

int Node::send(int amt){
        try{
            if(0>(this->ammount - amt))
                throw ammount;
            this->ammount = this->ammount - amt;
            cout << "process " << processID << " sending ammount= " << amt << endl;
//            cout<< "sleep= " << sleepVal << endl;
//            sleep(sleepVal);
            this->send_ammount += amt;
            return (amt);
        }
        catch(int ammount){
            cout<< " account dose not have enough balance" << endl;
            return 0;
        }
}

void Node::recieve(int amt){
        cout << "Process " << processID << " got = " << amt << "rs";
        this->ammount = this->ammount + amt;
        this->recieve_ammount = ammount;
        cout << " total = " << this->ammount << endl;

}


int Node::setColor(string color="white")
{
    int sleepVal = (rand()%4+2);
        sleep(sleepVal);
    this->color = color;
    cout << "Process " << processID << "got changed to color = " << color << endl;
    return this->ammount;
}

Node::~Node()
{
    //dtor
}
