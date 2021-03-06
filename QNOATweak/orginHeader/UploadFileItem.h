//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSString;

@interface UploadFileItem : NSObject
{
    long long _httpRequestMode;
    NSString *_name;
    NSData *_uploadData;
    NSMutableArray *_uploadMutiDataList;
    NSString *_fileName;
    NSString *_mimeType;
}

@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSMutableArray *uploadMutiDataList; // @synthesize uploadMutiDataList=_uploadMutiDataList;
@property(retain, nonatomic) NSData *uploadData; // @synthesize uploadData=_uploadData;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long httpRequestMode; // @synthesize httpRequestMode=_httpRequestMode;
- (void).cxx_destruct;

@end

