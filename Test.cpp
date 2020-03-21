//
// Created by avi on 20.3.2020.
// AUTHORS : AVI HAIMOV AND NIV TAL
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>

using namespace std;
bool b=false;

TEST_CASE("Test replacement of p and b and f") {
    string text = "before happy part";
            CHECK(find(text, "habby") == string("happy"));
            CHECK(find(text, "habfy") == string("happy"));
            CHECK(find(text, "habpy") == string("happy"));
            CHECK(find(text, "haffy") == string("happy"));
            CHECK(find(text, "hafby") == string("happy"));
            CHECK(find(text, "hafpy") == string("happy"));
            CHECK(find(text, "happy") == string("happy"));
            CHECK(find(text, "hapfy") == string("happy"));
            CHECK(find(text, "hapby") == string("happy"));
            CHECK(find(text, "part") == string("part"));
            CHECK(find(text, "fart") == string("part"));
            CHECK(find(text, "bart") == string("part"));
            CHECK(find(text, "bebore") == string("before"));
            CHECK(find(text, "before") == string("before"));
            CHECK(find(text, "bepore") == string("before"));
            CHECK(find(text, "fefore") == string("before"));
            CHECK(find(text, "febore") == string("before"));
            CHECK(find(text, "fepore") == string("before"));
            CHECK(find(text, "pepore") == string("before"));
            CHECK(find(text, "pefore") == string("before"));
            CHECK(find(text, "pebore") == string("before"));
}
TEST_CASE("Test replacement of v and w") {
    string text = "oracle vmware is very awful";
            CHECK(find(text, "vmware") == string("vmware"));
            CHECK(find(text, "vmvare") == string("vmware"));
            CHECK(find(text, "wmware") == string("vmware"));
            CHECK(find(text, "wmvare") == string("vmware"));
            CHECK(find(text, "awful") == string("awful"));
            CHECK(find(text, "avful") == string("awful"));
            CHECK(find(text, "very") == string("very"));
            CHECK(find(text, "wery") == string("very"));
}
TEST_CASE("Test replacement of g and j") {
    string text = "the people are injuring the jungle";
            CHECK(find(text, "injuring") == string("injuring"));
            CHECK(find(text, "jnjuring") == string("injuring"));
            CHECK(find(text, "iniuring") == string("injuring"));
            CHECK(find(text, "jniuring") == string("injuring"));
            CHECK(find(text, "jungle") == string("jungle"));
            CHECK(find(text, "junjle") == string("jungle"));
            CHECK(find(text, "gungle") == string("jungle"));
            CHECK(find(text, "gunjle") == string("jungle"));
}
TEST_CASE("Test replacement of c and k and q") {
    string text = "the chicken is not quicker than the rocket";
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
            CHECK(find(text, "cuiccer") == string("quicker"));
            CHECK(find(text, "cuicker") == string("quicker"));
            CHECK(find(text, "cuikcer") == string("quicker"));
            CHECK(find(text, "cuikker") == string("quicker"));
            CHECK(find(text, "cuicqer") == string("quicker"));
            CHECK(find(text, "cuiqcer") == string("quicker"));
            CHECK(find(text, "cuiqqer") == string("quicker"));
            CHECK(find(text, "kuiccer") == string("quicker"));
            CHECK(find(text, "kuicker") == string("quicker"));
            CHECK(find(text, "kuikcer") == string("quicker"));
            CHECK(find(text, "kuikker") == string("quicker"));
            CHECK(find(text, "kuicqer") == string("quicker"));
            CHECK(find(text, "kuiqcer") == string("quicker"));
            CHECK(find(text, "kuiqqer") == string("quicker"));
            CHECK(find(text, "quiccer") == string("quicker"));
            CHECK(find(text, "quicker") == string("quicker"));
            CHECK(find(text, "quikcer") == string("quicker"));
            CHECK(find(text, "quikker") == string("quicker"));
            CHECK(find(text, "quicqer") == string("quicker"));
            CHECK(find(text, "quiqcer") == string("quicker"));
            CHECK(find(text, "quiqqer") == string("quicker"));
            CHECK(find(text, "roccet") == string("rocket"));
            CHECK(find(text, "rocket") == string("rocket"));
            CHECK(find(text, "rocqet") == string("rocket"));
            CHECK(find(text, "rokket") == string("rocket"));
            CHECK(find(text, "rokcet") == string("rocket"));
            CHECK(find(text, "rocqet") == string("rocket"));
            CHECK(find(text, "roqqet") == string("rocket"));
            CHECK(find(text, "roqcet") == string("rocket"));
            CHECK(find(text, "roqket") == string("rocket"));
}
TEST_CASE("Test replacement of i and y") {
    string text = "impossible xxx happy";
            CHECK(find(text, "happy") == string("happy"));
            CHECK(find(text, "happi") == string("happy"));

            CHECK(find(text, "impossible") == string("impossible"));
            CHECK(find(text, "ympossible") == string("impossible"));
            CHECK(find(text, "ympossyble") == string("impossible"));
    /* Add more checks here */
}
TEST_CASE("Test replacement of o and u") {
    string text = "good xxx understood";
            CHECK(find(text, "understood") == string("understood"));
            CHECK(find(text, "onderstood") == string("understood"));
            CHECK(find(text, "onderstuod") == string("understood"));
            CHECK(find(text, "onderstuud") == string("understood"));

            CHECK(find(text, "good") == string("good"));
            CHECK(find(text, "guod") == string("good"));
            CHECK(find(text, "goud") == string("good"));
            CHECK(find(text, "guud") == string("good"));


}
TEST_CASE("Test replacement of d and t") {
    string text = "good dad xxx understood";
            CHECK(find(text, "understood") == string("understood"));
            CHECK(find(text, "unterstood") == string("understood"));
            CHECK(find(text, "unterstoot") == string("understood"));
            CHECK(find(text, "understoot") == string("understood"));

            CHECK(find(text, "good") == string("good"));
            CHECK(find(text, "goot") == string("good"));

            CHECK(find(text, "tad") == string("dad"));
            CHECK(find(text, "tat") == string("dad"));

}
TEST_CASE("Test replacement of s and z") {
    string text = "sometimes zombies  ";
            CHECK(find(text, "zombies") == string("zombies"));
            CHECK(find(text, "sombies") == string("zombies"));
            CHECK(find(text, "sombiez") == string("zombies"));

            CHECK(find(text, "sometimes") == string("sometimes"));
            CHECK(find(text, "zometimes") == string("sometimes"));
            CHECK(find(text, "sometimez") == string("sometimes"));
            CHECK(find(text, "zometimez") == string("sometimes"));
}
TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi BIRTHDAy ChRiS vormER jUnior because you are student";
            CHECK(find(text, "happi") == string("Happi"));
            CHECK(find(text, "Habpi") == string("Happi"));
            CHECK(find(text, "HAPPI") == string("Happi"));
            CHECK(find(text, "HaPfI") == string("Happi"));
            CHECK(find(text, "birthdaY") == string("BIRTHDAy"));
            CHECK(find(text, "PirThDAY") == string("BIRTHDAy"));
            CHECK(find(text, "bIRTHdAY") == string("BIRTHDAy"));
            CHECK(find(text, "BIRThDaY") == string("BIRTHDAy"));
            CHECK(find(text, "qhriS") == string("ChRiS"));
            CHECK(find(text, "cHrIs") == string("ChRiS"));
            CHECK(find(text, "HaPpI") == string("ChRiS"));
            CHECK(find(text, "VORMer") == string("vormER"));
            CHECK(find(text, "wOrMeR") == string("vormER"));
            CHECK(find(text, "gUniOR") == string("jUnior"));

            CHECK(find(text, "Becaose") == string("because"));
            CHECK(find(text, "BECAUSE") == string("because"));
            CHECK(find(text, "BecauSE") == string("because"));
            CHECK(find(text, "STuDENt") == string("student"));
            CHECK(find(text, "zTUdent") == string("student"));
            CHECK(find(text, "BECAUzE") == string("because"));
            CHECK(find(text, "STUDENT") == string("student"));
            CHECK(find(text, "stuDeNT") == string("student"));
            CHECK(find(text, "stodent") == string("student"));
}
TEST_CASE("Test checking where you should throw exception of b and p and b"){
    b=false;
    try{
        string text = "before happy part";
        find(text, "habdy");
    }
    catch(exception e){
        b=true;
    }
    CHECK(b);
    b=false;
    try{
        string text = "before happy part";
        find(text, "faRo");
    }
    catch(exception e){
        b=true;
    }
            CHECK(b);
    b=false;
}
TEST_CASE("Test checking where you should throw exception of v and w") {
    b = false;
    try {
        string text = "vacation";
        find(text, "waCadioH");
    }
    catch (exception e) {
        b = true;
    }
            CHECK(b);
}
TEST_CASE("Test checking where you should throw exception of g and j") {
    b = false;
    try {
        string text = "jogging. all day jogging";
        find(text, "joggin.g");
    }
    catch (exception e) {
        b = true;
    }
    CHECK(b);
}
TEST_CASE("Test checking where you should throw exception of c and k and q") {
    b = false;
    try {
        string text = "command and conquer";
        find(text, "qUncOez");
    }
    catch (exception e) {
        b = true;
    }
    CHECK(b);
    b = false;
    try {
        string text = "knight kingdom";
        find(text, "qnigho");
    }
    catch (exception e) {
        b = true;
    }
    CHECK(b);
}
TEST_CASE("Test checking where you should throw exception of s and z") {
    b = false;
    try {
        string text = "Shazam";
        find(text, "sHaZaf");
    }
    catch (exception e) {
        b = true;
    }
            CHECK(b);
}
TEST_CASE("Test checking where you should throw exception of d and t") {
    b = false;
    try {
        string text = "Call of DutY : Warzone";
        find(text, "dujY");
    }
    catch (exception e) {
        b = true;
    }
            CHECK(b);
}
TEST_CASE("Test checking where you should throw exception of o and u") {
    b = false;
    try {
        string text = "hummu, s";
        find(text, "HomMos");
    }
    catch (exception e) {
        b = true;
    }
            CHECK(b);
}
TEST_CASE("Test checking where you should throw exception of i and y") {
    b = false;
    try {
        string text = "bykewai all the way";
        find(text, "BikEwat");
    }
    catch (exception e) {
        b = true;
    }
            CHECK(b);
}
