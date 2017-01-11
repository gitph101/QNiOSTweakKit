//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SouFunIMChatListModel : NSObject
{
    int _order;
    NSString *_messageID;
    NSString *_messageType;
    NSString *_messageTitle;
    NSString *_message;
    NSString *_messagePicNameOrUrl;
    NSString *_messageCount;
    NSDate *_messageTime;
    NSString *_draft;
    NSString *_remark;
    NSString *_tag;
    NSString *_msgContent;
    NSString *_focusPeople;
}

@property(retain, nonatomic) NSString *focusPeople; // @synthesize focusPeople=_focusPeople;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) int order; // @synthesize order=_order;
@property(copy, nonatomic) NSDate *messageTime; // @synthesize messageTime=_messageTime;
@property(copy, nonatomic) NSString *messageCount; // @synthesize messageCount=_messageCount;
@property(copy, nonatomic) NSString *messagePicNameOrUrl; // @synthesize messagePicNameOrUrl=_messagePicNameOrUrl;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end
