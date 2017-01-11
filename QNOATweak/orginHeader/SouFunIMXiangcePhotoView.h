//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class NSObject<SouFunXiangcePhotoViewDelegate>, NSString, NSTimer, SouFunIMXiangceViewController, UIActivityIndicatorView, UIButton, UIImageView;

@interface SouFunIMXiangcePhotoView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *imageView;
    UIActivityIndicatorView *_activity;
    UIButton *_button;
    _Bool _isZoomed;
    NSTimer *_tapTimer;
    NSObject<SouFunXiangcePhotoViewDelegate> *photoDelegate;
    SouFunIMXiangceViewController *m_controller;
}

@property(retain, nonatomic) SouFunIMXiangceViewController *m_controller; // @synthesize m_controller;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(nonatomic) __weak NSObject<SouFunXiangcePhotoViewDelegate> *photoDelegate; // @synthesize photoDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)killActivityIndicator;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleTap;
- (void)stopTapTimer;
- (void)startTapTimer;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handlePress;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)createHighlightImageWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetZoom;
- (id)initWithFrame:(struct CGRect)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

