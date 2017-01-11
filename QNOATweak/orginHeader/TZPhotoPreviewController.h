//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView;

@interface TZPhotoPreviewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIScrollViewDelegate>
{
    UICollectionView *_collectionView;
    _Bool _isHideNaviBar;
    NSArray *_photosTemp;
    NSArray *_assetsTemp;
    UIView *_naviBar;
    UIButton *_backButton;
    UIButton *_selectButton;
    UIView *_toolBar;
    UIButton *_okButton;
    UIImageView *_numberImageView;
    UILabel *_numberLable;
    UIButton *_originalPhotoButton;
    UILabel *_originalPhotoLable;
    double _minimumLineSpacing;
    _Bool _isSelectOriginalPhoto;
    NSMutableArray *_models;
    NSMutableArray *_photos;
    long long _currentIndex;
    CDUnknownBlockType _backButtonClickBlock;
    CDUnknownBlockType _okButtonClickBlock;
    CDUnknownBlockType _okButtonClickBlockWithPreviewType;
}

@property(copy, nonatomic) CDUnknownBlockType okButtonClickBlockWithPreviewType; // @synthesize okButtonClickBlockWithPreviewType=_okButtonClickBlockWithPreviewType;
@property(copy, nonatomic) CDUnknownBlockType okButtonClickBlock; // @synthesize okButtonClickBlock=_okButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType backButtonClickBlock; // @synthesize backButtonClickBlock=_backButtonClickBlock;
@property(nonatomic) _Bool isSelectOriginalPhoto; // @synthesize isSelectOriginalPhoto=_isSelectOriginalPhoto;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSMutableArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)showPhotoBytes;
- (void)refreshNaviBarAndBottomBarState;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)originalPhotoButtonClick;
- (void)okButtonClick;
- (void)back;
- (void)select:(id)arg1;
- (void)configCollectionView;
- (void)configBottomToolBar;
- (void)configCustomNaviBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
