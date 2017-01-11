//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Wtlogin64_SocketNetworkAdapterProtocol.h"

@class NSData, NSString, Wtlogin64_MemSig, Wtlogin64_SocketNetworkAdapter, Wtlogin64_WloginPkgHead;

@interface Wtlogin64_WloginTransport : NSObject <Wtlogin64_SocketNetworkAdapterProtocol>
{
    Wtlogin64_WloginPkgHead *pkgHead;
    unsigned char cReplyCode;
    NSString *crtCarrierName;
    Wtlogin64_SocketNetworkAdapter *socketAdapter;
    double timeOut;
    char sKey[16];
    char A1_Key[16];
    id transportDelegate;
    NSString *nowHost;
    unsigned short nowPort;
    struct timeval startTime;
    CDStruct_34f44c17 stInfo;
    unsigned short retryTimes;
    unsigned long long dwTmpUin;
    unsigned int dwTmpAppid;
    unsigned int dwTmpRole;
    unsigned int dwTmpTime;
    Wtlogin64_MemSig *sTmpST;
    Wtlogin64_MemSig *sTmpA2;
    NSData *sTmpData;
    int dwTmpType;
    unsigned char isECDHTran;
    _Bool isEcdhEnable;
    NSData *ecdhBackSig;
}

@property(readonly) unsigned char cReplyCode; // @synthesize cReplyCode;
- (void).cxx_destruct;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)recvPkgError;
- (void)networkInfoReport:(short)arg1 andErrorStr:(id)arg2;
- (int)sendToWtloginTran:(unsigned long long)arg1 andAppid:(unsigned int)arg2 andRole:(unsigned int)arg3 andTranType:(int)arg4 andSt:(id)arg5 andA2:(id)arg6 andData:(id)arg7 andSvrTime:(unsigned int)arg8 andIsECDH:(unsigned char)arg9;
- (id)paramDict;
- (int)geneECDHTransBody:(id)arg1 withTransBody:(id)arg2;
- (int)connectToRemortServer;
- (void)dealloc;
- (_Bool)resetTransport;
- (id)initTranWithClientVer:(unsigned short)arg1 andPubNo:(unsigned int)arg2 andClientType:(unsigned int)arg3 andDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
