//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TIMInnerUser, TIMUserConfig;

@interface TIMIMCoreImpl : NSObject
{
    TIMInnerUser *user;
    TIMUserConfig *userConfig;
}

+ (void)ReportEvent:(id)arg1;
+ (int)initOpenIM;
+ (id)getVersion;
@property(retain, nonatomic) TIMUserConfig *userConfig; // @synthesize userConfig;
@property(retain, nonatomic) TIMInnerUser *user; // @synthesize user;
- (void).cxx_destruct;
- (int)initUser:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)moveDBToDocDir;
- (id)init:(id)arg1 user:(id)arg2;
- (int)prepareOpenIM:(id)arg1 succ:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)logoutSdk;
- (void)runOnTaskThread:(CDUnknownBlockType)arg1;
- (int)manualPush:(id)arg1;
- (void)loginSyncMsg;

@end
