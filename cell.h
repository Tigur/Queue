//
// Created by resolution on 21.03.17.
//
#pragma once
#ifndef QUEUE_H
#define QUEUE_H

template <class type>
class cell
{
public:

    type value;
    cell * next;

    cell()
    {
        value = 0;
        next = nullptr;

    }

};

#endif //QUEUE_H
