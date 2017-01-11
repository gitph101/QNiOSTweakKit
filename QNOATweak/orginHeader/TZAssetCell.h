//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, TZAssetModel, UIButton, UIImageView, UILabel, UIView;

@interface TZAssetCell : UICollectionViewCell
{
    int _imageRequestID;
    UIButton *_selectPhotoButton;
    TZAssetModel *_model;
    CDUnknownBlockType _didSelectPhotoBlock;
    unsigned long long _type;
    NSString *_representedAssetIdentifier;
    UIImageView *_imageView;
    UIImageView *_selectImageView;
    UIView *_bottomView;
    UILabel *_timeLength;
    UIImageView *_viewImgView;
}

@property(nonatomic) __weak UIImageView *viewImgView; // @synthesize viewImgView=_viewImgView;
@property(nonatomic) __weak UILabel *timeLength; // @synthesize timeLength=_timeLength;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(copy, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType didSelectPhotoBlock; // @synthesize didSelectPhotoBlock=_didSelectPhotoBlock;
@property(retain, nonatomic) TZAssetModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIButton *selectPhotoButton; // @synthesize selectPhotoButton=_selectPhotoButton;
- (void).cxx_destruct;
- (void)selectPhotoButtonClick:(id)arg1;

@end

