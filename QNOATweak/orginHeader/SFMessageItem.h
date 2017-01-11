//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SFMessageItem : NSObject
{
    NSString *_msgID;
    NSString *_title;
    NSString *_date;
    NSString *_msgDescription;
    NSString *_noticeLevel;
    NSString *_isRead;
    NSString *_upId;
    NSString *_downId;
    NSString *_hasProcess;
    NSString *_link;
    NSArray *_recipientArray;
}

@property(retain, nonatomic) NSArray *recipientArray; // @synthesize recipientArray=_recipientArray;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *hasProcess; // @synthesize hasProcess=_hasProcess;
@property(retain, nonatomic) NSString *downId; // @synthesize downId=_downId;
@property(retain, nonatomic) NSString *upId; // @synthesize upId=_upId;
@property(retain, nonatomic) NSString *isRead; // @synthesize isRead=_isRead;
@property(retain, nonatomic) NSString *noticeLevel; // @synthesize noticeLevel=_noticeLevel;
@property(retain, nonatomic) NSString *msgDescription; // @synthesize msgDescription=_msgDescription;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID=_msgID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
