/**
 * @file
 * @brief  Implementation of ArrayList
 * @author  Gary Watson <garywatzn@gmail.com>
 * @version  1.0
 */

#include "ArrayList.h"
#include <iostream>

/**
 * Constructor that sets initial internal size and array to default
 */
ArrayList::ArrayList()
{
    int initLength = 20;
    m_arrLength = initLength;
    arr = new int[initLength];
    m_size = 0;
}

/**
 * Constructor that sets initial internal size and array to user specified value
 */
ArrayList::ArrayList(int initLength) : m_arrLength(initLength)
{
    arr = new int[initLength];
    m_size = 0;
}

/**
 * Destructor that cleans up memory of internal array
 */
ArrayList::~ArrayList()
{
    delete[] arr;
}

/**
 * Private helper method that resizes internal array when list gets too big. Size doubles by default
 */
void ArrayList::resize()
{

}

/**
 * Private helper method that checks index is in [0, m_size)
 * @return bool that is true if valid, false if not
 */
bool ArrayList::checkIndex(int i)
{
    return ( ((i >= 0) && (i < m_size)) ? true : false );
}

/**
 * Returns size of ArrayList
 * @return Number of elements in ArrayList
 */
int ArrayList::size()
{
    return m_size;
}

/**
 * Returns element at an index
 * @param i Index being retrieved
 * @return Element at index i
 */
int ArrayList::get(int i)
{
    if( !checkIndex(i) )
    {
        std::cerr << "Index out of bounds" << std::endl;
        return NULL;
    } else {
        return arr[i];
    }
}

bool ArrayList::set(int i, int x)
{
    if( !checkIndex(i) )
    {
        std::cerr << "Index out of bounds" << std::endl;
        return false;
    }

}

bool ArrayList::add(int i, int x)
{

}

bool ArrayList::remove (int i)
{

}