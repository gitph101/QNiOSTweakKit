//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TIMUserStatusListener <NSObject>

@optional
- (void)onUserSigExpired;
- (void)onReConnFailed:(int)arg1 err:(NSString *)arg2;
- (void)onForceOffline;
@end

