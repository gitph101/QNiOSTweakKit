//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILiveAVGLRenderViewAble.h"

@class AVGLCustomRenderView, NSString;

@interface ILiveRenderView : UIView <ILiveAVGLRenderViewAble>
{
    AVGLCustomRenderView *_renderView;
    NSString *_renderKey;
    long long _rotationType;
}

+ (id)createRenderView:(struct CGRect)arg1;
@property(nonatomic) long long rotationType; // @synthesize rotationType=_rotationType;
@property(copy, nonatomic) NSString *renderKey; // @synthesize renderKey=_renderKey;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)updateOpenGLFrame;
- (id)autoAddRenderWithKey:(id)arg1;
- (void)setNeedMirrorReverse:(_Bool)arg1;
- (void)showWithKey:(id)arg1;
@property(nonatomic) struct CGRect renderFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
