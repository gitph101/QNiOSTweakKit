//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TLSErrInfo, TLSUserInfo;

@protocol TLSStrAccountRegListener <NSObject>
- (void)OnStrAccountRegTimeout:(TLSErrInfo *)arg1;
- (void)OnStrAccountRegFail:(TLSErrInfo *)arg1;
- (void)OnStrAccountRegSuccess:(TLSUserInfo *)arg1;
@end
