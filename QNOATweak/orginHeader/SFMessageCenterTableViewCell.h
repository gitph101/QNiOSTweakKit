//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SlideTableViewCell.h"

@class SFMessageItem, UIButton, UIImageView, UILabel, UIView;

@interface SFMessageCenterTableViewCell : SlideTableViewCell
{
    id <SFMessageCenterTableViewCellDelegate> _delegate;
    SFMessageItem *_messageItem;
    UIImageView *_markImgView;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UILabel *_descriptionLabel;
    UIButton *_finishedBtn;
    UIButton *_importantBtn;
    UIView *_line;
}

@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *importantBtn; // @synthesize importantBtn=_importantBtn;
@property(retain, nonatomic) UIButton *finishedBtn; // @synthesize finishedBtn=_finishedBtn;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *markImgView; // @synthesize markImgView=_markImgView;
@property(retain, nonatomic) SFMessageItem *messageItem; // @synthesize messageItem=_messageItem;
@property(nonatomic) __weak id <SFMessageCenterTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setContentMessageWithItem:(id)arg1;
- (void)setImportantBtnSelected:(_Bool)arg1;
- (void)setFinishedBtnSelected:(_Bool)arg1;
- (void)messageStatusBottonEvent:(id)arg1;
- (id)bottomViewWithContentView;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect)arg1;
- (void)createContentView;
- (id)initWithReuseIdentifier:(id)arg1;

@end

