//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ILiveAVGLViewAble <NSObject>
+ (id)createRenderView:(struct CGRect)arg1 currentUserID:(NSString *)arg2;
- (void)startDisplay;
- (void)stopDisplay;
- (id <ILiveAVGLRenderViewAble>)getRenderViewForKey:(NSString *)arg1;
- (void)removeRenderViewForKey:(NSString *)arg1;
- (void)bringRenderViewToFront:(NSString *)arg1;
- (void)destroyRenderView;
@end

