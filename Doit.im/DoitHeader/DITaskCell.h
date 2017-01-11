//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SITableViewCell.h"

@class DIAvatarImageView, NSMutableArray, NSString, Task, UIButton, UIImageView, UILabel, UIView;

@interface DITaskCell : SITableViewCell
{
    Task *_task;
    NSMutableArray *_bottomViewsMarginRight;
    NSMutableArray *_viewsMarginLeft;
    NSMutableArray *_iconsMarginTitle;
    UIButton *_checkBox;
    UILabel *_sentView;
    UIImageView *_repeatView;
    UILabel *_startlabel;
    UILabel *_titlelabel;
    UIImageView *_noteView;
    UIImageView *_audioView;
    UILabel *_contextView;
    UILabel *_projectView;
    UIView *_priorityView;
    UILabel *_dueLabel;
    DIAvatarImageView *_avatarView;
    int _boxType;
    long long _groupby;
    NSString *_group;
    double _titleMaxWidth;
    _Bool _titleAlignCenter;
    _Bool _showProject;
    _Bool _showContext;
    _Bool _showContact;
    int _checkBoxType;
    id <DITaskCellDelegate> _cellDelegate;
}

+ (id)reuseIdentifier;
@property(nonatomic) id <DITaskCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) int checkBoxType; // @synthesize checkBoxType=_checkBoxType;
- (void).cxx_destruct;
- (void)checkBoxClicked:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setTask:(id)arg1 inBox:(int)arg2 inGroup:(id)arg3 withGroupby:(long long)arg4;
- (void)rearrangeViews;
- (void)resetViewsMarginLeft;
- (void)resetIconsMarginTitle;
- (void)resetTitleLabel;
- (void)resetPriority;
- (void)resetViewsMarginRight;
- (void)resetAvatarView;
- (void)resetDueLabel;
- (void)resetProjectView;
- (void)resetContextView;
- (void)resetAudioView;
- (void)resetNoteView;
- (void)resetStartLabel;
- (void)resetRepeaterView;
- (void)resetSentView;
- (void)resetCheckBox;
- (void)resetCheckBoxImages;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

