//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSIndexPath, NSString, UIColor, UIImage, UIVisualEffect;

@interface JZTableViewRowAction : NSObject <NSCopying>
{
    long long _style;
    _Bool _enabled;
    NSString *_title;
    UIColor *_backgroundColor;
    UIVisualEffect *_backgroundEffect;
    CDUnknownBlockType _handler;
    UIImage *_image;
    NSIndexPath *_indexPath;
}

+ (id)rowActionWithStyle:(long long)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)rowActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) UIVisualEffect *backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)actionTriggered:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
