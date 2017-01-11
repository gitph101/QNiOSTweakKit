//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVStreamerResp, ILiveRoomOption, OMAVRoomInfo;

@interface ILiveRoomManager : NSObject
{
    int _roomId;
    long long _pushState;
    AVStreamerResp *_streamerResp;
    long long _recordState;
    OMAVRoomInfo *_recordRoomInfo;
    ILiveRoomOption *_option;
}

+ (id)getInstance;
@property(nonatomic) int roomId; // @synthesize roomId=_roomId;
@property(readonly, nonatomic) ILiveRoomOption *option; // @synthesize option=_option;
@property(retain, nonatomic) OMAVRoomInfo *recordRoomInfo; // @synthesize recordRoomInfo=_recordRoomInfo;
@property(nonatomic) long long recordState; // @synthesize recordState=_recordState;
@property(retain, nonatomic) AVStreamerResp *streamerResp; // @synthesize streamerResp=_streamerResp;
@property(nonatomic) long long pushState; // @synthesize pushState=_pushState;
- (void).cxx_destruct;
- (id)createGLViewIn:(id)arg1 atRect:(struct CGRect)arg2;
- (id)createGLViewIn:(id)arg1;
- (void)bindGLView:(id)arg1;
- (id)glBaseView;
- (void)mainThreadFailBlock:(CDUnknownBlockType)arg1 module:(id)arg2 errId:(int)arg3 errMsg:(id)arg4;
- (long long)getVailedPushState:(long long)arg1;
- (void)stopRecordVideo:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)startRecordVideo:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)stopPushStreams:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)startPushStream:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (_Bool)isInvalidPushOption:(id)arg1;
- (void)sendGroupMessage:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)sendC2CMessage:(id)arg1 message:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (int)bindIMGroupId:(id)arg1;
- (void)changeRole:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)changeAuthority:(unsigned long long)arg1 authBuf:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (id)getIMGroupId;
- (id)getQualityData;
- (int)getRoomId;
- (long long)getCurAudioMode;
- (_Bool)getCurSpeakerState;
- (_Bool)getCurMicState;
- (_Bool)getCurCameraState;
- (long long)getCurCameraPos;
- (void)setAudioMode:(long long)arg1;
- (void)enableSpeaker:(_Bool)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)enableMic:(_Bool)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)switchCamera:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)enableCamera:(long long)arg1 enable:(_Bool)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)cancelAllView:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)cancelViewList:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)requestViewList:(id)arg1 srcTypeList:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)realExitRoom:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)quitRoom:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)joinRoom:(int)arg1 option:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)createRoom:(int)arg1 option:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (_Bool)isInvalidRoomOption:(id)arg1;
- (void)setOption:(id)arg1;
- (void)releaseSrc;
- (id)init;

@end

