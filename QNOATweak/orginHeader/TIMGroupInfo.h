//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIMCodingModel.h"

@class NSDictionary, NSString, TIMGroupSelfInfo, TIMMessage;

@interface TIMGroupInfo : TIMCodingModel
{
    NSString *group;
    NSString *groupName;
    NSString *groupType;
    NSString *owner;
    unsigned int createTime;
    unsigned int lastInfoTime;
    unsigned int lastMsgTime;
    unsigned int maxMemberNum;
    unsigned int memberNum;
    long long addOpt;
    NSString *notification;
    NSString *introduction;
    NSString *faceURL;
    TIMMessage *lastMsg;
    unsigned int onlineMemberNum;
    long long isSearchable;
    long long isMemberVisible;
    TIMGroupSelfInfo *selfInfo;
    NSDictionary *customInfo;
}

@property(retain, nonatomic) NSDictionary *customInfo; // @synthesize customInfo;
@property(retain, nonatomic) TIMGroupSelfInfo *selfInfo; // @synthesize selfInfo;
@property(retain, nonatomic) TIMMessage *lastMsg; // @synthesize lastMsg;
@property(retain, nonatomic) NSString *faceURL; // @synthesize faceURL;
@property(retain, nonatomic) NSString *introduction; // @synthesize introduction;
@property(retain, nonatomic) NSString *notification; // @synthesize notification;
@property(nonatomic) long long isSearchable; // @synthesize isSearchable;
@property(nonatomic) long long isMemberVisible; // @synthesize isMemberVisible;
@property(nonatomic) unsigned int onlineMemberNum; // @synthesize onlineMemberNum;
@property(nonatomic) long long addOpt; // @synthesize addOpt;
@property(nonatomic) unsigned int memberNum; // @synthesize memberNum;
@property(nonatomic) unsigned int maxMemberNum; // @synthesize maxMemberNum;
@property(nonatomic) unsigned int lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) unsigned int lastInfoTime; // @synthesize lastInfoTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *owner; // @synthesize owner;
@property(retain, nonatomic) NSString *groupType; // @synthesize groupType;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName;
@property(retain, nonatomic) NSString *group; // @synthesize group;
- (void).cxx_destruct;
- (int)initWithIMCoreGroupDetailInfo:(struct GroupDetailInfo)arg1;
- (int)initWithIMCoreGroupCacheInfo:(struct GroupCacheInfo)arg1;
- (id)description;

@end

