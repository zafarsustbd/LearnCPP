#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    public:
        Birthday();
        ~Birthday();
        void SetDate(int nDay, int nMonth, int nYear);
    protected:
    private:
        int m_nDay;
        int m_nMonth;
        int m_nYear;
};

#endif // BIRTHDAY_H
