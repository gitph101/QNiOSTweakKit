//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Wtlogin64_WloginTlv.h"

@class NSData;

@interface Wtlogin64_WloginTlv_0x123 : Wtlogin64_WloginTlv
{
    NSData *G;
    NSData *N;
    NSData *Y;
    NSData *X;
    unsigned int dwCalTime;
}

@property unsigned int dwCalTime; // @synthesize dwCalTime;
@property(retain) NSData *X; // @synthesize X;
@property(retain) NSData *Y; // @synthesize Y;
@property(retain) NSData *N; // @synthesize N;
@property(retain) NSData *G; // @synthesize G;
- (void).cxx_destruct;
- (int)encode:(id)arg1;

@end
