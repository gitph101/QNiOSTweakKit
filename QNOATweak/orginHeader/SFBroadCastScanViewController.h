//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "AVCaptureMetadataOutputObjectsDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, CIDetector, NSString, ScanOverlayView, UIImageView;

@interface SFBroadCastScanViewController : BaseViewController <UIAlertViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    ScanOverlayView *overLayView;
    struct CGRect scanRect;
    UIImageView *_lineView;
    NSString *_resultURL;
    NSString *_uuidStr;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    AVCaptureMetadataOutput *_output;
    AVCaptureSession *_session;
    AVCaptureVideoPreviewLayer *_preview;
    CIDetector *_detector;
    CDUnknownBlockType _scanCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType scanCompleteBlock; // @synthesize scanCompleteBlock=_scanCompleteBlock;
@property(retain, nonatomic) CIDetector *detector; // @synthesize detector=_detector;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureMetadataOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSString *resultURL; // @synthesize resultURL=_resultURL;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
- (void).cxx_destruct;
- (id)dictionaryWithJsonString:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealWithScannedResult:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)goToAlbum;
- (long long)videoOrientationFromCurrentDeviceOrientation;
- (void)createRightButton;
- (void)backForward;
- (void)createBackButton;
- (void)creatAnimationLine;
- (void)addImageViewInView:(struct CGRect)arg1;
- (void)addCornerForReaderViewWithRect:(struct CGRect)arg1 andImageName:(id)arg2;
- (void)lineMoveStop;
- (void)stopRunning;
- (void)startRunning;
- (void)creatAVCaptureDevice;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)canUsePhoto;
- (_Bool)canUseCamera;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

