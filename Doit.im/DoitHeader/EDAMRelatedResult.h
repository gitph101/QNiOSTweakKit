//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSArray;

@interface EDAMRelatedResult : FATObject
{
    NSArray *_notes;
    NSArray *_notebooks;
    NSArray *_tags;
    NSArray *_containingNotebooks;
    NSArray *_experts;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSArray *experts; // @synthesize experts=_experts;
@property(retain, nonatomic) NSArray *containingNotebooks; // @synthesize containingNotebooks=_containingNotebooks;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *notebooks; // @synthesize notebooks=_notebooks;
@property(retain, nonatomic) NSArray *notes; // @synthesize notes=_notes;
- (void).cxx_destruct;

@end

