//
//  VungleIOS.h
//  PieceUp_CN
//
//  Created by carl on 15/8/7.
//
//

#ifndef __PieceUp_CN__VungleIOS__
#define __PieceUp_CN__VungleIOS__

#include "Vungle.h"
class VungleIOS : public Vungle
{
    friend class Vungle;
    
public:
    void playAd() override;
};
#endif /* defined(__PieceUp_CN__VungleIOS__) */
