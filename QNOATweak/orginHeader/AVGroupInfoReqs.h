//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVGroupInfoReqs : NSObject
{
}

- (int)getSdkAppId;
- (unsigned long long)getTinyId;
- (_Bool)parseMultiVideoRsp:(id)arg1 bodyResPb:(struct RspBody *)arg2 code:(unsigned int *)arg3 err:(id *)arg4;
- (char *)buildMultiVideoReq:(struct ReqBody *)arg1 commOprHead:(struct GVCommOprHead *)arg2 signature:(id)arg3 subCmd:(unsigned int)arg4 roomInfo:(id)arg5 reqLen:(unsigned long long *)arg6;
- (void)buildMultiVideoCommOprHead:(struct GVCommOprHead *)arg1 roomInfo:(id)arg2 bodyCmd:(unsigned int)arg3;
- (void)buildMultiRecorderReqBody:(struct ReqBody *)arg1 oper:(unsigned int)arg2 roomInfo:(id)arg3 recordInfo:(id)arg4;
- (void)buildMultiVideoStreamerReqBody:(struct ReqBody *)arg1 oper:(unsigned int)arg2 roomInfo:(id)arg3 streamerInfo:(id)arg4 channels:(id)arg5;

@end

