//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIMElem.h"

@class NSArray;

@interface TIMSNSSystemElem : TIMElem
{
    long long type;
    NSArray *users;
    unsigned long long pendencyReportTimestamp;
    unsigned long long recommendReportTimestamp;
    unsigned long long decideReportTimestamp;
}

@property(nonatomic) unsigned long long decideReportTimestamp; // @synthesize decideReportTimestamp;
@property(nonatomic) unsigned long long recommendReportTimestamp; // @synthesize recommendReportTimestamp;
@property(nonatomic) unsigned long long pendencyReportTimestamp; // @synthesize pendencyReportTimestamp;
@property(retain, nonatomic) NSArray *users; // @synthesize users;
@property(nonatomic) long long type; // @synthesize type;
- (void).cxx_destruct;
- (id)description;

@end
