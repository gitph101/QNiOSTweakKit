//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface SouFunIMFileDownloadView : UIView
{
    UIImageView *_fileImageView;
    UILabel *_fileNameLabel;
    UIButton *_fileDownloadBtn;
    UIButton *_otherAPPOpenBtn;
    UIView *_processBackgroundView;
    UIView *_processView;
    UILabel *_processLabel;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UILabel *processLabel; // @synthesize processLabel=_processLabel;
@property(retain, nonatomic) UIView *processView; // @synthesize processView=_processView;
@property(retain, nonatomic) UIView *processBackgroundView; // @synthesize processBackgroundView=_processBackgroundView;
@property(retain, nonatomic) UIButton *otherAPPOpenBtn; // @synthesize otherAPPOpenBtn=_otherAPPOpenBtn;
@property(retain, nonatomic) UIButton *fileDownloadBtn; // @synthesize fileDownloadBtn=_fileDownloadBtn;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIImageView *fileImageView; // @synthesize fileImageView=_fileImageView;
- (void).cxx_destruct;
- (void)refreshProgressViewWithCurrentsize:(long long)arg1 withTotalSize:(long long)arg2;
- (void)showOtherAPPOpenBtn;
- (void)showDownloadBtn;
- (void)showProcessView;
- (id)initWithFrame:(struct CGRect)arg1 withFilename:(id)arg2 withMimetype:(id)arg3 withFilesize:(long long)arg4;

@end

