#include "channel.h"
#include <iostream>
#include <unistd.h>


using namespace std;

channel::channel()
{
    //ctor
}

channel::~channel()
{
    //dtor
}

int channel::update(int amm, int i, int j){

        share_memory[i][j]=amm;
//        cout << "channel " << i << j << "= " << amm << " updated" << endl;
        int sleepVal = (rand()%4+2);
        channel_array[i][j] += amm;
        sleep(sleepVal);

        return amm;
}
int channel::clear_ammount(int i, int j){

        share_memory[i][j]=0;
        return 0;
}
