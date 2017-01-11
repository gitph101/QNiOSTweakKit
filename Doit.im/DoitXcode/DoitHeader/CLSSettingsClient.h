//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLSClientBase.h"

@class NSDictionary;

@interface CLSSettingsClient : CLSClientBase
{
    NSDictionary *_SDKKitVersions;
}

@property(copy, nonatomic) NSDictionary *SDKKitVersions; // @synthesize SDKKitVersions=_SDKKitVersions;
- (void)submitEventLogFilesAtPaths:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitInvalidRecordAtPath:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitCLSFileAtPath:(id)arg1 toURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitCLSFileAtPath:(id)arg1 toURL:(id)arg2 asInvalid:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)configureApplicationUsingURL:(id)arg1 asNewApp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeInstallEventKey;
- (id)eventData;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(nonatomic) id <CLSSettingsClientDelegate> delegate;

@end
