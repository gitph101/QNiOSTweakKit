//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIImage, UIImageView, UIView;

@interface SFImageCropperViewController : UIViewController
{
    long long _tag;
    id <SFImageCropperDelegate> _delegate;
    UIImage *_originalImage;
    UIImage *_editedImage;
    UIImageView *_showImgView;
    UIView *_overlayView;
    UIView *_ratioView;
    double _limitRatio;
    struct CGRect _cropFrame;
    struct CGRect _oldFrame;
    struct CGRect _largeFrame;
    struct CGRect _latestFrame;
}

@property(nonatomic) struct CGRect latestFrame; // @synthesize latestFrame=_latestFrame;
@property(nonatomic) double limitRatio; // @synthesize limitRatio=_limitRatio;
@property(nonatomic) struct CGRect largeFrame; // @synthesize largeFrame=_largeFrame;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(retain, nonatomic) UIView *ratioView; // @synthesize ratioView=_ratioView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *showImgView; // @synthesize showImgView=_showImgView;
@property(retain, nonatomic) UIImage *editedImage; // @synthesize editedImage=_editedImage;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) struct CGRect cropFrame; // @synthesize cropFrame=_cropFrame;
@property(nonatomic) id <SFImageCropperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)fixOrientation:(id)arg1;
- (id)getSubImage;
- (struct CGRect)handleBorderOverflow:(struct CGRect)arg1;
- (struct CGRect)handleScaleOverflow:(struct CGRect)arg1;
- (void)panView:(id)arg1;
- (void)pinchView:(id)arg1;
- (void)addGestureRecognizers;
- (void)overlayClipping;
- (void)confirm:(id)arg1;
- (void)cancel:(id)arg1;
- (void)initControlBtn;
- (void)initView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 cropFrame:(struct CGRect)arg2 limitScaleRatio:(long long)arg3;
- (void)dealloc;

@end

