//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFHUDView;

@interface CustomAFNetworkingManager : NSObject
{
    SFHUDView *HudView;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)requestFinishedWithRequestOperation:(id)arg1 requestItem:(id)arg2;
- (int)sendRequestWithRequestItem:(id)arg1;
- (_Bool)checkRequestItem:(id)arg1;
- (_Bool)checkNetIsEnable;
- (id)init;

@end

