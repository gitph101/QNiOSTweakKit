//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSFRDMEvent_DecPack : NSObject
{
    NSString *_eventDate;
    int _totalCount;
    int _keyFailCount1;
    int _keyFailCount2;
    int _nullKeyFailCount;
    int _keySuccessCount2;
    long long _saveTime;
    _Bool _hasLoadFile;
}

+ (id)instance;
@property(retain, nonatomic) NSString *eventDate; // @synthesize eventDate=_eventDate;
- (void)saveFile;
- (void)loadFile;
- (void)reportEvent;
- (void)checkSave;
- (void)checkReset;
- (void)checkLoad;
- (void)resetParams:(id)arg1;
- (void)incKeySuccessCount2;
- (void)incNullKeyFailCount;
- (void)incKeyFailCount2;
- (void)incKeyFailCount1;
- (void)incTotalCount;
- (void)dealloc;
- (id)init;

@end

