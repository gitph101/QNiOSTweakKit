//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMAVSerialization.h"

@class NSString;

@interface TIMAV_DBPkgHead : NSObject <TIMAVSerialization>
{
    unsigned short _wLen;
    BOOL _cCmd;
    short _wServerId;
    unsigned int _dwClientIP;
    unsigned short _wClientPort;
    unsigned int _dwConnAddr;
    unsigned short _wConnPort;
    unsigned int _dwInterfaceAddr;
    unsigned short _wInterfacePort;
    BOOL _cProcessSeq;
    BOOL _cDbId;
    unsigned short _sPad;
}

@property(nonatomic) unsigned short sPad; // @synthesize sPad=_sPad;
@property(nonatomic) BOOL cDbId; // @synthesize cDbId=_cDbId;
@property(nonatomic) BOOL cProcessSeq; // @synthesize cProcessSeq=_cProcessSeq;
@property(nonatomic) unsigned short wInterfacePort; // @synthesize wInterfacePort=_wInterfacePort;
@property(nonatomic) unsigned int dwInterfaceAddr; // @synthesize dwInterfaceAddr=_dwInterfaceAddr;
@property(nonatomic) unsigned short wConnPort; // @synthesize wConnPort=_wConnPort;
@property(nonatomic) unsigned int dwConnAddr; // @synthesize dwConnAddr=_dwConnAddr;
@property(nonatomic) unsigned short wClientPort; // @synthesize wClientPort=_wClientPort;
@property(nonatomic) unsigned int dwClientIP; // @synthesize dwClientIP=_dwClientIP;
@property(nonatomic) short wServerId; // @synthesize wServerId=_wServerId;
@property(nonatomic) BOOL cCmd; // @synthesize cCmd=_cCmd;
@property(nonatomic) unsigned short wLen; // @synthesize wLen=_wLen;
- (id)toSerializedBytes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
