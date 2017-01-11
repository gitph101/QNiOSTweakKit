//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "Wtlogin64_WloginProtocolBuff.h"

@class NSData, NSString;

@interface Wtlogin64_RegisterCmd : NSObject <Wtlogin64_WloginProtocolBuff>
{
    unsigned short wVer;
    unsigned short wCmd;
    unsigned char cReplayCode;
    NSData *tokenData;
    NSData *picData;
    NSData *picSigData;
    NSString *upSmsNo;
    NSString *upSmsMsg;
    NSString *jumpUrl;
    NSString *noticeInfo;
    NSString *returnInfo;
}

@property unsigned short wVer; // @synthesize wVer;
@property(copy) NSString *returnInfo; // @synthesize returnInfo;
@property(copy) NSString *noticeInfo; // @synthesize noticeInfo;
@property unsigned char cReplayCode; // @synthesize cReplayCode;
@property(retain) NSData *picSigData; // @synthesize picSigData;
@property(retain) NSData *tokenData; // @synthesize tokenData;
@property(copy) NSString *upSmsMsg; // @synthesize upSmsMsg;
@property(copy) NSString *upSmsNo; // @synthesize upSmsNo;
@property(retain) NSData *picData; // @synthesize picData;
@property(copy) NSString *jumpUrl; // @synthesize jumpUrl;
@property unsigned short wCmd; // @synthesize wCmd;
- (void).cxx_destruct;
- (int)encodeRegBody:(id)arg1;
- (int)encode:(id)arg1;
- (int)decodeRegBody:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeReturnInfo:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeNoticeInfo:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeUrl:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeUpSms:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodeToken:(char **)arg1 andBuffLen:(int *)arg2;
- (int)decodePic:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encodeRegHead:(id)arg1 withPkgLen:(unsigned short)arg2;
- (int)decodeRegHead:(char **)arg1 andBuffLen:(int *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

