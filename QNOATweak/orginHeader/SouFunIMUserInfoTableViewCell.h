//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AsyncImageView, UIImageView, UILabel;

@interface SouFunIMUserInfoTableViewCell : UITableViewCell
{
    UIImageView *_portraitImageView;
    AsyncImageView *_portraitAsyncImageView;
    UILabel *_nameLabel;
    UILabel *_setBeizhuLabel;
    UILabel *_beizhuLabel;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

+ (double)heightForFlexibleRowWithString:(id)arg1;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UILabel *beizhuLabel; // @synthesize beizhuLabel=_beizhuLabel;
@property(retain, nonatomic) UILabel *setBeizhuLabel; // @synthesize setBeizhuLabel=_setBeizhuLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AsyncImageView *portraitAsyncImageView; // @synthesize portraitAsyncImageView=_portraitAsyncImageView;
@property(retain, nonatomic) UIImageView *portraitImageView; // @synthesize portraitImageView=_portraitImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)makeConstraint;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
