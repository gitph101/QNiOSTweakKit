//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSString;

@interface Wtlogin64_WloginTlv_0x140 : Wtlogin64_WloginTlv
{
    unsigned short wDataVer;
    NSString *sLoginHost;
    unsigned short wLoginPort;
    unsigned short wResvLen;
}

@property unsigned short wResvLen; // @synthesize wResvLen;
@property unsigned short wLoginPort; // @synthesize wLoginPort;
@property(copy) NSString *sLoginHost; // @synthesize sLoginHost;
@property unsigned short wDataVer; // @synthesize wDataVer;
- (void).cxx_destruct;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;

@end
