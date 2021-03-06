//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface SFNAVTitleViewModel : NSObject
{
    _Bool _selected;
    NSString *_title;
    NSString *_normalImgStr;
    NSString *_highlihgtImgStr;
    NSString *_showImgStr;
    UIFont *_textFont;
    UIColor *_textColor;
    UIColor *_highlightTextColor;
}

@property(retain, nonatomic) UIColor *highlightTextColor; // @synthesize highlightTextColor=_highlightTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) NSString *showImgStr; // @synthesize showImgStr=_showImgStr;
@property(retain, nonatomic) NSString *highlihgtImgStr; // @synthesize highlihgtImgStr=_highlihgtImgStr;
@property(retain, nonatomic) NSString *normalImgStr; // @synthesize normalImgStr=_normalImgStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isSeleted) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 NormalImgStr:(id)arg2 HighlightImgStr:(id)arg3 Font:(id)arg4;

@end

