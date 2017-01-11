//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMAVSerialization.h"

@class NSData, NSString;

@interface TIMAV_RelayPkgHeadEx2 : NSObject <TIMAVSerialization>
{
    short _wExVe;
    short _wExLen;
    short _wLocalId;
    short _wTimeZoneOffsetMin;
    NSData *_sReserved;
}

@property(retain, nonatomic) NSData *sReserved; // @synthesize sReserved=_sReserved;
@property(nonatomic) short wTimeZoneOffsetMin; // @synthesize wTimeZoneOffsetMin=_wTimeZoneOffsetMin;
@property(nonatomic) short wLocalId; // @synthesize wLocalId=_wLocalId;
@property(nonatomic) short wExLen; // @synthesize wExLen=_wExLen;
@property(nonatomic) short wExVe; // @synthesize wExVe=_wExVe;
- (void).cxx_destruct;
- (id)toSerializedBytes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

