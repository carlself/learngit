//
//  VungleIOS.cpp
//  PieceUp_CN
//
//  Created by carl on 15/8/7.
//
//

#include "VungleIOS.h"
#import <VungleSDK/VungleSDK.h>

Vungle *Vungle::getInstance()
{
    if(_instance == nullptr)
    {
        _instance = new VungleIOS();
    }
    
    return _instance;
}

void VungleIOS::playAd()
{
    UIViewController* viewController = [UIApplication sharedApplication].keyWindow.rootViewController;
    NSError *error;
    [[VungleSDK sharedSDK] playAd:viewController error:&error];
    if(error != nil)
    {
//        NSLog("error playing ad: %@", error);
    }
}