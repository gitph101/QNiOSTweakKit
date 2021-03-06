//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FATObject.h"

@class NSNumber, NSString;

@interface EDAMLinkedNotebook : FATObject
{
    NSString *_shareName;
    NSString *_username;
    NSString *_shardId;
    NSString *_sharedNotebookGlobalId;
    NSString *_uri;
    NSString *_guid;
    NSNumber *_updateSequenceNum;
    NSString *_noteStoreUrl;
    NSString *_webApiUrlPrefix;
    NSString *_stack;
    NSNumber *_businessId;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *stack; // @synthesize stack=_stack;
@property(retain, nonatomic) NSString *webApiUrlPrefix; // @synthesize webApiUrlPrefix=_webApiUrlPrefix;
@property(retain, nonatomic) NSString *noteStoreUrl; // @synthesize noteStoreUrl=_noteStoreUrl;
@property(retain, nonatomic) NSNumber *updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(retain, nonatomic) NSString *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSString *sharedNotebookGlobalId; // @synthesize sharedNotebookGlobalId=_sharedNotebookGlobalId;
@property(retain, nonatomic) NSString *shardId; // @synthesize shardId=_shardId;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
- (void).cxx_destruct;

@end

