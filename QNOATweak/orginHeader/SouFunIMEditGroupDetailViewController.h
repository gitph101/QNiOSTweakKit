//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFImageCropperDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"

@class MBProgressHUD, NSString, SouFunIMUpLoadImageView, UIButton, UIImage, UIImageView, UITextField;

@interface SouFunIMEditGroupDetailViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SFImageCropperDelegate, UITextFieldDelegate>
{
    NSString *_groupMemberNames;
    NSString *_chatName;
    UIImageView *_groupImageView;
    MBProgressHUD *_hud;
    UIImage *_selectImage;
    SouFunIMUpLoadImageView *_uploadImage;
    UITextField *_groupNameField;
    UIButton *_confirmBtn;
    NSString *_groupType;
    NSString *_imageUrl;
    NSString *_groupName;
    NSString *_createGroupID;
}

@property(copy, nonatomic) NSString *createGroupID; // @synthesize createGroupID=_createGroupID;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *groupType; // @synthesize groupType=_groupType;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UITextField *groupNameField; // @synthesize groupNameField=_groupNameField;
@property(retain, nonatomic) SouFunIMUpLoadImageView *uploadImage; // @synthesize uploadImage=_uploadImage;
@property(retain, nonatomic) UIImage *selectImage; // @synthesize selectImage=_selectImage;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIImageView *groupImageView; // @synthesize groupImageView=_groupImageView;
@property(copy, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(copy, nonatomic) NSString *groupMemberNames; // @synthesize groupMemberNames=_groupMemberNames;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)imageByScalingAndCroppingForSourceImage:(id)arg1 targetSize:(struct CGSize)arg2;
- (id)imageByScalingToMaxSize:(id)arg1;
- (_Bool)cameraSupportsMedia:(id)arg1 sourceType:(long long)arg2;
- (_Bool)canUserPickPhotosFromPhotoLibrary;
- (_Bool)canUserPickVideosFromPhotoLibrary;
- (_Bool)isPhotoLibraryAvailable;
- (_Bool)doesCameraSupportTakingPhotos;
- (_Bool)isFrontCameraAvailable;
- (_Bool)isRealCameraAvailable;
- (_Bool)isCameraAvailable;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinished:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)loadData;
- (id)getMessageNameWithGroupID:(id)arg1;
- (id)getChatKeyWith:(id)arg1 withHouseId:(id)arg2;
- (void)enterChatViewController;
- (void)createImageCache;
- (void)createGroup:(id)arg1;
- (void)createGroupChat;
- (void)confirmAction:(id)arg1;
- (void)createConfirmButton;
- (void)swithChange:(id)arg1;
- (void)createPublicGroupView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textChange:(id)arg1;
- (void)createTextFieldView;
- (void)tapImageView:(id)arg1;
- (void)createImageView;
- (void)back;
- (void)createNavItem;
- (void)createUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

