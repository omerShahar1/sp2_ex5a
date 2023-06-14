#include <cstddef>
#include "MagicalContainer.hpp"
using namespace std;

namespace ariel 
{
    void MagicalContainer::addElement(int temp) 
    {
    }

    void MagicalContainer::removeElement(int temp) 
    {
    }

    bool MagicalContainer::isPrime(int temp) 
    {
        return false;
    }

    size_t MagicalContainer::size() const 
    {
        return 0;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &temp) : container(temp) 
    {
    }


    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &temp) : container(temp.container)
    {
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &temp) 
    {
        return *this;
    }

    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &temp) const 
    {
        return false;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++() 
    {
        return *this;
    }

    int MagicalContainer::AscendingIterator::operator*() 
    {
        return 0;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin() 
    {
        return *this;
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end() 
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &temp) : container(temp) 
    {
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &temp) : container(temp.container) 
    {
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &temp) 
    {
        return *this;
    }

    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &temp) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &temp) const 
    {
        return false;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++() 
    {
        return *this;
    }

    int MagicalContainer::SideCrossIterator::operator*() 
    {
        return 0;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin() 
    {
        return *this;
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end() 
    {
        return *this;
    }

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &temp) : container(temp) 
    {
    }

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &temp) : container(temp.container) 
    {
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &temp) 
    {
        return *this;
    }

    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &temp) const 
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &temp) const 
    {
        return false;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++() 
    {
        return *this;
    }

    int MagicalContainer::PrimeIterator::operator*() 
    {
        return 0;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin() 
    {
        return *this;
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end() 
    {
        return *this;
    }

}