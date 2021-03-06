//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TIMAVSerialization.h"

@class NSString;

@interface TIMAV_LongConnHead : NSObject <TIMAVSerialization>
{
    short _wSubCmd;
    long long _llAccount;
    unsigned char _cKeyLen;
    NSString *_sKey;
    unsigned int _dwRoomNum;
}

@property(nonatomic) unsigned int dwRoomNum; // @synthesize dwRoomNum=_dwRoomNum;
@property(copy, nonatomic) NSString *sKey; // @synthesize sKey=_sKey;
@property(nonatomic) unsigned char cKeyLen; // @synthesize cKeyLen=_cKeyLen;
@property(nonatomic) long long llAccount; // @synthesize llAccount=_llAccount;
@property(nonatomic) short wSubCmd; // @synthesize wSubCmd=_wSubCmd;
- (void).cxx_destruct;
- (id)toSerializedBytes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

