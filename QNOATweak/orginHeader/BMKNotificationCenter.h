//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter;

@interface BMKNotificationCenter : NSObject
{
    NSNotificationCenter *_center;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSNotificationCenter *center; // @synthesize center=_center;
- (id)defaultCenter;
- (id)init;
- (id)autorelease;
- (void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

