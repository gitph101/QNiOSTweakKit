//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSString, UIButton, UILabel, UIView;

@interface DIGroupSectionView : UITableViewHeaderFooterView
{
    UIButton *_foldButton;
    UILabel *_numberLabel;
    _Bool _folded;
    id <DIGroupSectionViewDelegate> _delegate;
    UILabel *_titleLabel;
    NSString *_groupTitle;
    UIView *_sectionStartingSeparator;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *sectionStartingSeparator; // @synthesize sectionStartingSeparator=_sectionStartingSeparator;
@property(retain, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(nonatomic, getter=isFolded) _Bool folded; // @synthesize folded=_folded;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <DIGroupSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tapGustureHandler:(id)arg1;
- (void)foldButtonTapped:(id)arg1;
- (void)setCountOfItems:(long long)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;

@end

