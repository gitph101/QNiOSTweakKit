//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GTMSystemVersion : NSObject
{
}

+ (id)runtimeArchitecture;
+ (_Bool)isBuildEqualTo:(id)arg1;
+ (_Bool)isBuildGreaterThanOrEqualTo:(id)arg1;
+ (_Bool)isBuildGreaterThan:(id)arg1;
+ (_Bool)isBuildLessThanOrEqualTo:(id)arg1;
+ (_Bool)isBuildLessThan:(id)arg1;
+ (id)build;
+ (void)getMajor:(int *)arg1 minor:(int *)arg2 bugFix:(int *)arg3;
+ (void)initialize;

@end
