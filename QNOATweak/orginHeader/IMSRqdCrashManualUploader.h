//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSRqdCrashManualUploader : NSObject
{
}

+ (id)sharedInstance;
- (_Bool)isUploadCrashAllowed:(id)arg1;
- (_Bool)uploadCrashDatas:(id)arg1 withBundleId:(id)arg2 bundleVer:(id)arg3 delegate:(id)arg4;

@end

