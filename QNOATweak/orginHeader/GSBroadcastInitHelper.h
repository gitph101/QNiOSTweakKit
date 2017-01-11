//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GSBroadcastInitHelper : NSObject
{
    long long mFetchSuccessRole;
    NSString *service;
    _Bool gliveFlag;
    long long joinPermission;
    _Bool oldVersion;
    NSString *token;
    _Bool _needsValidateCustomUserID;
    NSString *_domain;
    long long _serviceType;
    NSString *_loginName;
    NSString *_loginPWD;
    NSString *_nickName;
    NSString *_watchPWD;
    long long _customUserID;
    id <GSBroadcastInitHelperDelegate> _delegate;
}

@property(nonatomic) __weak id <GSBroadcastInitHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool needsValidateCustomUserID; // @synthesize needsValidateCustomUserID=_needsValidateCustomUserID;
@property(nonatomic) long long customUserID; // @synthesize customUserID=_customUserID;
@property(copy, nonatomic) NSString *watchPWD; // @synthesize watchPWD=_watchPWD;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *loginPWD; // @synthesize loginPWD=_loginPWD;
@property(copy, nonatomic) NSString *loginName; // @synthesize loginName=_loginName;
@property(nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)allRolesTrytoAccess:(id)arg1;
- (void)attendeeRoleAccess:(id)arg1;
- (void)orgnizerRoleAccess:(id)arg1;
- (id)generateParamsStringFromDictionary:(id)arg1;
- (id)generateDicFrom:(id)arg1;
- (void)fetchBroadcastInitParamWithWebcastID:(id)arg1;
- (void)fetchBroadcastInitParamWithRoomNumber:(id)arg1;
- (id)initWithBroadcastConnectingInfo:(id)arg1;

@end
