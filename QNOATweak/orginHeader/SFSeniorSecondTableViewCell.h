//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, UILabel, UIView;

@interface SFSeniorSecondTableViewCell : UITableViewCell
{
    id <SFSeniorSecondTableViewCellDelegate> _delegate;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIView *_leftBottomLine;
    UIView *_rightBottomLine;
    NSArray *_itemsArray;
}

@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
@property(retain, nonatomic) UIView *rightBottomLine; // @synthesize rightBottomLine=_rightBottomLine;
@property(retain, nonatomic) UIView *leftBottomLine; // @synthesize leftBottomLine=_leftBottomLine;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) __weak id <SFSeniorSecondTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)attributedStringWithString:(id)arg1 color:(id)arg2;
- (void)setContentItemsWithArray:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)bottomLineDidHidden:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)createUI;
- (void)buttonClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

