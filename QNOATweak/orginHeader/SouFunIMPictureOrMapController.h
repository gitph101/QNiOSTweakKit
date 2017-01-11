//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IMMoreButtonViewDelegate.h"
#import "LocateAndReverseGeoderServiceDelegate.h"
#import "TZImagePickerControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "VedioCompressDelegate.h"

@class LocateAndReverseGeoderService, NSMutableArray, NSString, NSURL, UIAlertView, UIImagePickerController, VedioCompressHelp;

@interface SouFunIMPictureOrMapController : UIViewController <IMMoreButtonViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, LocateAndReverseGeoderServiceDelegate, VedioCompressDelegate, TZImagePickerControllerDelegate>
{
    UIViewController *parentController;
    NSURL *_videoURL;
    NSString *_mp4Path;
    UIAlertView *_alert;
    long long currentUpLoadIndex;
    _Bool _isGroupChat;
    _Bool _isCustomer;
    _Bool _isDismiss;
    id <PictureOrMapControllerDelegate> delegate;
    VedioCompressHelp *_vedioCompressHelp;
    LocateAndReverseGeoderService *_locationService;
    NSString *_locationAdress;
    NSString *_coodx;
    NSString *_coody;
    NSString *_meesageID;
    NSMutableArray *_selectPhotoArray;
    UIImagePickerController *_imagePickerVc;
}

@property(nonatomic) _Bool isDismiss; // @synthesize isDismiss=_isDismiss;
@property(retain, nonatomic) UIImagePickerController *imagePickerVc; // @synthesize imagePickerVc=_imagePickerVc;
@property(retain, nonatomic) NSMutableArray *selectPhotoArray; // @synthesize selectPhotoArray=_selectPhotoArray;
@property(nonatomic) _Bool isCustomer; // @synthesize isCustomer=_isCustomer;
@property(retain, nonatomic) NSString *meesageID; // @synthesize meesageID=_meesageID;
@property(nonatomic) _Bool isGroupChat; // @synthesize isGroupChat=_isGroupChat;
@property(retain, nonatomic) NSString *coody; // @synthesize coody=_coody;
@property(retain, nonatomic) NSString *coodx; // @synthesize coodx=_coodx;
@property(retain, nonatomic) NSString *locationAdress; // @synthesize locationAdress=_locationAdress;
@property(retain, nonatomic) LocateAndReverseGeoderService *locationService; // @synthesize locationService=_locationService;
@property(retain, nonatomic) VedioCompressHelp *vedioCompressHelp; // @synthesize vedioCompressHelp=_vedioCompressHelp;
@property(nonatomic) __weak id <PictureOrMapControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak UIViewController *parentController; // @synthesize parentController;
- (void).cxx_destruct;
- (void)uploadNextPicture:(id)arg1;
- (void)selectPhotoFinishedNotification:(id)arg1;
- (void)vedioCompressFailed:(id)arg1 withError:(id)arg2;
- (void)vedioCompressCancelled:(id)arg1;
- (void)vedioCompressCompleted:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)reverseDidFailWithErrorCode:(id)arg1 withErrorMessage:(id)arg2;
- (void)locateDidFailWithErrorCode:(id)arg1 withErrorMessage:(id)arg2;
- (void)reverseGeoderSuccessWithAddressData:(id)arg1 withCity:(id)arg2 withLocation:(id)arg3 withAddress:(id)arg4;
- (void)getLocationService;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)convertFinish;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)chooseImageWithArray:(id)arg1;
- (void)handlePicture:(id)arg1 Info:(id)arg2;
- (void)dismissController;
- (void)createVideoChatActionSheetWithTag:(long long)arg1;
- (void)createMapActionSheetWithTag:(long long)arg1;
- (void)buttonTap:(id)arg1;
- (void)gotoCardView;
- (void)gotoFileSelectView;
- (void)imagePickerController:(id)arg1 didFinishPickingVideo:(id)arg2 sourceAssets:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3 isSelectOriginalPhoto:(_Bool)arg4;
- (void)picture;
- (void)shoot;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
