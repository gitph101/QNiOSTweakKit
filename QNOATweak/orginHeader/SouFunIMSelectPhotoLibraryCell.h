//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@interface SouFunIMSelectPhotoLibraryCell : UITableViewCell
{
}

- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)addPosterImage:(struct CGImage *)arg1 view:(id)arg2;
- (void)addLibraryName:(id)arg1;
- (void)addLine;
- (void)refreshDataByHasbeenCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)drawCustomCellWithPhotoLibraryArray:(id)arg1 andIdexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

