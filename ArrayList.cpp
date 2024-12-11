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
    arr = new int[initLength]();
    m_size = m_arrLength;
}

/**
 * Constructor that sets initial internal size and array to user specified value
 */
ArrayList::ArrayList(int initLength)
{
    m_arrLength = initLength;
    arr = new int[m_arrLength]();
    m_size = m_arrLength;
}

/**
 * Destructor that cleans up memory of internal array
 */
ArrayList::~ArrayList()
{
    delete[] arr;
}

/**
 *  Private helper method that prints array
 */
void ArrayList::print()
{
    for(int i = 0; i < m_size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

/**
 * Private helper method that resizes internal array when list gets too big. Size doubles by default
 */
void ArrayList::resize()
{
    int *newArr = new int[m_arrLength * 2];

    for(int i = 0; i < m_size; i++)
    {
        newArr[i] = arr[i];
    }

    delete[] arr;
    arr = newArr;
}

/**
 * Private helper method that checks index is in [0, m_size)
 * @return bool that is true if valid, false if not
 */
bool ArrayList::checkIndex(int i)
{
    if(i < 0)
    {
        return false;
    } else if (i >= m_size) {
        return false;
    } else {
        return true;
    }
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
        return (int)NULL;
    } else {
        return arr[i];
    }
}

/**
 * Sets value at index i to be x
 * @param i Target index to be changed
 * @param x New value to be placed at i
 * @return bool representing succes or failure
 */
bool ArrayList::set(int i, int x)
{
    if( !(checkIndex(i)) )
    {
        std::cerr << "Index out of bounds" << std::endl;
        return false;
    }

    arr[i] = x;
    return true;
}

bool ArrayList::add(int i, int x)
{
    // Do we need to resize
    if( m_size >= (m_arrLength - 1))
    {
        resize();
    }

    // Is it a valid index
    if( i < 0)
    {
        std::cerr << "Index out of bounds" << std::endl;
        return false;
    } 

    // Start at the end and shift everything right
    for(int x = m_size ; x > i; x--)
    {
        arr[x] = arr[x - 1];
    }

    // Increase size
    m_size++;

    // Add element at i
    arr[i] = x;

    return true;
}

bool ArrayList::remove (int i)
{
    return true;
}