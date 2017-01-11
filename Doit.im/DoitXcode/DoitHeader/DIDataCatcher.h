//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DIDataCatcher : NSObject
{
}

+ (id)sharedInstance;
- (void)onDownloadAvatar:(id)arg1 avatarData:(id)arg2;
- (void)onDownloadAccountInfo:(id)arg1;
- (void)onDownloadAudio:(id)arg1 fileName:(id)arg2;
- (_Bool)onDownloadAudioList:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadDailyReviews:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadGuideTips:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadNotices:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadComments:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadTasks:(id)arg1 updated:(_Bool *)arg2 fromCheckout:(_Bool)arg3;
- (_Bool)onDownloadTags:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadContacts:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadSubTasks:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadContexts:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadGoals:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadProjects:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadFilters:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)onDownloadBoxes:(id)arg1 updated:(_Bool *)arg2;
- (_Bool)catchMixedObjects:(id)arg1 syncResult:(id)arg2 fromCheckout:(_Bool)arg3;

@end
