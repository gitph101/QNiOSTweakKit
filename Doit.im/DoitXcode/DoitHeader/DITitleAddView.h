//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DIGrowingV2TextView;

@interface DITitleAddView : UIView
{
    DIGrowingV2TextView *_titleView;
    UIView *_sepLine;
}

@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
@property(retain, nonatomic) DIGrowingV2TextView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)hideKeyboard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

