//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol ChatVoiceRecorderVCDelegate <NSObject>
- (void)recordorPlayError:(NSError *)arg1;
- (void)ChatAudioPlayerDidFinishSuccessfully:(_Bool)arg1;
- (void)updateMetersWithAvgPower:(float)arg1 remainderTime:(int)arg2;
- (void)ChatVoiceRecorderVCRecordFinish:(NSString *)arg1 fileName:(NSString *)arg2 fileSize:(int)arg3 fileDuration:(float)arg4;
@end
