//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface BMKDistrictResult : NSObject
{
    long long _code;
    NSString *_name;
    NSArray *_paths;
    CDStruct_2c43369c _center;
}

@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(nonatomic) CDStruct_c3b9c2ee center; // @synthesize center=_center;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)init;

@end

