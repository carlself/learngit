//
//  Vungle.h
//  PieceUp_CN
//
//  Created by carl on 15/8/7.
//
//

#ifndef __PieceUp_CN__Vungle__
#define __PieceUp_CN__Vungle__

class Vungle
{
public:
    static Vungle *getInstance();
    virtual void playAd() = 0;
private:
    static Vungle *_instance;
};

#endif /* defined(__PieceUp_CN__Vungle__) */
