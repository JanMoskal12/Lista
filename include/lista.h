#ifndef LISTA_H
#define LISTA_H

using namespace std;

template <class T>
class lista
{
    public:
        lista(){}
        virtual ~lista(){}
        class iterator;
        void push_back(const T& )
        {

        }
        iterator erase(iterator)
        {

        }
        iterator begin() const
        {

        }
        iterator end() const
        {

        }

    private:
        iterator __front, __back;

};


template <class T>
class lista<T> :: iterator
{
    public:
        friend class lista<T>;
        lista<T> :: iterator & operator++()
        {

        }
        bool operator!=(iterator)
        {

        }

        T & operator*(){}

    private:
        class elem_listy;
        elem_listy * __p = nullptr;

};


template <class T>
class lista<T> :: iterator :: elem_listy
{
public:
    T v;
    iterator next, prev;
};

#endif // LISTA_H
