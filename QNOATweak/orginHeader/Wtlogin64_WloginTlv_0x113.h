//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSString;

@interface Wtlogin64_WloginTlv_0x113 : Wtlogin64_WloginTlv
{
    unsigned long long ddwUin;
    unsigned short wNameTag;
    NSString *sName;
}

@property(copy) NSString *sName; // @synthesize sName;
@property unsigned long long ddwUin; // @synthesize ddwUin;
@property unsigned short wNameTag; // @synthesize wNameTag;
- (void).cxx_destruct;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

