#include "doctest.h"
#include "sources/MagicalContainer.hpp"


    TEST_CASE("") 
    {
        ariel::MagicalContainer container;
        container.addElement(1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(3);
        CHECK_EQ(container.size(), 3);
        container.addElement(4);
        CHECK_EQ(container.size(), 4);
        container.removeElement(1);
        CHECK_EQ(container.size(), 3);
        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(3);
        CHECK_EQ(container.size(), 3);
        container.addElement(4);
        CHECK_EQ(container.size(), 4);
        container.removeElement(1);
        CHECK_EQ(container.size(), 3);
        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(3);
        CHECK_EQ(container.size(), 3);
        container.addElement(4);
        CHECK_EQ(container.size(), 4);
        container.removeElement(1);
        CHECK_EQ(container.size(), 3);
        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(3);
        CHECK_EQ(container.size(), 3);
        container.addElement(4);
        CHECK_EQ(container.size(), 4);
        container.removeElement(1);
        CHECK_EQ(container.size(), 3);
        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(3);
        CHECK_EQ(container.size(), 3);
        container.addElement(4);
        CHECK_EQ(container.size(), 4);
        container.removeElement(1);
        CHECK_EQ(container.size(), 3);
        container.removeElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(1);
        CHECK_EQ(container.size(), 1);
        container.addElement(2);
        CHECK_EQ(container.size(), 2);
        container.addElement(3);
        CHECK_EQ(container.size(), 3);
        container.addElement(4);
        CHECK_EQ(container.size(), 4);
        container.removeElement(1);
        CHECK_EQ(container.size(), 3);
        container.removeElement(2);
        CHECK_EQ(container.size(), 2);


    }

    