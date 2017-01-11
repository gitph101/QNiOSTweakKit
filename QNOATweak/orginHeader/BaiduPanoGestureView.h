//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@interface BaiduPanoGestureView : UIView
{
    NSTimer *_inertiaTimer;
    NSTimer *_autoZoomTimer;
    float _speedX;
    float _speedY;
    UIPanGestureRecognizer *_panGesture;
    UITapGestureRecognizer *_singleTapGesture;
    UITapGestureRecognizer *_doubleTapGesture;
    UIPinchGestureRecognizer *_pinchGesture;
}

@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGesture; // @synthesize doubleTapGesture=_doubleTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void)dealloc;
- (void)setSingleTapEnable:(_Bool)arg1;
- (void)autoZoomTimerHandler:(id)arg1;
- (void)inertiaTimerHandler:(id)arg1;
- (void)stopGestureTimer;
- (void)pinchGesture:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)doubleTapGesture:(id)arg1;
- (void)singleTapGesture:(id)arg1;
- (void)initGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1;

@end
