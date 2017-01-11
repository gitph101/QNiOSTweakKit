//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "SFGlobalAlertViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, ResponseItem, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface SFLoginViewController : BaseViewController <UITextFieldDelegate, SFGlobalAlertViewDelegate>
{
    UIView *_contentView;
    UIImageView *_loginBackgroundImgview;
    UIView *_enterUserInfoBackgroundView;
    UIView *_userNameBgView;
    UILabel *_userNameLabel;
    UIView *_pwdBgView;
    UILabel *_userNamePlaceHolderLabel;
    UITextField *_userNameTF;
    UIView *_userNameBottomLine;
    UITextField *_passwordTF;
    UILabel *_passwordLabel;
    UIView *_passwordBottomLine;
    UILabel *_passwordPlaceHolderLabel;
    UIButton *_loginButton;
    UIImageView *_soufunLogoImgView;
    UILabel *_AppTypeLable;
    NSString *_dynamicCode;
    ResponseItem *_loginResponseItem;
    NSString *_userName;
}

@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) ResponseItem *loginResponseItem; // @synthesize loginResponseItem=_loginResponseItem;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
@property(retain, nonatomic) UILabel *AppTypeLable; // @synthesize AppTypeLable=_AppTypeLable;
@property(retain, nonatomic) UIImageView *soufunLogoImgView; // @synthesize soufunLogoImgView=_soufunLogoImgView;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UILabel *passwordPlaceHolderLabel; // @synthesize passwordPlaceHolderLabel=_passwordPlaceHolderLabel;
@property(retain, nonatomic) UIView *passwordBottomLine; // @synthesize passwordBottomLine=_passwordBottomLine;
@property(retain, nonatomic) UILabel *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(retain, nonatomic) UITextField *passwordTF; // @synthesize passwordTF=_passwordTF;
@property(retain, nonatomic) UIView *userNameBottomLine; // @synthesize userNameBottomLine=_userNameBottomLine;
@property(retain, nonatomic) UITextField *userNameTF; // @synthesize userNameTF=_userNameTF;
@property(retain, nonatomic) UILabel *userNamePlaceHolderLabel; // @synthesize userNamePlaceHolderLabel=_userNamePlaceHolderLabel;
@property(retain, nonatomic) UIView *pwdBgView; // @synthesize pwdBgView=_pwdBgView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIView *userNameBgView; // @synthesize userNameBgView=_userNameBgView;
@property(retain, nonatomic) UIView *enterUserInfoBackgroundView; // @synthesize enterUserInfoBackgroundView=_enterUserInfoBackgroundView;
@property(retain, nonatomic) UIImageView *loginBackgroundImgview; // @synthesize loginBackgroundImgview=_loginBackgroundImgview;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)showNetworkError:(id)arg1;
- (void)createTokenByRequestToServerWithLoginResponseItem:(id)arg1;
- (void)sendUserDeviceChangenamicpwdFailWithItem:(id)arg1;
- (void)dynamicWithUserInfoInterfaceFailResponse:(id)arg1;
- (void)userInfoWithDeviceChangSuccessResponse:(id)arg1;
- (void)sendUserDeviceChangeDynamicpwdSuccessWithItem:(id)arg1;
- (void)sendUserNeedVerifyDynamicpwdFailWithItem:(id)arg1;
- (void)sendUserInfoNeedVerifyDynamicpwdSuccessWithItem:(id)arg1;
- (void)sendUserNeedVerifyDynamicpwdSuccessWithItem:(id)arg1;
- (void)sendUserInfoWithDisDynamicFailWithItem:(id)arg1;
- (void)sendUserInfoWithDisDynamicSuccessWithItem:(id)arg1;
- (void)sendLoginRequestFailSetUtilityWithLoginResponseItem:(id)arg1;
- (void)sendLoginRequestFailWithItem:(id)arg1;
- (void)sendUserDynamicpwdFailWithItem:(id)arg1;
- (void)sendUserUserInfoDynamicpwdSuccessWithItem:(id)arg1;
- (void)sendUserDynamicpwdSuccessWithItem:(id)arg1;
- (void)setCommonUtility;
- (void)sendUserInfoRequestFailWithItem:(id)arg1;
- (void)sendUserInfoRequestSuccessWithItem:(id)arg1;
- (void)reloadRootViewInterface;
- (void)sendLoginRequestSuccessWithItem:(id)arg1;
- (void)sendLoginRequest;
- (void)loginEvent:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)customUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

