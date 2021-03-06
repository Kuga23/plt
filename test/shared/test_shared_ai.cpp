
#include <boost/test/unit_test.hpp>
#include <vector>
#include "../../src/shared/ai.h"
#include "../../src/shared/state.h"
#include "../../src/shared/engine.h"

using namespace ::ai;
using namespace ::engine;
using namespace ::state;
using namespace std;
BOOST_AUTO_TEST_CASE(TestStaticAssert)
{
    BOOST_CHECK(1);
}

BOOST_AUTO_TEST_CASE(TestEngineNamespace)
{
    {
        srand(time(0));
        engine::Engine ngine{"game"};

        ngine.getState().initializeMapCell("../../../res/map_v0.txt");
        ngine.getState().initializeCharacters();

        RandomAI rai;
        BOOST_CHECK_EQUAL(2, rai.getPlayerNumber());
        rai.setPlayerNumber(1);

        HeuristicAI hai{ngine, 2};
        BOOST_CHECK_EQUAL(2, hai.getPlayerNumber());

        rai.run(ngine);
        hai.run(ngine);
    }
    {
        engine::Engine ngine{"game"};

        ngine.getState().initializeMapCell("../../../res/map_v0.txt");
        ngine.getState().initializeCharacters();

        DeepAI dai{ngine, 1};
        dai.setPlayerNumber(1);
        
        HeuristicAI hai{ngine, 2};
        BOOST_CHECK_EQUAL(2, hai.getPlayerNumber());

        dai.run(ngine);
        hai.run(ngine);
    }
    {
        Node deepNode1{0};
        deepNode1.setValue(10);
        Node deepNode2{1};
        deepNode1.addAdjacent(deepNode2);
        deepNode2.setParent(deepNode1);
        BOOST_CHECK_GT(deepNode1.getAdjacents().size(), 0);
        BOOST_CHECK_EQUAL(deepNode2.getParent().getValue(), deepNode1.getValue());
        BOOST_CHECK_EQUAL(deepNode2.getParent().getIndex(), deepNode1.getIndex());
    }
    {
        MapNode mn1{1,1,1,0};
        MapNode mn2{1,2,2,1};

        mn1.addNear(&mn2);
        mn2.addNear(&mn1);

        mn1.setOcuppied(true);
        BOOST_CHECK_NE(mn1.getOccupied(), mn2.getOccupied());

        BOOST_CHECK_EQUAL(mn1.getX(), mn2.getX());
        BOOST_CHECK_NE(mn1.getY(), mn2.getY());

        mn1.setX(1);
        mn2.setX(1);
        mn1.setY(1);
        BOOST_CHECK_GT(mn1.getNears().size(), 0);
    }
}

/* vim: set sw=2 sts=2 et : */
