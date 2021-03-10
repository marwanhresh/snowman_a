#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;



TEST_CASE("HAT") {

        CHECK(snowman(11111111) == string("       \n === \n (.,.) \n<( : )>\n ( : ) \n")); 
	    CHECK(snowman(21111111) == string("       \n ..... \n (.,.) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(31111111) == string("       \n /_\\n (.,.) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(41111111) == string("       \n (*)\n (.,.) \n<( : )>\n ( : ) \n")); 
}

TEST_CASE("NOSE") {

//NOSE
        CHECK(snowman(12111111) == string("       \n === \n (...) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(13111111) == string("       \n === \n (._.) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(11111111) == string("       \n === \n (. .) \n<( : )>\n ( : ) \n")); 
}

TEST_CASE("LEFT EYE") {

//LEFT EYE

        CHECK(snowman(11211111) == string("       \n === \n (o,.) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(11311111) == string("       \n === \n (O,.) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(11411111) == string("       \n === \n (-,.) \n<( : )>\n ( : ) \n")); 
}

TEST_CASE(" RIGHT EYE") {

//RIGHT EYE

        CHECK(snowman(11121111) == string("       \n === \n (.,o) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(11131111) == string("       \n === \n (.,O) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(11141111) == string("       \n === \n (.,-) \n<( : )>\n ( : ) \n")); 
}

TEST_CASE(" LEFT ARM") {

//LEFT ARM

        CHECK(snowman(11112111) == string("       \n === \n (.,.) \n\( : )>\n ( : ) \n")); 
        CHECK(snowman(11113111) == string("       \n === \n (.,.) \n/( : )>\n ( : ) \n")); 
        CHECK(snowman(11114111) == string("       \n === \n (.,.) \n( : )>\n ( : ) \n")); 
}

TEST_CASE(" RIGhT ARM ") {


//RIGhT ARM 

        CHECK(snowman(11111211) == string("       \n === \n (.,.) \n<( : )/\n ( : ) \n")); 
        CHECK(snowman(11111311) == string("       \n === \n (.,.) \n<( : )\\n ( : ) \n")); 
        CHECK(snowman(11111411) == string("       \n === \n (.,.) \n<( : )\n ( : ) \n")); 
}

TEST_CASE("TORSO") {

//TORSO

        CHECK(snowman(11111121) == string("       \n === \n (.,.) \n<(] [)>\n ( : ) \n")); 
        CHECK(snowman(11111131) == string("       \n === \n (.,.) \n<(> <)>\n ( : ) \n")); 
        CHECK(snowman(11111141) == string("       \n === \n (.,.) \n<(   )>\n ( : ) \n")); 
}

TEST_CASE("BASE") {

//BASE

        CHECK(snowman(11111112) == string("       \n === \n (.,.) \n<( : )>\n (\" \") \n")); 
        CHECK(snowman(11111113) == string("       \n === \n (.,.) \n<(   )>\n (_) \n")); 
        CHECK(snowman(11111114) == string("       \n === \n (.,.) \n<(   )>\n (   ) \n")); 
}







TEST_CASE("Good snowman code") {

        CHECK((snowman(11114411)) == ("===\n(.,.)\n( : )\n( : )"));
        CHECK(snowman(11111111) == string("       \n === \n (.,.) \n<( : )>\n ( : ) \n")); 
        CHECK(snowman(22222222) == string("  _  \n ..... \n\\(o.o)/\n (] [) \n (\" \") \n")); 
        CHECK(snowman(33333333) == string("   _   \n  /\\ \n (O_O) \n/(> <)\\\n (__) \n")); 
        CHECK(snowman(44444444) == string("  _  \n (*) \n (- -) \n (   ) \n (   ) \n")); 
        CHECK(snowman(12341111) == string("      \n ===\n (O.-) \n<( : )>\n ( : )"));
        CHECK(snowman(33333433) == string("   _  \n  /\\ \n (O_O) \n/(> <) \n (__)"));
        CHECK(snowman(44123211) == string("  _  \n (*) \n (. o)/\n/( : ) \n ( : ) \n")); 
        CHECK(snowman(23332214) == string("  _  \n ..... \n\\(O_O)/\n ( : ) \n (   ) \n")); 
        CHECK(snowman(12222212) == string("       \n === \n\\(o.o)/\n ( : ) \n (\" \") \n")); 
        CHECK(snowman(31241321) == string("   _   \n  /_\\ \n (o,-) \n<(] [)\\\n ( : ) \n")); 
        CHECK(snowman(42312222) == string("  _ \n (*)\n\\(O..)/\n (] [) \n (\" \")"));
        CHECK(snowman(43312222) == string("  _ \n (*)\n\\(O_.)/\n (] [) \n (\" \")"));
        CHECK(snowman(13412143) == string("       \n === \n\\(-.) \n (   )>\n (__) \n")); 
        CHECK(snowman(34211342) == string("   _   \n  /_\\ \n (o .) \n<(   )\\\n (\" \") \n")); 
        CHECK(snowman(24114324) == string("  _  \n ..... \n (. .) \n (] [)\\\n (   ) \n")); 
        CHECK(snowman(41124131) == string("  _  \n (*) \n (.,o) \n (> <)>\n ( : ) \n")); 
        CHECK(snowman(21114411) == string("  _ \n .....\n (.,.) \n ( : ) \n ( : )"));
        CHECK(snowman(12311111) == string("      \n ===\n (O..) \n<( : )>\n ( : )"));
        CHECK(snowman(11114111) == string("      \n ===\n (.,.) \n ( : )>\n ( : )"));
        CHECK(snowman(34344122) == string("   _   \n  /_\\ \n (O -) \n (] [)>\n (\" \") \n")); 
        CHECK(snowman(14224132) == string("       \n === \n (o o) \n (> <)>\n (\" \") \n")); 
        CHECK(snowman(44414234) == string("  _  \n (*) \n (- .)/\n (> <) \n (   ) \n")); 
        CHECK(snowman(12442234) == string("       \n === \n\\(-.-)/\n (> <) \n (   ) \n"));     
        CHECK(snowman(11421344) == string("      \n ===\n (-,o) \n<(   )\\\n (   )"));
        CHECK(snowman(11422344) == string("      \n ===\n (-,o) \n\\(   )\\\n (   )"));
        CHECK(snowman(43312222) == string("  _ \n (*)\n\\(O_.)/\n (] [) \n (\" \")"));
        CHECK(snowman(11111122) == string("      \n ===\n (.,.) \n<(] [)>\n (\" \")"));
        CHECK(snowman(11111123) == string("      \n ===\n (.,.) \n<(] [)>\n (_)"));
        CHECK(snowman(42133241) == string("  _  \n (*) \n (..O)/\n/(   ) \n ( : ) \n")); 
        CHECK(snowman(21441133) == string("  _  \n ..... \n (-,-) \n<(> <)>\n (_) \n")); 
        CHECK(snowman(12341111) == string("      \n ===\n (O.-) \n<( : )>\n ( : )"));
        CHECK(snowman(32224223) == string("   _   \n  /\\ \n (o.o)/\n (] [) \n (__) \n"));
        CHECK(snowman(41113422) == string ("  _  \n (*) \n (.,.) \n/(] [) \n (\" \") \n")); 
 


}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555)) ;
    CHECK_THROWS(snowman(4)) ;
    CHECK_THROWS(snowman(0)) ;
    CHECK_THROWS(snowman(12422)); 
    CHECK_THROWS(snowman(124441)); 
    CHECK_THROWS(snowman(12339414)); 
    CHECK_THROWS(snowman(11110541));

}
TEST_CASE ("Valid numbers") {
    CHECK_THROWS(snowman(1111-2333)) ;
    CHECK_THROWS(snowman(-21231221));
    CHECK_THROWS(snowman(-3111244));
    CHECK_THROWS(snowman(-13442244));
     
}
