//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetExportSession;

@interface VedioCompressHelp : NSObject
{
    AVAssetExportSession *_exportSession;
    id <VedioCompressDelegate> _delegate;
}

+ (id)getThumbImage:(id)arg1;
+ (double)getVideoDuration:(id)arg1;
@property(nonatomic) id <VedioCompressDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelCompress;
- (void)vedioCompressFailed:(id)arg1;
- (void)vedioCompressCancelled;
- (void)vedioCompressCompleted;
- (void)vedioCompress:(id)arg1 withSavesPath:(id)arg2;

@end

