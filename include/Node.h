#ifndef NODE_H
#define NODE_H
#include <iostream>


using namespace std;

class Node
{
    public:
        Node(int ammount=1000);
        int send(int ammount);
        void recieve(int ammount);
        virtual ~Node();
        int setColor(string color);
        string color;


    protected:
    private:
        int ammount;
        int processID;
        int send_ammount;
        int recieve_ammount;
        static int nodeCount;
};



#endif // NODE_H
