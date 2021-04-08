#ifndef TIMEFRAME_H
#define TIMEFRAME_H


class timeFrame
{
    public:
        timeFrame();
        virtual ~timeFrame();

        unsigned int GetCounter() { return m_Counter; }
        void Oprator();

    protected:

    private:
        unsigned int m_Counter;
        unsigned int s_counter;
};

#endif // TIMEFRAME_H
