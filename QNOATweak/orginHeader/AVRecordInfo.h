//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface AVRecordInfo : NSObject
{
    NSString *fileName;
    NSArray *tags;
    unsigned int classId;
    long long avSdkType;
    _Bool isTransCode;
    _Bool isScreenShot;
    _Bool isWaterMark;
    long long recordType;
}

@property(nonatomic) long long recordType; // @synthesize recordType;
@property(nonatomic) _Bool isWaterMark; // @synthesize isWaterMark;
@property(nonatomic) _Bool isScreenShot; // @synthesize isScreenShot;
@property(nonatomic) _Bool isTransCode; // @synthesize isTransCode;
@property(nonatomic) long long avSdkType; // @synthesize avSdkType;
@property(nonatomic) unsigned int classId; // @synthesize classId;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName;
- (void).cxx_destruct;

@end

