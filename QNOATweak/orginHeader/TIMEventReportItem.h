//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TIMEventReportItem : NSObject
{
    unsigned int event;
    unsigned int code;
    unsigned int delay;
    NSString *desc;
}

@property(nonatomic) unsigned int delay; // @synthesize delay;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) unsigned int code; // @synthesize code;
@property(nonatomic) unsigned int event; // @synthesize event;
- (void).cxx_destruct;

@end

