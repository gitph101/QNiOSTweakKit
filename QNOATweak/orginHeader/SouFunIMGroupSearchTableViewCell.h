//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AsyncImageView, NSString, UILabel;

@interface SouFunIMGroupSearchTableViewCell : UITableViewCell
{
    AsyncImageView *headImg;
    UILabel *groupName;
    NSString *groupID;
    UILabel *personsCountLabel;
}

@property(retain, nonatomic) UILabel *personsCountLabel; // @synthesize personsCountLabel;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(retain, nonatomic) AsyncImageView *headImg; // @synthesize headImg;
@property(retain, nonatomic) UILabel *groupName; // @synthesize groupName;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (long long)getPersonsCount;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

