/** Basic Info **

Copyright: 2019 Johnny Hendriks

Author : Johnny Hendriks
Year   : 2019
Project: VSTestAdapter for Catch2
Licence: MIT

Notes: None

** Basic Info **/

/************
 * Includes *
 ************/

// Catch2
#include <catch.hpp>


/**************
 * Start code *
 **************/

namespace CatchDiscover
{

    TEST_CASE( "NotDefaultDiscoverable. a123456789b123456789c123456789d123456789e123456789&  f123456789b123456789g123456789d123456789h123456789& i123456789b123456789j123456789k123456789l123456789", "[Discover]" )
    {
        CHECK( true );
    }

    TEST_CASE( "NotDefaultDiscoverable. a123456789b123456789c123456789d123456789e123456789& f123456789b123456789g123456789d123456789h123456789&  i123456789b123456789j123456789k123456789l123456789", "[Discover]" )
    {
        CHECK( true );
    }

} // End namespace: CatchDiscover

/************
 * End code *
 ************/
