//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WXMediaInternalMessage : NSObject
{
    NSString *title;
    NSString *description;
    NSData *thumbData;
    NSString *mediaTagName;
    unsigned long long objectType;
    NSString *extInfo;
    NSString *fileExt;
    NSData *fileData;
    NSString *mediaUrl;
    NSString *mediaLowBandUrl;
    NSString *mediaDataUrl;
    NSString *mediaLowBandDataUrl;
    NSString *messageExt;
    NSString *messageAction;
}

+ (id)message;
@property(retain, nonatomic) NSString *messageAction; // @synthesize messageAction;
@property(retain, nonatomic) NSString *messageExt; // @synthesize messageExt;
@property(retain, nonatomic) NSString *mediaLowBandDataUrl; // @synthesize mediaLowBandDataUrl;
@property(retain, nonatomic) NSString *mediaDataUrl; // @synthesize mediaDataUrl;
@property(retain, nonatomic) NSString *mediaLowBandUrl; // @synthesize mediaLowBandUrl;
@property(retain, nonatomic) NSString *mediaUrl; // @synthesize mediaUrl;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned long long objectType; // @synthesize objectType;
@property(retain, nonatomic) NSString *mediaTagName; // @synthesize mediaTagName;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData;
@property(retain, nonatomic) NSString *description; // @synthesize description;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;
- (id)init;

@end

