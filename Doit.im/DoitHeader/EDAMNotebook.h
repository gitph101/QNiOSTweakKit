//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class EDAMBusinessNotebook, EDAMNotebookRestrictions, EDAMPublishing, EDAMUser, NSArray, NSNumber, NSString;

@interface EDAMNotebook : FATObject
{
    NSString *_guid;
    NSString *_name;
    NSNumber *_updateSequenceNum;
    NSNumber *_defaultNotebook;
    NSNumber *_serviceCreated;
    NSNumber *_serviceUpdated;
    EDAMPublishing *_publishing;
    NSNumber *_published;
    NSString *_stack;
    NSArray *_sharedNotebookIds;
    NSArray *_sharedNotebooks;
    EDAMBusinessNotebook *_businessNotebook;
    EDAMUser *_contact;
    EDAMNotebookRestrictions *_restrictions;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMNotebookRestrictions *restrictions; // @synthesize restrictions=_restrictions;
@property(retain, nonatomic) EDAMUser *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) EDAMBusinessNotebook *businessNotebook; // @synthesize businessNotebook=_businessNotebook;
@property(retain, nonatomic) NSArray *sharedNotebooks; // @synthesize sharedNotebooks=_sharedNotebooks;
@property(retain, nonatomic) NSArray *sharedNotebookIds; // @synthesize sharedNotebookIds=_sharedNotebookIds;
@property(retain, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) NSNumber *published; // @synthesize published=_published;
@property(retain, nonatomic) EDAMPublishing *publishing; // @synthesize publishing=_publishing;
@property(retain, nonatomic) NSNumber *serviceUpdated; // @synthesize serviceUpdated=_serviceUpdated;
@property(retain, nonatomic) NSNumber *serviceCreated; // @synthesize serviceCreated=_serviceCreated;
@property(retain, nonatomic) NSNumber *defaultNotebook; // @synthesize defaultNotebook=_defaultNotebook;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void).cxx_destruct;

@end
