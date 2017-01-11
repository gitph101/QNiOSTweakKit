//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSTimer;

@interface UserItem : NSObject
{
    int _interval;
    _Bool _isLogined;
    _Bool _IMPushNotice;
    _Bool _TodoPushNotice;
    NSString *_userID;
    NSString *_loginType;
    NSString *_status;
    NSString *_information;
    NSString *_loginId;
    NSString *_numOfUnreadMsg;
    NSString *_job;
    NSString *_type;
    NSString *_showLevel;
    NSString *_subCompanyName;
    NSString *_departmentName;
    NSString *_city;
    NSString *_certificatenum;
    NSString *_imgUrl;
    NSString *_token;
    NSString *_tempToken;
    NSString *_email;
    NSString *_userName;
    NSString *_departmentId;
    NSString *_companyId;
    NSString *_phoneNumber;
    NSString *_myQRcode;
    NSString *_NEWOFFICEID;
    NSString *_pctoken;
    NSString *_fangid;
    NSString *_showAskLeavingFlag;
    NSString *_isLimitCode;
    NSString *_isLimitMsg;
    NSString *_ruleurl;
    NSString *_iscall;
    NSDictionary *_signInScope;
    long long _Todonumber;
    NSString *_sessionID;
    NSTimer *_timer;
    NSString *_processID;
    NSString *_nextRequestIds;
    NSString *_todonum;
    NSString *_actionId;
    NSString *_dynamicpwd;
    long long _todoRemindCycle;
    long long _wfundotype;
    long long _nightharass;
    long long _userType;
}

+ (id)sharedInstance;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) long long nightharass; // @synthesize nightharass=_nightharass;
@property(nonatomic) long long wfundotype; // @synthesize wfundotype=_wfundotype;
@property(nonatomic) long long todoRemindCycle; // @synthesize todoRemindCycle=_todoRemindCycle;
@property(retain, nonatomic) NSString *dynamicpwd; // @synthesize dynamicpwd=_dynamicpwd;
@property(retain, nonatomic) NSString *actionId; // @synthesize actionId=_actionId;
@property(retain, nonatomic) NSString *todonum; // @synthesize todonum=_todonum;
@property(retain, nonatomic) NSString *nextRequestIds; // @synthesize nextRequestIds=_nextRequestIds;
@property(retain, nonatomic) NSString *processID; // @synthesize processID=_processID;
@property(nonatomic) _Bool TodoPushNotice; // @synthesize TodoPushNotice=_TodoPushNotice;
@property(nonatomic) _Bool IMPushNotice; // @synthesize IMPushNotice=_IMPushNotice;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) long long Todonumber; // @synthesize Todonumber=_Todonumber;
@property(retain, nonatomic) NSDictionary *signInScope; // @synthesize signInScope=_signInScope;
- (void).cxx_destruct;
- (void)sendUserInfoRequestFailWithItem:(id)arg1;
- (void)sendUserInfoRequestSuccessWithItem:(id)arg1;
- (void)timerCountdown:(id)arg1;
- (void)timerStop;
- (void)timerStart;
@property(copy, nonatomic) NSString *showAskLeavingFlag; // @synthesize showAskLeavingFlag=_showAskLeavingFlag;
@property(nonatomic) _Bool isLogined; // @synthesize isLogined=_isLogined;
@property(retain, nonatomic) NSString *myQRcode; // @synthesize myQRcode=_myQRcode;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) NSString *companyId; // @synthesize companyId=_companyId;
@property(retain, nonatomic) NSString *showLevel; // @synthesize showLevel=_showLevel;
@property(retain, nonatomic) NSString *departmentId; // @synthesize departmentId=_departmentId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *fangid; // @synthesize fangid=_fangid;
@property(retain, nonatomic) NSString *tempToken; // @synthesize tempToken=_tempToken;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(retain, nonatomic) NSString *pctoken; // @synthesize pctoken=_pctoken;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
@property(retain, nonatomic) NSString *subCompanyName; // @synthesize subCompanyName=_subCompanyName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *job; // @synthesize job=_job;
@property(retain, nonatomic) NSString *numOfUnreadMsg; // @synthesize numOfUnreadMsg=_numOfUnreadMsg;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *certificatenum; // @synthesize certificatenum=_certificatenum;
@property(retain, nonatomic) NSString *information; // @synthesize information=_information;
@property(retain, nonatomic) NSString *NEWOFFICEID; // @synthesize NEWOFFICEID=_NEWOFFICEID;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *loginType; // @synthesize loginType=_loginType;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *ruleurl; // @synthesize ruleurl=_ruleurl;
@property(retain, nonatomic) NSString *isLimitMsg; // @synthesize isLimitMsg=_isLimitMsg;
@property(retain, nonatomic) NSString *isLimitCode; // @synthesize isLimitCode=_isLimitCode;
@property(retain, nonatomic) NSString *iscall; // @synthesize iscall=_iscall;
- (void)setWorkflowIdWithDictionary:(id)arg1;
- (void)setLogintypeWithDict:(id)arg1;
- (void)setCloseDynamicContentItemsWithDictionary:(id)arg1;
- (void)setDynamicContentItemsWithDictionary:(id)arg1;
- (_Bool)isAvailableWithObject:(id)arg1;
- (void)setContentItemsWithDictionary:(id)arg1;
- (id)init;

@end
