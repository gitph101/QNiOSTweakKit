//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ILiveGLBaseView, NSMutableDictionary, NSString;

@interface TILBaseCall : NSObject
{
    id <TILCallMemberEventListener> _memberListener;
    id <TILCallNotificationListener> _notifListener;
    long long _callType;
    NSMutableDictionary *_endpoints;
    NSString *_identifier;
    long long _cameraPos;
    ILiveGLBaseView *_renderView;
}

@property(retain, nonatomic) ILiveGLBaseView *renderView; // @synthesize renderView=_renderView;
@property(nonatomic) long long cameraPos; // @synthesize cameraPos=_cameraPos;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableDictionary *endpoints; // @synthesize endpoints=_endpoints;
@property(nonatomic) long long callType; // @synthesize callType=_callType;
@property(nonatomic) __weak id <TILCallNotificationListener> notifListener; // @synthesize notifListener=_notifListener;
@property(nonatomic) __weak id <TILCallMemberEventListener> memberListener; // @synthesize memberListener=_memberListener;
- (void).cxx_destruct;
- (void)onEndpointsUpdateInfo:(long long)arg1 updateList:(id)arg2;
- (_Bool)isMicEnabled;
- (void)enableMic:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (_Bool)isSpeakerEnabled;
- (void)enableSpeaker:(_Bool)arg1 result:(CDUnknownBlockType)arg2;
- (long long)getCameraPos;
- (void)switchCamera:(CDUnknownBlockType)arg1;
- (_Bool)isCameraEnabled;
- (void)enableCamera:(_Bool)arg1 pos:(long long)arg2 result:(CDUnknownBlockType)arg3;
- (void)modifyRenderFor:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)removeSelfRender;
- (void)removeRenderFor:(id)arg1;
- (void)addSelfRender:(struct CGRect)arg1;
- (void)addRenderFor:(id)arg1 atFrame:(struct CGRect)arg2;
- (id)createRenderViewIn:(id)arg1;
- (id)getAudioMembers;
- (id)getVideoMembers;
- (id)getMembers;
- (long long)getCallType;
- (void)resizeMessageCache:(unsigned int)arg1;
- (id)getMessages:(id)arg1 count:(unsigned int)arg2;
- (void)sendMessage:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)postNotification:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)configWithCallType:(long long)arg1 memberListener:(id)arg2 notifListener:(id)arg3;
- (void)dealloc;

@end

