//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIObject.h"

@class NSArray, NSString;

@interface DailyReview : DIObject
{
    NSString *_date;
    long long _rate;
    NSString *_notes;
    NSArray *_tasksReviewInfo;
}

@property(retain, nonatomic) NSArray *tasksReviewInfo; // @synthesize tasksReviewInfo=_tasksReviewInfo;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(nonatomic) long long rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSString *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionay:(id)arg1;
- (_Bool)isDailyPerformance;
- (id)description;

@end

