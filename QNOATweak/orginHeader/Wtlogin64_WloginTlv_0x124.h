//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSString;

@interface Wtlogin64_WloginTlv_0x124 : Wtlogin64_WloginTlv
{
    NSString *sOs;
    NSString *sOsVer;
    unsigned short wNetInfo;
    NSString *sNetDetail;
    NSString *sAddr;
}

@property(copy) NSString *sAddr; // @synthesize sAddr;
@property(copy) NSString *sNetDetail; // @synthesize sNetDetail;
@property unsigned short wNetInfo; // @synthesize wNetInfo;
@property(copy) NSString *sOsVer; // @synthesize sOsVer;
@property(copy) NSString *sOs; // @synthesize sOs;
- (void).cxx_destruct;
- (int)encode:(id)arg1;

@end

