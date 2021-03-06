//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, SFCustomTextField, UILabel;

@interface SFEmailView : UIView
{
    SFCustomTextField *_emailNameTF;
    SFCustomTextField *_emailPwdTF;
    NSString *_unreadCount;
    long long _emailViewType;
    UIView *_backgroundView;
    id <SFEmailViewDelegate> _delegate;
    UILabel *_emailCountLable;
    NSString *_title;
    NSString *_leftBtTitle;
    NSString *_rightBtTitle;
}

@property(copy, nonatomic) NSString *rightBtTitle; // @synthesize rightBtTitle=_rightBtTitle;
@property(copy, nonatomic) NSString *leftBtTitle; // @synthesize leftBtTitle=_leftBtTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *emailCountLable; // @synthesize emailCountLable=_emailCountLable;
@property(nonatomic) __weak id <SFEmailViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long emailViewType; // @synthesize emailViewType=_emailViewType;
@property(retain, nonatomic) NSString *unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) SFCustomTextField *emailPwdTF; // @synthesize emailPwdTF=_emailPwdTF;
@property(retain, nonatomic) SFCustomTextField *emailNameTF; // @synthesize emailNameTF=_emailNameTF;
- (void).cxx_destruct;
- (_Bool)validateEmail:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)hideAnimation;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)shakeToShow:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)show;
- (void)creatUI;
- (id)initViewWithEmailViewType:(long long)arg1 title:(id)arg2 leftButtonTitle:(id)arg3 rightButtonTitle:(id)arg4 delegate:(id)arg5;

@end

