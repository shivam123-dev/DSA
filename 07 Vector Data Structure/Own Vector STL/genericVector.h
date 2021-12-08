template <typename T>
class Vector
{
    int cs;
    int ms;
    T *arr;

public:
    Vector(int max_size = 1)
    {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }
    void push_back(T data)
    {
        if (cs == ms)
        {
            T *oldArr = arr;
            ms = 2 * ms;
            arr = new T[ms];
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
    bool isEmpty() const
    {
        return cs == 0;
    }
    int size() const
    {
        return cs;
    }
    int capacity() const
    {
        return ms;
    }
    T at(int i) const
    {
        return arr[i];
    }
    T operator[](int i) const
    {
        return arr[i];
    }
    T front() const
    {
        return arr[0];
    }
    T back() const
    {
        return arr[cs - 1];
    }
};