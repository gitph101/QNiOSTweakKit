//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, UIColor, UIFont, UIImage;

@interface DIAvatarImageView : UIView
{
    _Bool _glyphImage;
    NSAttributedString *_title;
    UIImage *_image;
    UIColor *_borderColor;
    UIFont *_glyphFont;
}

@property(nonatomic) _Bool glyphImage; // @synthesize glyphImage=_glyphImage;
@property(nonatomic) UIFont *glyphFont; // @synthesize glyphFont=_glyphFont;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)renderImageFromStr:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

