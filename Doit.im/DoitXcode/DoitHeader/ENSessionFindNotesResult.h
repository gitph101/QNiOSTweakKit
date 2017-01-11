//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ENNoteRef, ENNotebook, NSDate, NSString;

@interface ENSessionFindNotesResult : NSObject
{
    int _updateSequenceNum;
    ENNoteRef *_noteRef;
    ENNotebook *_notebook;
    NSString *_title;
    NSDate *_created;
    NSDate *_updated;
}

@property(nonatomic) int updateSequenceNum; // @synthesize updateSequenceNum=_updateSequenceNum;
@property(retain, nonatomic) NSDate *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ENNotebook *notebook; // @synthesize notebook=_notebook;
@property(retain, nonatomic) ENNoteRef *noteRef; // @synthesize noteRef=_noteRef;
- (void).cxx_destruct;
- (id)description;

@end
