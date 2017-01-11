//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IMSRqdBundleUtil : NSObject
{
}

+ (_Bool)isTheAppStoreEnvironment;
+ (_Bool)isATSAllowsArbitraryLoads;
+ (_Bool)deleteItemForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 accessibility:(void *)arg5 error:(id *)arg6;
+ (_Bool)storeUsername:(id)arg1 andPassword:(id)arg2 forServiceName:(id)arg3 updateExisting:(_Bool)arg4 error:(id *)arg5;
+ (id)getPasswordForUsername:(id)arg1 andServiceName:(id)arg2 error:(id *)arg3;
+ (id)initWithCoder:(id)arg1 forObject:(id)arg2;
+ (void)encodeWithCoder:(id)arg1 forObject:(id)arg2;
+ (id)getBundleExe;
+ (id)getRDMCIBuildUUID;
+ (id)getBundleShortVer;
+ (id)getBundleVersion;
+ (id)getBundleName;
+ (id)getBundleId;
+ (id)createOpenUdid;
+ (id)getAnaOpenUdid;
+ (void)saveQimei:(id)arg1;
+ (id)getQimei;

@end

