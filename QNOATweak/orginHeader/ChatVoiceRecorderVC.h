//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VoiceRecorderBaseVC.h"

#import "AVAudioPlayerDelegate.h"
#import "AVAudioRecorderDelegate.h"

@class AVAudioPlayer, AVAudioRecorder, NSString, NSTimer;

@interface ChatVoiceRecorderVC : VoiceRecorderBaseVC <AVAudioRecorderDelegate, AVAudioPlayerDelegate>
{
    double curCount;
    struct CGPoint curTouchPoint;
    _Bool canNotSend;
    NSTimer *timer;
    AVAudioRecorder *recorder;
    AVAudioPlayer *player;
    id <ChatVoiceRecorderVCDelegate> delegate;
}

+ (id)getPathByFileDirectory;
@property(nonatomic) id <ChatVoiceRecorderVCDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVAudioPlayer *player; // @synthesize player;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)playerPauseOrPlay;
- (void)amrToWavWithFileName:(id)arg1;
- (void)wavToArmWithFileName:(id)arg1;
- (float)getFileDuration:(id)arg1;
- (int)getFileSize:(id)arg1;
- (void)stopRecord;
- (void)playWavFileWithName:(id)arg1;
- (void)playWavFileWithPath:(id)arg1;
- (void)updateMeters;
- (void)stopTimer;
- (void)startTimer;
- (void)beginRecord;
- (_Bool)canRecord;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

