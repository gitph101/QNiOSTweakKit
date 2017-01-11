//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImagePickerController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class CALayer, UIBarButtonItem, UIButton, UIToolbar, UIView, ZBarHelpController, ZBarImageScanner, ZBarSymbol;

@interface ZBarReaderController : UIImagePickerController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    ZBarImageScanner *scanner;
    ZBarHelpController *help;
    UIView *overlay;
    UIView *boxView;
    CALayer *boxLayer;
    UIToolbar *toolbar;
    UIBarButtonItem *cancelBtn;
    UIBarButtonItem *scanBtn;
    UIBarButtonItem *space[3];
    UIButton *infoBtn;
    id <ZBarReaderDelegate> readerDelegate;
    _Bool showsZBarControls;
    _Bool showsHelpOnFail;
    _Bool takesPicture;
    _Bool enableCache;
    int cameraMode;
    struct CGRect scanCrop;
    long long maxScanDimension;
    _Bool hasOverlay;
    _Bool sampling;
    unsigned long long t_frame;
    double dt_frame;
    ZBarSymbol *symbol;
    _Bool tracksSymbols;
}

@property(nonatomic) _Bool tracksSymbols; // @synthesize tracksSymbols;
@property(nonatomic) _Bool enableCache; // @synthesize enableCache;
@property(nonatomic) _Bool takesPicture; // @synthesize takesPicture;
@property(nonatomic) _Bool showsHelpOnFail; // @synthesize showsHelpOnFail;
@property(nonatomic) long long maxScanDimension; // @synthesize maxScanDimension;
@property(nonatomic) struct CGRect scanCrop; // @synthesize scanCrop;
@property(nonatomic) int cameraMode; // @synthesize cameraMode;
@property(nonatomic) id <ZBarReaderDelegate> readerDelegate; // @synthesize readerDelegate;
@property(readonly, nonatomic) ZBarImageScanner *scanner; // @synthesize scanner;
- (id)scanImage:(struct CGImage *)arg1;
- (void)helpControllerDidFinish:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)info;
- (void)showHelpWithReason:(id)arg1;
- (void)scanSequence:(id)arg1;
- (void)updateBox:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)extractBestResult:(_Bool)arg1;
- (long long)scanImage:(struct CGImage *)arg1 withScaling:(double)arg2;
- (void)setDelegate:(id)arg1;
@property(nonatomic) _Bool showsZBarControls; // @dynamic showsZBarControls;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initScanning;
- (void)reenable;
- (void)cancel;
- (void)scan;
- (void)dealloc;
- (void)viewDidUnload;
- (void)cleanup;
- (void)viewDidLoad;
- (void)initOverlay;
- (id)init;

@end

