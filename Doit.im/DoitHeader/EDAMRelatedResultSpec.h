//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSNumber;

@interface EDAMRelatedResultSpec : FATObject
{
    NSNumber *_maxNotes;
    NSNumber *_maxNotebooks;
    NSNumber *_maxTags;
    NSNumber *_writableNotebooksOnly;
    NSNumber *_includeContainingNotebooks;
    NSNumber *_maxExperts;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *maxExperts; // @synthesize maxExperts=_maxExperts;
@property(retain, nonatomic) NSNumber *includeContainingNotebooks; // @synthesize includeContainingNotebooks=_includeContainingNotebooks;
@property(retain, nonatomic) NSNumber *writableNotebooksOnly; // @synthesize writableNotebooksOnly=_writableNotebooksOnly;
@property(retain, nonatomic) NSNumber *maxTags; // @synthesize maxTags=_maxTags;
@property(retain, nonatomic) NSNumber *maxNotebooks; // @synthesize maxNotebooks=_maxNotebooks;
@property(retain, nonatomic) NSNumber *maxNotes; // @synthesize maxNotes=_maxNotes;
- (void).cxx_destruct;

@end

