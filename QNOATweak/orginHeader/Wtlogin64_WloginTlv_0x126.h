//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSData;

@interface Wtlogin64_WloginTlv_0x126 : Wtlogin64_WloginTlv
{
    unsigned short wVer;
    NSData *randData;
}

@property(retain) NSData *randData; // @synthesize randData;
@property unsigned short wVer; // @synthesize wVer;
- (void).cxx_destruct;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end

