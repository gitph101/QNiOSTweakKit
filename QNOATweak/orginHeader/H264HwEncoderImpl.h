//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>, NSString;

@interface H264HwEncoderImpl : NSObject
{
    NSString *yuvFile;
    struct OpaqueVTCompressionSession *EncodingSession;
    NSObject<OS_dispatch_queue> *aQueue;
    struct opaqueCMFormatDescription *format;
    struct {
        CDStruct_198678f7 _field1;
        CDStruct_198678f7 _field2;
        CDStruct_198678f7 _field3;
    } *timingInfo;
    _Bool initialized;
    int frameCount;
    NSData *sps;
    NSData *pps;
    unsigned int _width;
    unsigned int _height;
    NSString *error;
    id <H264HwEncoderImplDelegate> _delegate;
}

@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) __weak id <H264HwEncoderImplDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSString *error; // @synthesize error;
- (void).cxx_destruct;
- (void)End;
- (void)changeResolution:(int)arg1 height:(int)arg2;
- (void)encode:(struct opaqueCMSampleBuffer *)arg1;
- (void)initEncode:(int)arg1 height:(int)arg2;
- (void)start:(int)arg1 height:(int)arg2;
- (void)initWithConfiguration;

@end

