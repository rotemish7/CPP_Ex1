//
// Created by rotem levy on 26/03/2020.
//
/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 *
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


TEST_CASE("Test replacement of p and b")
{
string text = "xxx happy yyy";
CHECK(find(text, "happy") == string("happy"));
CHECK(find(text, "habby") == string("happy"));
CHECK(find(text, "hapby") == string("happy"));
CHECK(find(text, "habpy") == string("happy"));
/* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case")
{
string text = "Happi xxx yyy";
CHECK(find(text, "happi") == string("Happi"));
CHECK(find(text, "Happi") == string("Happi"));
CHECK(find(text, "HAPPI") == string("Happi"));
CHECK(find(text, "HaPpI") == string("Happi"));
/* Add more checks here */
}

TEST_CASE("Test replacement of c and k and q")
{
    string text = "francky chicken";

    CHECK(find(test,"francky") == string("francky"));
    CHECK(find(test,"frankcy") == string("francky"));
    CHECK(find(test,"franCky") == string("francky"));
    CHECK(find(test,"franCKy") == string("francky"));
    CHECK(find(test,"franKcy") == string("francky"));
    CHECK(find(test,"franKCy") == string("francky"));
    CHECK(find(test,"franqcy") == string("francky"));
    CHECK(find(test,"franqky") == string("francky"));
    CHECK(find(test,"franqqy") == string("francky"));
    CHECK(find(test,"franQQy") == string("francky"));
    CHECK(find(test,"franQcy") == string("francky"));
    CHECK(find(test,"franQCy") == string("francky"));
    CHECK(find(test,"franQky") == string("francky"));
    CHECK(find(test,"franQKy") == string("francky"));
    CHECK(find(test,"frankqy") == string("francky"));
    CHECK(find(test,"franKqy") == string("francky"));
    CHECK(find(test,"frankQ") == string("francky"));
    CHECK(find(test,"franKQy") == string("francky"));
    CHECK(find(test,"francqy") == string("francky"));
    CHECK(find(test,"francQy") == string("francky"));
    CHECK(find(test,"franCQ") == string("francky"));
    CHECK(find(test,"franCqy") == string("francky"));
    CHECK(find(test,"chicken") == string("chicken"));
    CHECK(find(text, "chiccen") == string("chicken"));
    CHECK(find(text, "chicken") == string("chicken"));
    CHECK(find(text, "chikcen") == string("chicken"));
    CHECK(find(text, "chikken") == string("chicken"));
    CHECK(find(text, "chicqen") == string("chicken"));
    CHECK(find(text, "chiqcen") == string("chicken"));
    CHECK(find(text, "chiqqen") == string("chicken"));
    CHECK(find(text, "khiccen") == string("chicken"));
    CHECK(find(text, "khicken") == string("chicken"));
    CHECK(find(text, "khikcen") == string("chicken"));
    CHECK(find(text, "khikken") == string("chicken"));
    CHECK(find(text, "khicqen") == string("chicken"));
    CHECK(find(text, "khiqcen") == string("chicken"));
    CHECK(find(text, "khiqqen") == string("chicken"));
    CHECK(find(text, "qhiccen") == string("chicken"));
    CHECK(find(text, "qhicken") == string("chicken"));
    CHECK(find(text, "qhikcen") == string("chicken"));
    CHECK(find(text, "qhikken") == string("chicken"));
    CHECK(find(text, "qhicqen") == string("chicken"));
    CHECK(find(text, "qhiqcen") == string("chicken"));
    CHECK(find(text, "qhiqqen") == string("chicken"));
}

TEST_CASE("Test replacement of s and z")
{
    string text = "zoo animals eats alot";

    CHECK(find(text, "zoo") == string("zoo"));
    CHECK(find(text, "soo") == string("zoo"));
    CHECK(find(text, "Soo") == string("zoo"));
    CHECK(find(text, "animals") == string("animals"));
    CHECK(find(text, "animalz") == string("animals"));
    CHECK(find(text, "animalS") == string("animals"));
    CHECK(find(text, "animalZ") == string("animals"));
    CHECK(find(text, "eats") == string("eats"));
    CHECK(find(text, "eatS") == string("eats"));
    CHECK(find(text, "eatz") == string("eats"));
    CHECK(find(text, "eatZ") == string("eats"));
}

TEST_CASE("Test replacement of d and t")
{
    string text = "dont do that";
    CHECK(find(text, "dont") == string("dont"));
CHECK(find(text, "tond") == string("dont"));
CHECK(find(text, "dond") == string("dont"));
CHECK(find(text, "tont") == string("dont"));
CHECK(find(text, "Dont") == string("dont"));
CHECK(find(text, "donT") == string("dont"));
CHECK(find(text, "tond") == string("dont"));
CHECK(find(text, "Tond") == string("dont"));
CHECK(find(text, "DonD") == string("dont"));
CHECK(find(text, "Tont") == string("dont"));
CHECK(find(text, "TonT") == string("dont"));
CHECK(find(text, "DonD") == string("dont"));
CHECK(find(text, "do") == string("do"));
CHECK(find(text, "to") == string("to"));
CHECK(find(text, "To") == string("to"));
CHECK(find(text, "Do") == string("to"));
CHECK(find(text, "that") == string("that"));
CHECK(find(text, "thad") == string("that"));
CHECK(find(text, "That") == string("that"));
CHECK(find(text, "Thad") == string("that"));
CHECK(find(text, "dhat") == string("that"));
CHECK(find(text, "dhad") == string("that"));
CHECK(find(text, "Dhad") == string("that"));
CHECK(find(text, "DhaD") == string("that"));
CHECK(find(text, "Dhat") == string("that"));
CHECK(find(text, "DhaT") == string("that"));
CHECK(find(text, "ThaT") == string("that"));
}

TEST_CASE("Test replacement of o and u")
{
string text = "the globus go around";
CHECK(find(text, "go") == string("go"));
CHECK(find(text, "gu") == string("go"));
CHECK(find(text, "gO") == string("go"));
CHECK(find(text, "gU") == string("go"));
CHECK(find(text, "globus") == string("globus"));
CHECK(find(text, "globos") == string("globus"));
CHECK(find(text, "glubus") == string("globus"));
CHECK(find(text, "glubos") == string("globus"));
CHECK(find(text, "glObOs") == string("globus"));
CHECK(find(text, "glObos") == string("globus"));
CHECK(find(text, "globOs") == string("globus"));
CHECK(find(text, "glUbus") == string("globus"));
CHECK(find(text, "glUbUs") == string("globus"));
CHECK(find(text, "glUbUs") == string("globus"));
CHECK(find(text, "around") == string("around"));
CHECK(find(text, "aroond") == string("globus"));
CHECK(find(text, "aruond") == string("globus"));
CHECK(find(text, "aruund") == string("globus"));
CHECK(find(text, "arOOnd") == string("globus"));
CHECK(find(text, "arOond") == string("globus"));
CHECK(find(text, "aroOnd") == string("globus"));
CHECK(find(text, "arOund") == string("globus"));
CHECK(find(text, "arOUnd") == string("globus"));
CHECK(find(text, "aruOnd") == string("globus"));
CHECK(find(text, "arUond") == string("globus"));
CHECK(find(text, "arUONd") == string("globus"));
CHECK(find(text, "arUUnd") == string("globus"));
}



/* Add more test cases here */
