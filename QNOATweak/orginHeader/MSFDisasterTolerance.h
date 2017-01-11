//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MSFDisasterTolerance : NSObject
{
    struct {
        int maxCount;
        int maxCmdCount;
    } _config;
    NSMutableDictionary *_pDictionary;
    int _count;
    struct set<std::__1::basic_string<char>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::basic_string<char>>> _whiteList;
    _Bool _pDisconnect;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isVailCommand:(basic_string_a490aa4c)arg1;
- (void)doReconnectCheckIfApplicable;
- (void)onPacketRecvTimeout:(struct CNetworkRequestSO *)arg1;
- (void)onPacketRecv:(struct CNetworkResponseSO *)arg1;
- (void)reset;
- (void)disconnect;
- (void)connectSuccess;
- (void)updateConfig:(id)arg1;
- (void)dealloc;
- (id)init;

@end
