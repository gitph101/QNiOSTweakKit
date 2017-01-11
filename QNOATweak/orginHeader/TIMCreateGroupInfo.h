//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIMCodingModel.h"

@class NSArray, NSDictionary, NSString;

@interface TIMCreateGroupInfo : TIMCodingModel
{
    _Bool setAddOpt;
    unsigned int maxMemberNum;
    NSString *group;
    NSString *groupName;
    NSString *groupType;
    long long addOpt;
    NSString *notification;
    NSString *introduction;
    NSString *faceURL;
    NSDictionary *customInfo;
    NSArray *membersInfo;
}

@property(retain, nonatomic) NSArray *membersInfo; // @synthesize membersInfo;
@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo;
@property(retain, nonatomic) NSString *faceURL; // @synthesize faceURL;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction;
@property(retain, nonatomic) NSString *notification; // @synthesize notification;
@property(nonatomic) unsigned int maxMemberNum; // @synthesize maxMemberNum;
@property(nonatomic) long long addOpt; // @synthesize addOpt;
@property(nonatomic) _Bool setAddOpt; // @synthesize setAddOpt;
@property(retain, nonatomic) NSString *groupType; // @synthesize groupType;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName;
@property(retain, nonatomic) NSString *group; // @synthesize group;
- (void).cxx_destruct;

@end

