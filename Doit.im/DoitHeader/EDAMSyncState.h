//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSNumber;

@interface EDAMSyncState : FATObject
{
    NSNumber *_currentTime;
    NSNumber *_fullSyncBefore;
    NSNumber *_updateCount;
    NSNumber *_uploaded;
    NSNumber *_userLastUpdated;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *userLastUpdated; // @synthesize userLastUpdated=_userLastUpdated;
@property(retain, nonatomic) NSNumber *uploaded; // @synthesize uploaded=_uploaded;
@property(retain, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) NSNumber *fullSyncBefore; // @synthesize fullSyncBefore=_fullSyncBefore;
@property(retain, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;
- (void).cxx_destruct;

@end
