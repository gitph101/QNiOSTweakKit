//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIImageView, UILabel;

@interface SouFunIMVideoFileCollectionViewCell : UICollectionViewCell
{
    NSString *_videoTime;
    NSString *_videoURL;
    UILabel *_timeLabel;
    UIImageView *_iconImageView;
    UIImageView *_videoImageView;
}

@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) NSString *videoURL; // @synthesize videoURL=_videoURL;
@property(copy, nonatomic) NSString *videoTime; // @synthesize videoTime=_videoTime;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

