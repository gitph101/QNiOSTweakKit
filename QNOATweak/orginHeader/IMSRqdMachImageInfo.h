//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMSRqdMachImageInfo : NSObject
{
    NSString *name;
    NSString *sname;
    unsigned long long base;
    unsigned long long size;
    NSString *uuid;
    NSString *cpu;
    int index;
}

@property(nonatomic) int index; // @synthesize index;
@property(retain, nonatomic) NSString *cpu; // @synthesize cpu;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) unsigned long long size; // @synthesize size;
@property(nonatomic) unsigned long long base; // @synthesize base;
@property(retain, nonatomic) NSString *sname; // @synthesize sname;
@property(retain, nonatomic) NSString *name; // @synthesize name;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)init;

@end
