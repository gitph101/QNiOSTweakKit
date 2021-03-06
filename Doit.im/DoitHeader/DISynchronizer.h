//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DIHttpClientDelegate.h"

@class DISyncResult, NSObject<OS_dispatch_queue>, NSString, UIApplication;

@interface DISynchronizer : NSObject <DIHttpClientDelegate>
{
    NSString *_severName;
    _Bool _timelySynchronize;
    _Bool _syncing;
    _Bool _forceStopSynchronization;
    unsigned long long _backgroundTaskIdentifier;
    NSObject<OS_dispatch_queue> *_syncStateConCurrentReadQueue;
    int _syncState;
    _Bool _logSyncException;
    id <DISynchronizerDelegate> _delegate;
    DISyncResult *_syncResult;
    UIApplication *_application;
}

+ (id)sharedInstance;
@property(nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(nonatomic) _Bool logSyncException; // @synthesize logSyncException=_logSyncException;
@property(retain, nonatomic) DISyncResult *syncResult; // @synthesize syncResult=_syncResult;
@property(nonatomic) id <DISynchronizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isSyncing) _Bool syncing; // @synthesize syncing=_syncing;
- (void).cxx_destruct;
@property(readonly) int syncState; // @dynamic syncState;
- (void)setSyncState:(int)arg1;
- (id)_objectRepresentationFromOpLog:(id)arg1;
- (void)postFeedback:(id)arg1 title:(id)arg2 content:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)resetDoitEmailAddress;
- (_Bool)isCurrentServerMainlandChina;
- (void)switchServer;
@property(readonly, nonatomic) NSString *proFeaturesUrl;
- (void)saveSeverOption;
- (id)helpServerAddress;
@property(readonly, nonatomic) NSString *serverAddress;
@property(copy, nonatomic) NSString *serverName;
- (void)syncTranscationReceipt;
- (_Bool)processIAPResponse:(id)arg1;
- (void)syncExceptionLog;
- (void)nextAsyncPull;
- (void)nextAsyncRequest;
- (void)httpRequestDidFail:(id)arg1;
- (void)httpRequestDidFinish:(id)arg1;
- (void)endBackgroundTask;
- (void)startAndEndBackgroundTask;
- (void)logException:(id)arg1;
- (void)handleFailure:(id)arg1 shouldStopUpload:(_Bool *)arg2;
- (void)handleSuccess:(id)arg1 shouldStopUpload:(_Bool *)arg2;
- (unsigned long long)updateLocalUSNWithResponseUSN:(unsigned long long)arg1;
- (void)finishSynchronize;
- (void)setForceStopSyncFlag:(_Bool)arg1;
- (_Bool)downloadInitialData;
- (_Bool)everDownloadData;
- (void)requestGCalSync;
- (_Bool)startSyncOperationsInBlockingMode;
- (void)startSyncOperations;
- (_Bool)isAutoSyncNetworkAvailable;
- (_Bool)resolveContextDataError:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveTagDataError:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveProjectDataError:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveCommentDataError:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveTaskDataError:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveGoalConflict:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveProjectConflict:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveContextConflict:(id)arg1 remoteData:(id)arg2;
- (_Bool)resolveTagConflict:(id)arg1 remoteData:(id)arg2;
- (_Bool)updateItemsUSNOfBatchOperation:(id)arg1;
- (_Bool)destroyItemsOfBatchOperation:(id)arg1;
- (_Bool)destroyItemOfOperation:(id)arg1;
- (_Bool)destroyItem:(int)arg1 uuid:(id)arg2 extraId:(id)arg3;
- (_Bool)processOperation:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncAudio:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncAudioList:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncDailyReview:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncAvatar:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncGuideTip:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncSubTask:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncGoal:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncNotice:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncComment:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncTask:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)p_syncTaskFind:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncProject:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)p_syncProjectFind:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncContact:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncContext:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncTag:(id)arg1 waitUntilDown:(_Bool)arg2;
- (_Bool)syncFilter:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncBox:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncAccount:(id)arg1 waitUntilDone:(_Bool)arg2;
- (_Bool)syncPull:(id)arg1 waitUntilDown:(_Bool)arg2;
- (id)blockingPullInBackground;
- (id)pullOfCheckout;
- (_Bool)checkout;
- (void)setSyncing:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

