//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMAVSerialization.h"

@class NSData, NSString;

@interface TIMAVTestSpeedReq_PKG : NSObject <TIMAVSerialization>
{
    unsigned char _cClienType;
    unsigned short _wSupportTaskType;
    unsigned short _wBussType;
    unsigned short _wAuthType;
    unsigned int _dwSdkAppid;
    unsigned int _dwGroupUin;
    unsigned short _wReverseLen;
    NSData *_buffReverse;
    unsigned short _wReserve;
    unsigned char _charcClienType;
}

@property(nonatomic) unsigned short wReserve; // @synthesize wReserve=_wReserve;
@property(retain, nonatomic) NSData *buffReverse; // @synthesize buffReverse=_buffReverse;
@property(nonatomic) unsigned short wReverseLen; // @synthesize wReverseLen=_wReverseLen;
@property(nonatomic) unsigned int dwGroupUin; // @synthesize dwGroupUin=_dwGroupUin;
@property(nonatomic) unsigned int dwSdkAppid; // @synthesize dwSdkAppid=_dwSdkAppid;
@property(nonatomic) unsigned short wAuthType; // @synthesize wAuthType=_wAuthType;
@property(nonatomic) unsigned short wBussType; // @synthesize wBussType=_wBussType;
@property(nonatomic) unsigned short wSupportTaskType; // @synthesize wSupportTaskType=_wSupportTaskType;
@property(nonatomic) unsigned char charcClienType; // @synthesize charcClienType=_charcClienType;
- (void).cxx_destruct;
- (id)toSerializedBytes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
