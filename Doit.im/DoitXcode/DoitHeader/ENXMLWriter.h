//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ENXMLDTD, NSMutableString, NSString;

@interface ENXMLWriter : NSObject
{
    id <ENXMLWriterDelegate> _delegate;
    NSMutableString *_contents;
    struct _xmlTextWriter *_xmlWriter;
    struct _xmlOutputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
    } *_xmlOutputBuffer;
    ENXMLDTD *_dtd;
    NSString *_currentElementName;
    unsigned long long _openElementCount;
}

@property(nonatomic) unsigned long long openElementCount; // @synthesize openElementCount=_openElementCount;
@property(retain, nonatomic) ENXMLDTD *dtd; // @synthesize dtd=_dtd;
@property(readonly, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(nonatomic) __weak id <ENXMLWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *currentElementName; // @synthesize currentElementName=_currentElementName;
- (void).cxx_destruct;
- (void)endCDATA;
- (void)writeCDATA:(id)arg1;
- (void)startCDATA;
- (void)writeString:(id)arg1;
- (void)writeRawString:(id)arg1;
- (void)writeString:(id)arg1 raw:(_Bool)arg2;
- (_Bool)writeAttributeName:(id)arg1 value:(id)arg2;
- (_Bool)writeElement:(id)arg1 withAttributes:(id)arg2 content:(id)arg3;
- (void)endElement;
- (_Bool)startElement:(id)arg1 withAttributes:(id)arg2;
- (_Bool)startElement:(id)arg1;
- (void)endDocument;
- (void)startDocument;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

