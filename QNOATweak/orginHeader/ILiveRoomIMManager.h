//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TIMManager;

@interface ILiveRoomIMManager : NSObject
{
    NSString *_imGroupId;
    TIMManager *_imManager;
    CDUnknownBlockType _defaultGenerateImGroupFunc;
}

+ (id)getInstance;
@property(copy, nonatomic) CDUnknownBlockType defaultGenerateImGroupFunc; // @synthesize defaultGenerateImGroupFunc=_defaultGenerateImGroupFunc;
- (void).cxx_destruct;
- (void)mainThreadFailBlock:(CDUnknownBlockType)arg1 module:(id)arg2 errId:(int)arg3 errMsg:(id)arg4;
- (void)mainThreadSuccBlock:(CDUnknownBlockType)arg1;
- (void)releaseSrc;
- (void)setImGroupId:(id)arg1;
- (id)getIMGroupId;
- (int)bindIMGroupId:(id)arg1;
- (void)sendGroupMessage:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)sendC2CMessage:(id)arg1 message:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)quitGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)joinIMGroup:(id)arg1 succ:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)createIMGroup:(id)arg1 option:(id)arg2 succ:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (id)init;

@end

