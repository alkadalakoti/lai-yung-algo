#include "Marker.h"
#include <iostream>
#include <unistd.h>
#include <iostream>
#include "Node.h"

using namespace std;
extern int share_memory[5][5];
extern Node process[5];


Marker::Marker()
{
    //ctor
}

Marker::~Marker()
{
    //dtor
}

void Marker::markerProcess()
{
    mark_add = 0;
    while(true){

       for(int i=0;i<5;i++)
       {
           int j = process[i].setColor("red");
           mark_add += j;
           cout << "marker val = " << mark_add << endl;
       }
       for (int i=0;i<5;i++)
       {
           for(int j=0;j<5;j++)
           {
               mark_add += share_memory[i][j];
           }
       }
       cout << "after marker send and receive ammount = " << mark_add << endl;
        int sleepVal = (rand()%4+2);
        sleep(sleepVal);
    }
}
