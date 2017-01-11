//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"

@class AVAudioPlayer, Audio, NSString;

@interface DIAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_audioPlayer;
    Audio *_currentAudio;
    double _durationTime;
    double _currentTime;
    id <DoitAudioPlayerDelegate> _audioDelegate;
}

+ (id)initWithAudio:(id)arg1;
@property(nonatomic) id <DoitAudioPlayerDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) double durationTime; // @synthesize durationTime=_durationTime;
- (void).cxx_destruct;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (double)getCurrentTime;
- (double)getDurationTime;
- (void)stop;
- (void)pause;
- (_Bool)play;
- (_Bool)isPlaying;
- (id)initWithAudio:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
