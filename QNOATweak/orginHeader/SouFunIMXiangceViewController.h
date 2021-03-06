//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SouFunXiangcePhotoDelegate.h"
#import "SouFunXiangcePhotoViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIButton, UIImage, UILabel, UIScrollView, UIToolbar, UIView;

@interface SouFunIMXiangceViewController : UIViewController <UIScrollViewDelegate, SouFunXiangcePhotoDelegate, SouFunXiangcePhotoViewDelegate, UIActionSheetDelegate>
{
    _Bool _isActive;
    _Bool _isFullscreen;
    _Bool _isScrolling;
    _Bool _isThumbViewShowing;
    long long _prevStatusStyle;
    double _prevNextButtonSize;
    struct CGRect _scrollerRect;
    NSString *galleryID;
    long long _currentIndex;
    long long currentIndex;
    UIView *_container;
    UIView *_innerContainer;
    UIToolbar *_toolbar;
    UIScrollView *_thumbsView;
    UIScrollView *_scroller;
    UIView *_captionContainer;
    UILabel *_caption;
    NSMutableDictionary *_photoLoaders;
    NSMutableArray *_barItems;
    NSMutableArray *_photoThumbnailViews;
    NSMutableArray *_photoViews;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_prevButton;
    NSArray *urlArray;
    NSArray *titleArray;
    NSArray *detailArray;
    UILabel *titleTextForHuxing;
    UILabel *detailTextForHuxing;
    double offsetForHuxing;
    _Bool _useThumbnailView;
    _Bool _beginsInThumbnailView;
    _Bool _hideTitle;
    _Bool _isFromChatPage;
    long long _startingIndex;
    NSString *_thumbsName;
    UIBarButtonItem *_rightButoonItem;
    UIButton *_saveBtn;
    UILabel *_bottomTndexLabel;
    NSMutableArray *_messageKeyArr;
    NSMutableArray *_imageSendStatusArr;
    UIImage *_defaultImg;
    NSString *_quitNotificationName;
}

@property(retain, nonatomic) NSString *quitNotificationName; // @synthesize quitNotificationName=_quitNotificationName;
@property(retain, nonatomic) UIImage *defaultImg; // @synthesize defaultImg=_defaultImg;
@property(retain, nonatomic) NSMutableArray *imageSendStatusArr; // @synthesize imageSendStatusArr=_imageSendStatusArr;
@property(retain, nonatomic) NSMutableArray *messageKeyArr; // @synthesize messageKeyArr=_messageKeyArr;
@property(retain, nonatomic) UILabel *bottomTndexLabel; // @synthesize bottomTndexLabel=_bottomTndexLabel;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(nonatomic) _Bool isFromChatPage; // @synthesize isFromChatPage=_isFromChatPage;
@property(retain, nonatomic) UILabel *detailTextForHuxing; // @synthesize detailTextForHuxing;
@property(retain, nonatomic) UILabel *titleTextForHuxing; // @synthesize titleTextForHuxing;
@property(retain, nonatomic) NSArray *detailArray; // @synthesize detailArray;
@property(nonatomic) long long _currentIndex; // @synthesize _currentIndex;
@property(retain, nonatomic) NSArray *titleArray; // @synthesize titleArray;
@property(retain, nonatomic) UIBarButtonItem *rightButoonItem; // @synthesize rightButoonItem=_rightButoonItem;
@property(retain, nonatomic) NSString *thumbsName; // @synthesize thumbsName=_thumbsName;
@property(retain, nonatomic) NSArray *urlArray; // @synthesize urlArray;
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(nonatomic) _Bool beginsInThumbnailView; // @synthesize beginsInThumbnailView=_beginsInThumbnailView;
@property long long startingIndex; // @synthesize startingIndex=_startingIndex;
@property(nonatomic) _Bool useThumbnailView; // @synthesize useThumbnailView=_useThumbnailView;
@property(readonly, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolbar;
@property(readonly, nonatomic) UIView *thumbsView; // @synthesize thumbsView=_thumbsView;
@property long long currentIndex; // @synthesize currentIndex;
@property(retain, nonatomic) NSString *galleryID; // @synthesize galleryID;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)galleryPhoto:(id)arg1 didLoadFullsize:(id)arg2;
- (void)galleryPhoto:(id)arg1 didLoadThumbnail:(id)arg2;
- (void)galleryPhoto:(id)arg1 willLoadFullsizeFromUrl:(id)arg2;
- (void)galleryPhoto:(id)arg1 willLoadThumbnailFromUrl:(id)arg2;
- (void)galleryPhoto:(id)arg1 willLoadThumbnailFromPath:(id)arg2;
- (void)scrollingHasEnded;
- (id)createGalleryPhotoForIndex:(unsigned long long)arg1;
- (void)unloadFullsizeImageWithIndex:(unsigned long long)arg1;
- (void)loadFullsizeImageWithIndex:(unsigned long long)arg1;
- (void)loadThumbnailImageWithIndex:(unsigned long long)arg1;
- (void)loadAllThumbViewPhotos;
- (void)preloadThumbnailImages;
- (void)handleThumbClick:(id)arg1;
- (void)handleSeeAllTouch:(id)arg1;
- (void)hideThumbnailViewWithAnimation:(_Bool)arg1;
- (void)showThumbnailViewWithAnimation:(_Bool)arg1;
- (void)toggleThumbnailViewWithAnimation:(_Bool)arg1;
- (void)arrangeThumbs;
- (void)buildThumbsViewPhotos;
- (void)buildViews;
- (void)moveScrollerToCurrentIndexWithAnimation:(_Bool)arg1;
- (void)layoutButtons;
- (void)updateButtons;
- (void)updateTitle;
- (void)updateScrollSize;
- (void)updateCaption;
- (void)didScrollViewScroll:(id)arg1 pointhuxing:(struct CGPoint)arg2;
- (void)didLongPressPhotoView:(id)arg1;
- (void)quitXiangceIsPushChatFilesVC:(_Bool)arg1;
- (void)didTapPhotoView:(id)arg1;
- (void)disableApp;
- (void)enableApp;
- (void)exitFullscreen;
- (void)enterFullscreen;
- (void)resizeThumbView;
- (void)positionToolbar;
- (void)positionDetailHuxing;
- (void)positionTitleHuxing;
- (void)positionScroller;
- (void)positionInnerContainer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)backForward;
- (void)layoutViews;
- (void)gotoImageByIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)previous;
- (void)next;
- (void)removeImageAtIndex:(unsigned long long)arg1;
- (void)resetImageViewZoomLevels;
- (void)resizeImageViewsWithRect:(struct CGRect)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)currentPhoto;
- (void)reloadGallery;
- (void)destroyViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)netWorkStatusChangeReloadGallery;
- (void)addNoCacheAndNotReachableToast;
- (void)netWorkChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)gotoChatFiles;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

