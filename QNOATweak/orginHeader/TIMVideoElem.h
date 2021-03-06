//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TIMElem.h"

@class NSString, TIMSnapshot, TIMVideo;

@interface TIMVideoElem : TIMElem
{
    unsigned int taskId;
    NSString *videoPath;
    TIMVideo *video;
    NSString *snapshotPath;
    TIMSnapshot *snapshot;
    NSString *selfIdentifier;
}

@property(retain, nonatomic) NSString *selfIdentifier; // @synthesize selfIdentifier;
@property(retain, nonatomic) TIMSnapshot *snapshot; // @synthesize snapshot;
@property(retain, nonatomic) NSString *snapshotPath; // @synthesize snapshotPath;
@property(retain, nonatomic) TIMVideo *video; // @synthesize video;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath;
@property(nonatomic) unsigned int taskId; // @synthesize taskId;
- (void).cxx_destruct;
- (unsigned int)getUploadingProgress;
- (id)description;

@end

