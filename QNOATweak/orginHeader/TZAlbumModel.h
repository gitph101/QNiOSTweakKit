//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TZAlbumModel : NSObject
{
    NSString *_name;
    long long _count;
    id _result;
    NSArray *_models;
    NSArray *_selectedModels;
    unsigned long long _selectedCount;
}

@property(nonatomic) unsigned long long selectedCount; // @synthesize selectedCount=_selectedCount;
@property(retain, nonatomic) NSArray *selectedModels; // @synthesize selectedModels=_selectedModels;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) id result; // @synthesize result=_result;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)checkSelectedModels;

@end

