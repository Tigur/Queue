//
// Created by resolution on 22.03.17.
//
#pragma once
#ifndef QUEUE_LIST_H
#define QUEUE_LIST_H
#include"cell.h"

using namespace std;

template <class type>
class List
{
public:
    cell <type> head;
    cell <type> tail;


    cell <type> * ptr;

    int size=0;

    List()
    {
        head.next=&tail;
        tail.next=&head;
    }


    bool insert()
    {

        type value;
        int position;

        if(size==0)
        {
            (*this).push();

            return true;
        }


        cout << "enter value : "<< endl;
        cin >> value;
        cout << "enter position where the record should be placed : " << endl;
        cin >> position ;




        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the List !"<< endl;

            return false;
        }

        cell <type> * ptr1= &head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<position;++i)
        {
            ptr1=(*ptr1).next;
        }

        tmp=new cell <type>;
        (*tmp).value=value;

        (*tmp).next=(*ptr1).next;
        (*ptr1).next=tmp;

        size ++;

        return true;
    }

    bool del() // możliwy seg "kasowanie nizaalokowane pamieci"
    {

        int position;

        cout << "enter position that should be erased: " << endl;
        cin >> position ;

        if (position>size)
        {
            cerr<< "There is no " << position << ". element in the List !" << endl;

            return false;
        }



        cell <type> * ptr2=&head;
        cell <type> * tmp = nullptr;

        for (int i=1;i<position;++i)
        {
            ptr2=(*ptr2).next;
        }
        tmp=(*ptr2).next;
        (*ptr2).next=(*(*ptr2).next).next;
        free(tmp);

        size--;

        return true;
    }

    bool delAll() // możliwy seg
    {
        if (size ==0)
        {
            cerr<< "There is not a single element in the List !" << endl;

            return false;
        }

        cell <type> * tmp;

        for( int i=0;i<size;i++)
        {
            tmp=head.next;
            head.next=(*tmp).next;
            free(tmp);
            size=0;
        }


    }

    void push()
    {


        type value;

        cout << "enter value of element :" << endl;
        cin >> value;

        cell <type> * tmp;
        tmp= new cell <type> ;
        /*if (size=0)
        {
            (*tmp).value=value;
            (*tmp).next= &head;
        }*/

        (*tmp).value=value;
        (*tmp).next= head.next;
        head.next=tmp;

       if(size==0)
       {
           tail.next=head.next;
       }




        size++;


    }


    type pull()
    {
        cell <type>*tmp=tail.next;
        cell <type> pulled;
        pulled.value=(*tmp).value;

        tmp=head.next;
        for (int i=1;i<size-1;++i)
        {
            tmp=(*tmp).next;
        }
        if(size==1)
        {
            tail.next=&head;
            free(head.next);
            return pulled.value;
        }
        tail.next=tmp;
       free( (*tmp).next);
        (*tmp).next=&tail;

        return pulled.value;
    }

    void show()
    {
        cell <type> * tmp = head.next;

        for (int i=1;i<=size;++i)
        {
            cout << tmp->value << endl;
            tmp=(*tmp).next;

        }
    }








};


#endif //QUEUE_LIST_H
