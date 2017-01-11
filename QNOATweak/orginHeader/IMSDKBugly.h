//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMSRqdPriority;

@interface IMSDKBugly : NSObject
{
    IMSRqdPriority *_priority;
}

+ (void)setSdkConfig:(id)arg1 forKey:(id)arg2;
+ (void)setComponentIdentifier:(id)arg1 version:(id)arg2;
+ (id)sdkVersion;
+ (unsigned long long)convertIMBLYLogLevel:(unsigned long long)arg1;
+ (unsigned long long)convertBLYLogLevel:(unsigned long long)arg1;
+ (void)level:(unsigned long long)arg1 tag:(id)arg2 log:(id)arg3;
+ (void)level:(unsigned long long)arg1 log:(id)arg2;
+ (void)level:(unsigned long long)arg1 logs:(id)arg2;
+ (unsigned long long)logLevel;
+ (void)log:(id)arg1;
+ (void)initLogger:(unsigned long long)arg1 consolePrint:(_Bool)arg2;
+ (void)handleWatchKitExtensionRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (void)reportException:(id)arg1 message:(id)arg2;
+ (void)reportExceptionCategory:(unsigned long long)arg1 name:(id)arg2 reason:(id)arg3 stackTrace:(id)arg4 extraInfo:(id)arg5 terminateApp:(_Bool)arg6;
+ (void)reportException:(id)arg1 reason:(id)arg2 extraInfo:(id)arg3;
+ (void)reportError:(id)arg1 reason:(id)arg2 extraInfo:(id)arg3;
+ (id)allSceneValues;
+ (id)sceneValueForKey:(id)arg1;
+ (void)removeAllSceneValues;
+ (void)removeSceneValueForKey:(id)arg1;
+ (void)setSceneValue:(id)arg1 forKey:(id)arg2;
+ (void)setTagId:(unsigned long long)arg1;
+ (void)setUserIdentifier:(id)arg1;
+ (void)startWithAppId:(id)arg1 config:(id)arg2 applicationGroupIdentifier:(id)arg3;
+ (void)startWithAppId:(id)arg1 config:(id)arg2;
+ (void)startWithAppId:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) IMSRqdPriority *priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)initWithAppId:(id)arg1 config:(id)arg2 appGroups:(id)arg3;
- (void)useDefaultConfig:(id)arg1;
- (_Bool)checkProprity;

@end
