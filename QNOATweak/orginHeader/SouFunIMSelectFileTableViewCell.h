//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface SouFunIMSelectFileTableViewCell : UITableViewCell
{
    UIButton *_selectedButton;
    UILabel *_fileNameLabel;
    UIImageView *_imageview;
    UILabel *_timeLabel;
    UILabel *_sizeLabel;
    UIButton *_readButton;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIButton *readButton; // @synthesize readButton=_readButton;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *imageview; // @synthesize imageview=_imageview;
@property(retain, nonatomic) UILabel *fileNameLabel; // @synthesize fileNameLabel=_fileNameLabel;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)addLabelOnCellView:(id)arg1 withRect:(struct CGRect)arg2 font:(id)arg3;
- (void)returnPosition;
- (void)adjustPosition;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

