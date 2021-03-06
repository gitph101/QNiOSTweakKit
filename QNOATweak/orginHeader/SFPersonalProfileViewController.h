//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "SFImageCropperDelegate.h"
#import "SFPersonalPortraitViewControllerDelegate.h"
#import "SFPersonalProfileSignatureViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIImage, UIImageView, UILabel, UITableView, UIView;

@interface SFPersonalProfileViewController : BaseViewController <UITableViewDataSource, SFPersonalProfileSignatureViewControllerDelegate, UITableViewDelegate, UINavigationControllerDelegate, SFImageCropperDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, SFPersonalPortraitViewControllerDelegate>
{
    UIImage *_transferImage;
    id <SFPersonalProfileViewControllerDelegate> _delegate;
    UITableView *_profileTableView;
    UIView *_cellBackgroundView;
    UIImageView *_cellImageView;
    UILabel *_cellLable;
    UIImageView *_cellRightArrowImgView;
    UIView *_tableHeaderView;
    UIImageView *_headImageView;
    UILabel *_tableHeaderLabel;
    UIImageView *_headerRightArrowImgView;
    UIView *_tableFooterView;
    UILabel *_footerViewNameLabel;
    UILabel *_footerViewContentLabel;
    UIImageView *_footerRightArrowImgView;
    NSArray *_dataArray;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIImageView *footerRightArrowImgView; // @synthesize footerRightArrowImgView=_footerRightArrowImgView;
@property(retain, nonatomic) UILabel *footerViewContentLabel; // @synthesize footerViewContentLabel=_footerViewContentLabel;
@property(retain, nonatomic) UILabel *footerViewNameLabel; // @synthesize footerViewNameLabel=_footerViewNameLabel;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIImageView *headerRightArrowImgView; // @synthesize headerRightArrowImgView=_headerRightArrowImgView;
@property(retain, nonatomic) UILabel *tableHeaderLabel; // @synthesize tableHeaderLabel=_tableHeaderLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) UIImageView *cellRightArrowImgView; // @synthesize cellRightArrowImgView=_cellRightArrowImgView;
@property(retain, nonatomic) UILabel *cellLable; // @synthesize cellLable=_cellLable;
@property(retain, nonatomic) UIImageView *cellImageView; // @synthesize cellImageView=_cellImageView;
@property(retain, nonatomic) UIView *cellBackgroundView; // @synthesize cellBackgroundView=_cellBackgroundView;
@property(retain, nonatomic) UITableView *profileTableView; // @synthesize profileTableView=_profileTableView;
@property(nonatomic) __weak id <SFPersonalProfileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *transferImage; // @synthesize transferImage=_transferImage;
- (void).cxx_destruct;
- (void)transferValueFromPersonalPortraitWithImage:(id)arg1;
- (void)transferValueWithSignatureStr:(id)arg1;
- (void)actionSheetDissmiss;
- (void)editPortrait;
- (void)goBack:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)customCellBackgroundView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)changeSignature;
- (double)getHeight:(id)arg1;
- (void)portraitChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)customUI;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

