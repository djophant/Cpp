#include "gtest/gtest.h"
#include "../BattleRoyale/Fantassin.cpp"
#include "../BattleRoyale/Damier.cpp"
#include "../BattleRoyale/MyPoint.cpp"
#include "../BattleRoyale/Tools.cpp"

TEST(Damier, Creation)
{
    Damier d(40, 50);    
    EXPECT_EQ(d.getHauteurGrille(), 50);
    EXPECT_EQ(d.getLargeurGrille(), 40);   
    EXPECT_EQ(d.getPersonnage(MyPoint(0, 0)), nullptr);    
}

TEST(Fantassin, Creation)
{
    Damier* d = new Damier(40, 50);
    Fantassin* f = new Fantassin(d);

    d->setRandomPerso(f);

    EXPECT_EQ(d->persosCount(), 1);

    delete f;
    delete d;
}

TEST(Tools, myRand)
{

}

int main(int argc, char** argv)
{
    srand(time(NULL));
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}

