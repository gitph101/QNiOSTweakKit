//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ENXMLWriter.h"

@interface ENMLWriter : ENXMLWriter
{
}

+ (id)emptyNote;
+ (_Bool)validateURLComponents:(id)arg1;
- (void)writeTodoWithCheckedState:(_Bool)arg1;
- (void)writeEncryptedInfo:(id)arg1;
- (void)writeResource:(id)arg1;
- (void)writeResourceWithDataHash:(id)arg1 mime:(id)arg2 attributes:(id)arg3;
- (_Bool)startElement:(id)arg1 withAttributes:(id)arg2;
- (id)validateURLAttribute:(id)arg1 inAttributes:(id)arg2;
- (void)endDocument;
- (void)startDocument;
- (void)startDocumentWithAttributes:(id)arg1;
- (id)init;

@end
