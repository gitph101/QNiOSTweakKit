//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVAudioRecorderDelegate.h"

@class NSString, UIImageView, UILabel;

@interface SouFunIMRecordAnimationView : UIView <AVAudioRecorderDelegate>
{
    UIImageView *backImagView;
    UIImageView *recordAnimationIV;
    UIImageView *leftIV;
    UILabel *endLab;
    UIImageView *UpPullIV;
    UIImageView *timeOutPullIV;
}

@property(retain, nonatomic) UIImageView *timeOutPullIV; // @synthesize timeOutPullIV;
@property(retain, nonatomic) UIImageView *UpPullIV; // @synthesize UpPullIV;
@property(retain, nonatomic) UILabel *endLab; // @synthesize endLab;
@property(retain, nonatomic) UIImageView *leftIV; // @synthesize leftIV;
@property(retain, nonatomic) UIImageView *recordAnimationIV; // @synthesize recordAnimationIV;
@property(retain, nonatomic) UIImageView *backImagView; // @synthesize backImagView;
- (void).cxx_destruct;
- (void)beginRecordTongzhi;
- (void)timeoutCancelRecord;
- (void)timeshortCancelRecord;
- (void)shangtiCancelRecord;
- (void)endRecord;
- (void)beginRecord;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

