//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface ENResource : NSObject
{
    NSData *_data;
    NSString *_mimeType;
    NSString *_filename;
    NSString *_sourceUrl;
    NSData *_dataHash;
}

+ (id)resourceWithServiceResource:(id)arg1;
@property(retain, nonatomic) NSData *dataHash; // @synthesize dataHash=_dataHash;
@property(copy, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)EDAMResource;
- (id)initWithImage:(id)arg1;
- (id)initWithData:(id)arg1 mimeType:(id)arg2;
- (id)initWithData:(id)arg1 mimeType:(id)arg2 filename:(id)arg3;

@end
