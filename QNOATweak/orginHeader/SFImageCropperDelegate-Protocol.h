//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SFImageCropperViewController, UIImage;

@protocol SFImageCropperDelegate <NSObject>
- (void)imageCropperDidCancel:(SFImageCropperViewController *)arg1;
- (void)imageCropper:(SFImageCropperViewController *)arg1 didFinished:(UIImage *)arg2;
@end

