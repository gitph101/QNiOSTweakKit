//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFGlobalAlertViewDelegate.h"

@class NSString;

@interface SouFunTokenBind : NSObject <SFGlobalAlertViewDelegate>
{
    NSString *_username;
    NSString *_secretKey;
    NSString *_code;
    NSString *_msg;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)getTimeStringWithResponseStr:(id)arg1;
- (void)compareWithAlertView:(_Bool)arg1 AndStandardTime:(CDUnknownBlockType)arg2;
- (void)requestScretkeyFromSeverWithUsername:(id)arg1 andUserID:(id)arg2 andtype:(id)arg3 withSuccessBlock:(CDUnknownBlockType)arg4 andFailureBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

