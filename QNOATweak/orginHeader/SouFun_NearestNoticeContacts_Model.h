//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SouFun_NearestNoticeContacts_Model : NSObject
{
    NSString *_contactID;
    NSString *_contactName;
    NSString *_type;
    NSString *_contactPic;
    NSString *_msgContent;
    NSString *_userName;
}

@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(retain, nonatomic) NSString *contactPic; // @synthesize contactPic=_contactPic;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) NSString *contactID; // @synthesize contactID=_contactID;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;

@end

