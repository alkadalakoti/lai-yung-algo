#ifndef CHANNEL_H
#define CHANNEL_H

extern int share_memory[5][5];
extern int channel_array[5][5];

class channel
{
    public:
        channel();
        virtual ~channel();
        int update(int amm, int i, int j);
        int clear_ammount(int i, int j);


    protected:

    private:
};

#endif // CHANNEL_H
