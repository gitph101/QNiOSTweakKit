//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OZZipWriteStream : NSObject
{
    NSString *_fileNameInZip;
    void *_zipFile;
}

- (void).cxx_destruct;
- (_Bool)finishedWritingWithError:(id *)arg1;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (void)finishedWriting;
- (void)writeData:(id)arg1;
- (id)initWithZipFileStruct:(void *)arg1 fileNameInZip:(id)arg2;

@end

