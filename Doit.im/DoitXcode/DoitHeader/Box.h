//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DIObject.h"

@class NSString;

@interface Box : DIObject
{
    _Bool _hidden;
    int _type;
    NSString *_groupBy;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *groupBy; // @synthesize groupBy=_groupBy;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isBoxType:(int)arg1;
- (id)toDictionary;
- (id)initWithDictionay:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isBox;

@end

