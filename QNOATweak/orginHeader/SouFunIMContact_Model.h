//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SouFunIMContact_Model : NSObject
{
    NSString *checked;
    _Bool _isDelete;
    NSString *_key;
    NSString *_userID;
    NSString *_userName;
    NSString *_nickName;
    NSString *_userPotrait;
    NSString *_online;
    NSString *_company;
    NSString *_tel;
    NSString *_district;
    NSString *_comarea;
    NSString *_city;
    NSString *_platform;
    NSString *_contactGroupName;
    NSString *_myName;
    NSString *_registDate;
    NSString *_jobSkill;
    NSString *_interest;
    NSString *_motto;
    NSString *_isworkmate;
    NSString *_userType;
    NSString *_departmentName;
    NSString *_soufunId;
    NSString *_soufunName;
    NSString *_logoUrl;
    NSString *_cityName;
    NSString *_orgName;
    NSString *_phone;
    NSString *_trueName;
    NSString *_introduction;
    NSString *_remark;
    NSString *_focusPeople;
}

+ (void)requestSearchResult:(id)arg1 start:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *focusPeople; // @synthesize focusPeople=_focusPeople;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction=_introduction;
@property(retain, nonatomic) NSString *trueName; // @synthesize trueName=_trueName;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *soufunName; // @synthesize soufunName=_soufunName;
@property(retain, nonatomic) NSString *soufunId; // @synthesize soufunId=_soufunId;
@property(retain, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *isworkmate; // @synthesize isworkmate=_isworkmate;
@property(retain, nonatomic) NSString *motto; // @synthesize motto=_motto;
@property(retain, nonatomic) NSString *interest; // @synthesize interest=_interest;
@property(retain, nonatomic) NSString *jobSkill; // @synthesize jobSkill=_jobSkill;
@property(retain, nonatomic) NSString *registDate; // @synthesize registDate=_registDate;
@property(retain, nonatomic) NSString *myName; // @synthesize myName=_myName;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) NSString *contactGroupName; // @synthesize contactGroupName=_contactGroupName;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *comarea; // @synthesize comarea=_comarea;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
@property(retain, nonatomic) NSString *online; // @synthesize online=_online;
@property(retain, nonatomic) NSString *userPotrait; // @synthesize userPotrait=_userPotrait;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end
