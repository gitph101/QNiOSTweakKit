//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class AsyncImageView, UILabel;

@interface SouFunIMContactsTableViewCell : UITableViewCell
{
    AsyncImageView *headImageView;
    UILabel *nameLabel;
    UILabel *adressLabel;
    UILabel *statusLabel;
    UILabel *chainStoreNameLabel;
    UILabel *districtsLabel;
    UILabel *locationAddressLabel;
}

@property(retain, nonatomic) UILabel *locationAddressLabel; // @synthesize locationAddressLabel;
@property(retain, nonatomic) UILabel *districtsLabel; // @synthesize districtsLabel;
@property(retain, nonatomic) UILabel *chainStoreNameLabel; // @synthesize chainStoreNameLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel;
@property(retain, nonatomic) AsyncImageView *headImageView; // @synthesize headImageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)addLabelOnView:(id)arg1 withRect:(struct CGRect)arg2 font:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

