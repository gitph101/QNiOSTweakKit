//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "DIGrowingTextViewDelegate.h"

@class DIGrowingTextView, NSString, UILabel;

@interface DITitleDescEditCell : UITableViewCell <DIGrowingTextViewDelegate>
{
    DIGrowingTextView *_titleTextView;
    DIGrowingTextView *_descTextView;
    UILabel *_titlePlaceholderLabel;
    UILabel *_descPlaceholderLabel;
    id <DITitleDescEditCellDelegate> _delegate;
}

+ (double)cellHeightForTitle:(id)arg1 andDesc:(id)arg2 cellWidth:(double)arg3;
@property(nonatomic) __weak id <DITitleDescEditCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) DIGrowingTextView *descTextView; // @synthesize descTextView=_descTextView;
@property(readonly, nonatomic) DIGrowingTextView *titileTextView; // @synthesize titileTextView=_titleTextView;
- (void).cxx_destruct;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextView:(id)arg1 didChangeHeightTo:(float)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

