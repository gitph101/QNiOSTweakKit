//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SouFunIMVideoOrVoiceChatDelegate : NSObject
{
}

+ (_Bool)isReceiverNotReadWithJson:(id)arg1;
+ (id)timeFormatted:(long long)arg1;
+ (id)spellReceiverMessageWithJson:(id)arg1 withPurpose:(id)arg2;
+ (id)spellInitiatorMessageWithJson:(id)arg1 withPurpose:(id)arg2;
+ (id)sharedChatDelegate;
- (void)handleupSendMessageWithBreakfromID:(id)arg1 breaknickname:(id)arg2 breaktype:(id)arg3 time:(id)arg4 chatTargetIMUsername:(id)arg5 chatTargetNickname:(id)arg6 isVoicechat:(_Bool)arg7;
- (void)pushMessageWithSendToIMUsername:(id)arg1 isVoicechat:(_Bool)arg2;
- (void)loginWithParam;
- (void)startLogin;
- (void)initiateChatIsVideoChat:(_Bool)arg1 withIMUsername:(id)arg2 withNickname:(id)arg3;
- (void)showToastWithString:(id)arg1;

@end

