//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface GSDocument : NSObject
{
    _Bool _savedOnServer;
    unsigned int _docID;
    int _currentPageIndex;
    int _docType;
    NSMutableDictionary *_pages;
    NSString *_docName;
    long long _ownerID;
}

@property(nonatomic) int docType; // @synthesize docType=_docType;
@property(nonatomic) long long ownerID; // @synthesize ownerID=_ownerID;
@property(retain, nonatomic) NSString *docName; // @synthesize docName=_docName;
@property(nonatomic) _Bool savedOnServer; // @synthesize savedOnServer=_savedOnServer;
@property(nonatomic) int currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSMutableDictionary *pages; // @synthesize pages=_pages;
@property(nonatomic) unsigned int docID; // @synthesize docID=_docID;
- (void).cxx_destruct;
- (id)init;

@end

