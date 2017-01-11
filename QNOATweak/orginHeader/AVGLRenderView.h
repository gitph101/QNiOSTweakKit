//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVGLImage, AVGLNickView;

@interface AVGLRenderView : NSObject
{
    AVGLImage *_image;
    struct {
        float Position[3];
        float TexCoord[2];
    } _vertexs[4];
    struct CGRect _frame;
    int _glTextureRotateAngle;
    id <AVGLRenderViewProtocol> _delegate;
    double _yRotateAngle;
    double _xRotateAngle;
    float _yRotateMatrix[16];
    float _textureRotateMatrix[4];
    float _textureBoundMatrix[4];
    float _textureScaleMatrix[4];
    unsigned int *_planarTextureHandles;
    double _boundWidth;
    _Bool _enableCutting;
    _Bool _hasBlackEdge;
    double _animationCoordDeviation[4];
    double _animationRotateDeviation;
    double _animationAlphaDeviation;
    struct CGRect _destinationFrame;
    int _textueDisplayType;
    _Bool _needDisplayLoading;
    double _textureYUVType;
    _Bool _isDisplayBlocked;
    _Bool _isDisplayStoped;
    _Bool _onlyDisplayBackGround;
    double _currentAnimationStep;
    AVGLNickView *_nickView;
    _Bool _isShowNickName;
    char *_strideBuf;
    int _bufLen;
    float _StridedTexCoord;
    _Bool _isFloat;
    int _nickPosition;
    struct CGRect _superBounds;
}

+ (void)onRenderTimer:(id)arg1;
+ (double)getStepLengthAtIndex:(int)arg1 withAnimationType:(int)arg2;
+ (int)getAnimationStatus;
+ (_Bool)isAnimating;
+ (void)removeAllAnimation;
+ (void)resetAnimation;
+ (void)commitAnimations;
+ (void)setAnimationBaseView:(id)arg1;
+ (void)setAnimationCurve:(long long)arg1;
+ (void)setAnimationDuration:(double)arg1;
+ (void)setAnimationDelegate:(id)arg1;
+ (void)setAnimationDidStopSelector:(SEL)arg1;
+ (void)beginAnimations:(id)arg1 context:(void *)arg2;
+ (void)registerAnimation:(id)arg1 withAnimationType:(int)arg2;
+ (_Bool)checkAnimation:(id)arg1 withAnimationType:(int)arg2;
+ (void)removeAnimation:(id)arg1 withAnimationType:(int)arg2;
@property(nonatomic) int nickPosition; // @synthesize nickPosition=_nickPosition;
@property(nonatomic) _Bool isFloat; // @synthesize isFloat=_isFloat;
@property(nonatomic) struct CGRect superBounds; // @synthesize superBounds=_superBounds;
@property(nonatomic) id <AVGLRenderViewProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVGLNickView *nickView; // @synthesize nickView=_nickView;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic) AVGLImage *image; // @synthesize image=_image;
- (void)dealloc;
- (void)destroyOpenGL;
- (void)animationEndWithAnimationType:(int)arg1;
- (void)updateNickView;
- (void)updateNickFrame;
- (void)animationAtStepIndex:(int)arg1 withAnimationType:(int)arg2;
- (void)strideImage:(char **)arg1 u:(char **)arg2 v:(char **)arg3;
- (void)setDisplayStop:(_Bool)arg1;
- (void)setDisplayBlock:(_Bool)arg1;
- (void)textureRGB:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 index:(int)arg4;
- (void)textureYUV:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 index:(int)arg4;
- (void)textureNV12:(char *)arg1 widthType:(int)arg2 heightType:(int)arg3 index:(int)arg4;
- (float)getAutoRotateAngle;
- (void)drawLoading;
- (void)drawBackground;
- (void)drawTexture;
- (void)drawFrame;
- (void)applyRotationWithDegree:(float)arg1 withAxis:(int)arg2 withType:(int)arg3;
- (void)updateVBOWithDrawType:(int)arg1;
- (void)setBoundsWithWidth:(float)arg1;
- (void)updateVertexs2;
- (void)updateTexCoord2;
- (void)updateVertexs;
- (void)updateTexCoord;
- (void)setNickName:(id)arg1;
- (void)hideNickName;
- (void)showNikeName;
- (void)setNickNameHidden:(_Bool)arg1;
- (void)setCuttingEnable:(_Bool)arg1;
- (void)setHasBlackEdge:(_Bool)arg1;
- (void)setNeedMirrorReverse:(_Bool)arg1;
- (void)setAnimationStep:(double)arg1;
- (void)setRotate:(int)arg1;
- (void)initVertex;
- (void)updateLodingVertex;
- (void)setupTexture;
- (id)initWithFrame:(struct CGRect)arg1;

@end
