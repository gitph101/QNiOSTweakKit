//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SFNotiObjctModel : NSObject
{
    NSString *_permissionName;
    NSString *_permissionType;
    NSString *_colorStr;
}

@property(copy, nonatomic) NSString *colorStr; // @synthesize colorStr=_colorStr;
@property(copy, nonatomic) NSString *permissionType; // @synthesize permissionType=_permissionType;
@property(copy, nonatomic) NSString *permissionName; // @synthesize permissionName=_permissionName;
- (void).cxx_destruct;
- (id)initNotiWithDict:(id)arg1;

@end

