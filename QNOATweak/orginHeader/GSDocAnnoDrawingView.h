//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GSAnnoBase, GSDocPage, UIImage;

@interface GSDocAnnoDrawingView : UIView
{
    GSDocPage *mPage;
    UIImage *arrowImage;
    UIImage *crossImage;
    UIImage *pencilImage;
    id <GSDocFreePenExDelegate> _delegate;
    double _offX;
    double _offY;
    double _scaleX;
    double _scaleY;
    GSAnnoBase *_anno;
}

@property(retain, nonatomic) GSAnnoBase *anno; // @synthesize anno=_anno;
@property(nonatomic) double scaleY; // @synthesize scaleY=_scaleY;
@property(nonatomic) double scaleX; // @synthesize scaleX=_scaleX;
@property(nonatomic) double offY; // @synthesize offY=_offY;
@property(nonatomic) double offX; // @synthesize offX=_offX;
@property(nonatomic) __weak id <GSDocFreePenExDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawSomeSpecialAnnos:(id)arg1;
- (void)drawPage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

