//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Wtlogin64_WloginErrInfo : NSObject
{
    unsigned int dwErrorCode;
    NSString *sErrorTitle;
    NSString *sErrorMsg;
    unsigned short wErrorAddType;
    NSString *sErrorAdd;
}

@property(copy) NSString *sErrorAdd; // @synthesize sErrorAdd;
@property unsigned short wErrorAddType; // @synthesize wErrorAddType;
@property(copy) NSString *sErrorMsg; // @synthesize sErrorMsg;
@property(copy) NSString *sErrorTitle; // @synthesize sErrorTitle;
@property unsigned int dwErrorCode; // @synthesize dwErrorCode;
- (void).cxx_destruct;
@property(readonly) unsigned int wErrorCode;

@end

