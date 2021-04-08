#include <iostream>
#include <thread>
#include <time.h>
//#include <windows.h>
#include <stdlib.h>
#include <unistd.h>
#include "timeFrame.h"
#include "Node.h"
#include "timeFrame.h"
#include "channel.h"
#include "Marker.h"

using namespace std;

int number_process = 5;
int channel_array[5][5];

int share_memory[5][5];
Node process[5];


int main()
{
    srand(time(NULL));
    timeFrame *time = new timeFrame();
    channel ch;
//    thread th(&timeFrame::Oprator, timeFrame());
//    int rand_proc = (rand()%5+1);
//    cout << rand_proc <<endl;
    thread th2(&Marker::markerProcess, Marker());
//    th.join();
    for (auto i=0;i<5;i++){
        int rec_process = (i+2)%5;
        int amm = ch.update(process[i].send(100), i, rec_process);
        process[rec_process].recieve(amm);
        ch.clear_ammount(i, rec_process);
    }
//    thread th2(&Marker::markerProcess, Marker());

//    delete(time);
    return 0;
}
