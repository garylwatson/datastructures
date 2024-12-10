#pragma once
#ifndef ILIST_H
#define ILIST_H

class IList 
{
    public:
        virtual int size() = 0;
        virtual int get(int i) = 0;
        virtual bool set(int i, int x) = 0;
        virtual bool add(int i, int x) = 0;
        virtual bool remove (int i) = 0;
};
#endif