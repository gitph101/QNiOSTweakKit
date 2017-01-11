//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSString;

@interface SouFun_MessageBox_YJLY_YZWT : NSManagedObject
{
}

+ (void)updateNoitceMsgCount:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)getMessageByMessageID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)updateDraftByMessageID:(id)arg1 WithDraft:(id)arg2 inManagedObjectContext:(id)arg3;
+ (_Bool)isMessageListExistWithMessageId:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)searchMessageBoxWithResultArray:(id)arg1 WithConditionDic:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)deleteAllTheDataBaseInManagedObjectContext:(id)arg1;
+ (void)updateCustomerName:(id)arg1 WithMessageID:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)updateCallAgentData:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)updateMessageStatus:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)updateCallAgentMessageCount:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)updateMessageInfo:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)getMessageList:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)getNewMessageList:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)insertNewMessageListInfo:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)updateMessageListInfo:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)removeMessageByCondition:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)insertNewMessage:(id)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *area; // @dynamic area;
@property(retain, nonatomic) NSString *areaRange; // @dynamic areaRange;
@property(retain, nonatomic) NSString *areaType; // @dynamic areaType;
@property(retain, nonatomic) NSString *comarea; // @dynamic comarea;
@property(retain, nonatomic) NSString *customerName; // @dynamic customerName;
@property(retain, nonatomic) NSString *delegateType; // @dynamic delegateType;
@property(retain, nonatomic) NSString *district; // @dynamic district;
@property(retain, nonatomic) NSString *draft; // @dynamic draft;
@property(retain, nonatomic) NSString *focusPeople; // @dynamic focusPeople;
@property(retain, nonatomic) NSString *hall; // @dynamic hall;
@property(retain, nonatomic) NSString *houseID; // @dynamic houseID;
@property(retain, nonatomic) NSString *houseTitle; // @dynamic houseTitle;
@property(retain, nonatomic) NSString *messageCount; // @dynamic messageCount;
@property(retain, nonatomic) NSString *messageDesc; // @dynamic messageDesc;
@property(retain, nonatomic) NSString *messageID; // @dynamic messageID;
@property(retain, nonatomic) NSString *messagePicName; // @dynamic messagePicName;
@property(retain, nonatomic) NSDate *messageTime; // @dynamic messageTime;
@property(retain, nonatomic) NSString *messageType; // @dynamic messageType;
@property(retain, nonatomic) NSString *msgContent; // @dynamic msgContent;
@property(retain, nonatomic) NSString *myID; // @dynamic myID;
@property(nonatomic) int order; // @dynamic order;
@property(retain, nonatomic) NSString *price; // @dynamic price;
@property(retain, nonatomic) NSString *priceRange; // @dynamic priceRange;
@property(retain, nonatomic) NSString *priceType; // @dynamic priceType;
@property(retain, nonatomic) NSString *projname; // @dynamic projname;
@property(retain, nonatomic) NSString *room; // @dynamic room;
@property(retain, nonatomic) NSString *toilet; // @dynamic toilet;
@property(retain, nonatomic) NSString *unique; // @dynamic unique;

@end
