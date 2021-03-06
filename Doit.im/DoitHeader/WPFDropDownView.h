//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel, UIViewController, WPFNavigationItemRecorder;

@interface WPFDropDownView : UIView
{
    _Bool _menuDropDown;
    _Bool _arrowHidden;
    UIView *_menuView;
    NSString *_title;
    UIViewController *_containerController;
    UIButton *_button;
    UIButton *_bkButton;
    UILabel *_titleLabel;
    UIImageView *_icon;
    WPFNavigationItemRecorder *_navigationItemRecorder;
}

+ (id)dropDownMenuTitle:(id)arg1 menuView:(id)arg2 addToController:(id)arg3;
@property(retain, nonatomic) WPFNavigationItemRecorder *navigationItemRecorder; // @synthesize navigationItemRecorder=_navigationItemRecorder;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *bkButton; // @synthesize bkButton=_bkButton;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak UIViewController *containerController; // @synthesize containerController=_containerController;
@property(nonatomic) _Bool arrowHidden; // @synthesize arrowHidden=_arrowHidden;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *menuView; // @synthesize menuView=_menuView;
- (void).cxx_destruct;
- (void)on_pressedBKButton:(id)arg1;
- (void)on_pressedDropButton:(id)arg1;
- (void)p_updateSubviewFrame;
- (void)setMenuDropDown:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isMenuDropDown) _Bool menuDropDown; // @synthesize menuDropDown=_menuDropDown;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)pickUpMenuAnimated:(_Bool)arg1;
- (void)dropDownMenuAnimated:(_Bool)arg1;
- (void)reloadMenuAnimated:(_Bool)arg1;
- (void)addToController:(id)arg1;
- (void)layoutSubviews;
- (void)p_layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

