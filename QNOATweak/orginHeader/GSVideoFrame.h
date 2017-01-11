//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface GSVideoFrame : NSObject
{
    float _width;
    float _height;
    NSData *_luma;
    NSData *_chromaB;
    NSData *_chromaR;
}

@property(retain, nonatomic) NSData *chromaR; // @synthesize chromaR=_chromaR;
@property(retain, nonatomic) NSData *chromaB; // @synthesize chromaB=_chromaB;
@property(retain, nonatomic) NSData *luma; // @synthesize luma=_luma;
@property(nonatomic) float height; // @synthesize height=_height;
@property(nonatomic) float width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)cleanObj;

@end

