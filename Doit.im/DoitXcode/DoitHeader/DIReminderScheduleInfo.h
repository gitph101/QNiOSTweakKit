//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface DIReminderScheduleInfo : NSObject
{
    NSString *_taskId;
    NSString *_taskRepNo;
    NSDate *_fireDate;
    NSDate *_startAt;
    NSString *_title;
    NSString *_info;
}

@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDate *startAt; // @synthesize startAt=_startAt;
@property(copy, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(copy, nonatomic) NSString *taskRepNo; // @synthesize taskRepNo=_taskRepNo;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

