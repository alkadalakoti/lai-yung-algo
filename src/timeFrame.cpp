#include "timeFrame.h"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <iomanip>
#include <iostream>

using namespace std;

extern int share_memory[5][5];

timeFrame::timeFrame()
{
    //ctor
}

void timeFrame::Oprator() {
    m_Counter = 0;
    s_counter = 1;
    while(5){
//        cout << setfill(' ') << setw(75) << " --------------------------\n";
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(share_memory[i][j]){
//                    cout << setfill(' ') << setw(50) << "time = " << m_Counter << ":" << s_counter;
//                    cout << setfill(' ') << " channel P"<< i << j << "= " << share_memory[i][j] << endl;
                }
            }
        }
        cout << setfill(' ') << setw(75) << " --------------------------\n";
        sleep(1);
        s_counter++;
        if(s_counter==60){
            m_Counter++;
            s_counter=0;
        }
    }

}

timeFrame::~timeFrame()

{
    //dtor
}
