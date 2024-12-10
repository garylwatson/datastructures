/**
 * @file
 * @brief  Header file for ArrayList
 * @author  Gary Watson <garywatzn@gmail.com>
 * @version  1.0
 */

#pragma once
#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "IList.h"

/**
 * Class that implements List interface using array
 * @author Gary Watson
 */
class ArrayList : public IList
{
    private:
        int m_size;
        int m_arrLength;
        int *arr;
        void resize();
        bool checkIndex(int i);

    public:
        ArrayList();
        ArrayList(int size);
        ~ArrayList();
        int size() override;
        int get(int i) override;
        bool set(int i, int x) override;
        bool add(int i, int x) override;
        bool remove (int i) override;
};
#endif