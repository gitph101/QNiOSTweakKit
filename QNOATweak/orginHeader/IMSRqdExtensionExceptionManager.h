//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RqdNetRequestDelegate.h"

@class IMSRqdExtensionSandboxManager, IMSRqdNetRequest, NSMutableArray, NSString;

@interface IMSRqdExtensionExceptionManager : NSObject <RqdNetRequestDelegate>
{
    _Bool _uploading;
    _Bool _wcsessionExist;
    NSString *_appGroupIdentifier;
    IMSRqdExtensionSandboxManager *_sandboxManager;
    NSMutableArray *_uploadingFiles;
    IMSRqdNetRequest *_httpRequest;
}

+ (id)sharedManager;
@property(retain, nonatomic) IMSRqdNetRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
@property(nonatomic) _Bool wcsessionExist; // @synthesize wcsessionExist=_wcsessionExist;
@property(retain, nonatomic) NSMutableArray *uploadingFiles; // @synthesize uploadingFiles=_uploadingFiles;
@property(retain, nonatomic) IMSRqdExtensionSandboxManager *sandboxManager; // @synthesize sandboxManager=_sandboxManager;
@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(copy, nonatomic) NSString *appGroupIdentifier; // @synthesize appGroupIdentifier=_appGroupIdentifier;
- (void).cxx_destruct;
- (void)handleWatchKitExtensionRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)failWithResponse:(id)arg1 reqPkg:(id)arg2;
- (void)finishWithResponse:(id)arg1 reqPkg:(id)arg2;
- (_Bool)deleteAllExceptions;
- (id)allExceptions;
- (id)exceptionFromFileURL:(id)arg1;
- (_Bool)saveException:(id)arg1;
- (void)upload:(id)arg1 bundleid:(id)arg2;
- (void)checkAndUpload;
- (id)packetExtraValues:(id)arg1;
- (id)packageDataWithException:(id)arg1;
@property(readonly, nonatomic, getter=isAppGroupAvailable) _Bool appGroupAvailable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

