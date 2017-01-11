//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BaiduPanoramaViewDelegate.h"

@class BaiduPanoramaView, MBProgressHUD, NSString;

@interface SouFunIMPanoShowViewController : UIViewController <BaiduPanoramaViewDelegate>
{
    BaiduPanoramaView *_panoramaView;
    NSString *_netWorkStatus;
    _Bool _isExistData;
    MBProgressHUD *_hud;
    struct CLLocationCoordinate2D _coordinate;
}

@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
- (void)backForward;
- (void)createNavItems;
- (void)didReceiveMemoryWarning;
- (void)panoramaLoadFailed:(id)arg1 error:(id)arg2;
- (void)panoramaDidLoad:(id)arg1 descreption:(id)arg2;
- (void)netWorkChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadPanData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
