//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OMErrResp : NSObject
{
    NSString *cmd;
    int seq;
    NSString *uin;
    int errCode;
    NSString *errTips;
}

@property(retain, nonatomic) NSString *errTips; // @synthesize errTips;
@property(nonatomic) int errCode; // @synthesize errCode;
@property(nonatomic) int seq; // @synthesize seq;
@property(retain, nonatomic) NSString *uin; // @synthesize uin;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd;
- (void).cxx_destruct;

@end

