//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMAVSerialization.h"

@class NSString;

@interface TIMAV_CLD_PKG_HEAD : NSObject <TIMAVSerialization>
{
    short _wVersion;
    short _wCmd;
    short _wSeq;
    unsigned int _dwUin;
}

@property(nonatomic) unsigned int dwUin; // @synthesize dwUin=_dwUin;
@property(nonatomic) short wSeq; // @synthesize wSeq=_wSeq;
@property(nonatomic) short wCmd; // @synthesize wCmd=_wCmd;
@property(nonatomic) short wVersion; // @synthesize wVersion=_wVersion;
- (id)toSerializedBytes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

