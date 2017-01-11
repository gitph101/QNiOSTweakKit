//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIObject.h"

#import "NSCopying.h"

@class NSDate, NSString;

@interface SubTask : DIObject <NSCopying>
{
    _Bool _dataUpdated;
    NSString *_title;
    NSString *_taskId;
    NSString *_repeatNo;
    NSDate *_hidden;
}

@property(nonatomic) _Bool dataUpdated; // @synthesize dataUpdated=_dataUpdated;
@property(copy, nonatomic) NSDate *hidden; // @synthesize hidden=_hidden;
@property(copy, nonatomic) NSString *repeatNo; // @synthesize repeatNo=_repeatNo;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)reloadPosition;
- (id)description;
- (id)toDictionary;
- (id)initWithDictionay:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isSubTask;

@end

