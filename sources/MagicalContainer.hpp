#pragma once
#include <vector>
#include <cstddef>
using namespace std;

 namespace ariel 
 {
     class MagicalContainer 
     {
     private:
         vector<int> a;
         vector<int> b;
         vector<int> c;
     public:
         MagicalContainer() = default;
         ~MagicalContainer() = default;
         MagicalContainer(const MagicalContainer &) = default;
         MagicalContainer(MagicalContainer &&) = default;
         MagicalContainer &operator=(MagicalContainer &&) = default;
         MagicalContainer &operator=(const MagicalContainer &) = default;
         void addElement(int);
         void removeElement(int);
         static bool isPrime(int);
         size_t size() const;

         class AscendingIterator 
         {
             const MagicalContainer &container;
         public:
             explicit AscendingIterator(MagicalContainer &);
             AscendingIterator(const AscendingIterator &);
             AscendingIterator(AscendingIterator &&) = default;
             AscendingIterator &operator=(const AscendingIterator &);
             ~AscendingIterator() = default;
             bool operator==(const AscendingIterator &) const;
             bool operator!=(const AscendingIterator &) const;
             bool operator>(const AscendingIterator &) const;
             bool operator<(const AscendingIterator &) const;
             AscendingIterator &operator++();
             int operator*();
             AscendingIterator &begin();
             AscendingIterator &end();
         };

         class SideCrossIterator 
         {
             const MagicalContainer &container;
         public:
             explicit SideCrossIterator(MagicalContainer &container);
             SideCrossIterator(const SideCrossIterator &);
             SideCrossIterator(SideCrossIterator &&) = default;
             SideCrossIterator &operator=(const SideCrossIterator &);
             ~SideCrossIterator() = default;
             bool operator==(const SideCrossIterator &) const;
             bool operator!=(const SideCrossIterator &) const;
             bool operator>(const SideCrossIterator &) const;
             bool operator<(const SideCrossIterator &) const;
             SideCrossIterator &operator++();
             int operator*();
             SideCrossIterator &begin();
             SideCrossIterator &end();
         };

         class PrimeIterator 
         {
             const MagicalContainer &container;
         public:
             explicit PrimeIterator(MagicalContainer &);
             PrimeIterator(const PrimeIterator &);
             PrimeIterator(PrimeIterator &&) = default;
             PrimeIterator &operator=(const PrimeIterator &);
             ~PrimeIterator() = default;
             bool operator==(const PrimeIterator &) const;
             bool operator!=(const PrimeIterator &) const;
             bool operator>(const PrimeIterator &) const;
             bool operator<(const PrimeIterator &) const;
             PrimeIterator &operator++();
             int operator*();
             PrimeIterator &begin();
             PrimeIterator &end();
         };

     };
 }