//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableData, NSString, Wtlogin64_WloginErrInfo, Wtlogin64_WloginMbPhoneInfo, Wtlogin64_WloginUserInfo;

@protocol Wtlogin64_WloginCallbackProtocol <NSObject>
- (void)SmsVerifyLoginFailed:(int)arg1 withErrInfo:(Wtlogin64_WloginErrInfo *)arg2 tag:(int)arg3;
- (void)SmsCodeSuccessBySmsVerifyLogin:(int)arg1;
- (void)inputSmsCodeErrorBySmsVerifyLogin:(Wtlogin64_WloginErrInfo *)arg1 tag:(int)arg2;
- (void)inputSmsCodeBySmsVerifyLogin:(unsigned short)arg1 andTimeout:(unsigned short)arg2 andMsg:(NSString *)arg3 andRefreshFlag:(int)arg4 tag:(int)arg5;
- (void)inputSmsCodeError:(Wtlogin64_WloginErrInfo *)arg1 tag:(int)arg2;
- (void)inputSmsCode:(Wtlogin64_WloginMbPhoneInfo *)arg1 tag:(int)arg2;
- (void)refreshPictureSucc:(NSData *)arg1 wording:(NSDictionary *)arg2 tag:(int)arg3;
- (void)showPicture:(NSData *)arg1 wording:(NSDictionary *)arg2 tag:(int)arg3;
- (void)loginFailed:(int)arg1 withErrInfo:(Wtlogin64_WloginErrInfo *)arg2 tag:(int)arg3;
- (void)loginSuccessSig:(NSMutableArray *)arg1 andBaseInfo:(Wtlogin64_WloginUserInfo *)arg2 andPasswdSig:(NSMutableData *)arg3 tag:(int)arg4;

@optional
- (void)showPicture:(NSData *)arg1;
- (void)loginFailed:(int)arg1 withMsg:(NSString *)arg2;
@end

