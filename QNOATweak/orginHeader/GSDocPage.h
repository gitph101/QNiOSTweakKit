//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary;

@interface GSDocPage : NSObject
{
    short _pageWidth;
    short _pageHeight;
    unsigned int _pageID;
    NSData *_pageData;
    NSMutableDictionary *_annos;
    NSData *_aniCfg;
}

@property(retain, nonatomic) NSData *aniCfg; // @synthesize aniCfg=_aniCfg;
@property(retain, nonatomic) NSMutableDictionary *annos; // @synthesize annos=_annos;
@property(nonatomic) short pageHeight; // @synthesize pageHeight=_pageHeight;
@property(nonatomic) short pageWidth; // @synthesize pageWidth=_pageWidth;
@property(retain, nonatomic) NSData *pageData; // @synthesize pageData=_pageData;
@property(nonatomic) unsigned int pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (id)init;

@end

