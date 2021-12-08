class Vector
{
private:
    int cs;
    int ms;
    int *arr;

public:
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }
    void push_back(int data)
    {
        if (cs == ms)
        {
            int *oldArr = arr;
            ms = 2 * ms;
            arr = new int[ms];
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
        }
        arr[cs] = data;
        cs++;
    }
    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }
    int size() const
    {
        return cs;
    }
    int capacity() const
    {
        return ms;
    }
    bool isEmpty() const
    {
        return cs == 0;
    }
    int at(int i) const
    {
        return arr[i];
    }
    int operator[](int i) const
    {
        return arr[i];
    }
    int front() const
    {
        return arr[0];
    }
    int back() const
    {
        return arr[cs-1];
    }
};