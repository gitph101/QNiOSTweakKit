//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TLSErrInfo, TLSUserInfo;

@protocol TLSGuestRegListener <NSObject>
- (void)OnGuestRegTimeout:(TLSErrInfo *)arg1;
- (void)OnGuestRegFail:(TLSErrInfo *)arg1;
- (void)OnGuestRegSuccess:(TLSUserInfo *)arg1;
@end

