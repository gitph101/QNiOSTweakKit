//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UITextFieldDelegate.h"

@class NSString, NSTimer, UIButton, UILabel, UITextField, UIView;

@interface SFVerifyViewController : BaseViewController <UITextFieldDelegate>
{
    NSTimer *_timer;
    int _interval;
    UILabel *_telephoneNumLabel;
    UIButton *_getVerifyButton;
    UIView *_verifyBgview;
    UILabel *_placeHolderLabel;
    UITextField *_verifyTextField;
    UIButton *_verifyButton;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *verifyButton; // @synthesize verifyButton=_verifyButton;
@property(retain, nonatomic) UITextField *verifyTextField; // @synthesize verifyTextField=_verifyTextField;
@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIView *verifyBgview; // @synthesize verifyBgview=_verifyBgview;
@property(retain, nonatomic) UIButton *getVerifyButton; // @synthesize getVerifyButton=_getVerifyButton;
@property(retain, nonatomic) UILabel *telephoneNumLabel; // @synthesize telephoneNumLabel=_telephoneNumLabel;
- (void).cxx_destruct;
- (void)setUserInterface;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)timerCountdownDisplay:(id)arg1;
- (void)timerCountdown:(id)arg1;
- (void)timerStop;
- (void)timerStart;
- (void)sendVerifyRequestFailWithItem:(id)arg1;
- (void)sendVerifyRequestSuccessWithItem:(id)arg1;
- (void)verifyEvent:(id)arg1;
- (void)sendMailVerifyCodeRequestFailWithItem:(id)arg1;
- (void)sendMailVerifyCodeRequestSuccessWithItem:(id)arg1;
- (void)requestMailVerifyCode;
- (void)sendVerifyCodeRequestFailWithItem:(id)arg1;
- (void)sendVerifyCodeRequestSuccessWithItem:(id)arg1;
- (void)requestPhoneVerifyCode;
- (void)requestVerifyCodeEvent:(id)arg1;
- (void)BackFoward;
- (void)backEvent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)constructMailText;
- (id)constructPhoneNumber:(id)arg1;
- (void)viewDidLoad;
- (id)initWithType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

