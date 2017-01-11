//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIObject.h"

@class FilterCondition, NSString;

@interface Filter : DIObject
{
    NSString *_title;
    NSString *_groupBy;
    NSString *_orderBy;
    FilterCondition *_condition;
    NSString *_conditionJsonString;
}

@property(copy, nonatomic) NSString *conditionJsonString; // @synthesize conditionJsonString=_conditionJsonString;
@property(retain, nonatomic) FilterCondition *condition; // @synthesize condition=_condition;
@property(copy, nonatomic) NSString *orderBy; // @synthesize orderBy=_orderBy;
@property(copy, nonatomic) NSString *groupBy; // @synthesize groupBy=_groupBy;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (id)getSortDesctripters;
- (_Bool)isItemCompatibleWithFilter:(id)arg1;
- (_Bool)isDate:(id)arg1 compatibleWithCondition:(id)arg2;
- (id)toDictionary;
- (id)initWithDictionay:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isFilter;

@end

