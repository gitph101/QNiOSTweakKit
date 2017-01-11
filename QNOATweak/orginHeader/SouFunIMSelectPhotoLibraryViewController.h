//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ALAssetsLibrary, NSMutableArray, NSString, UITableView;

@interface SouFunIMSelectPhotoLibraryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    ALAssetsLibrary *lib;
    UITableView *_photoTabelView;
    NSMutableArray *_photoLibrary;
    UIViewController *_userController;
    long long _numberOfSelectedImage;
    NSString *_NoticficationName;
    long long _MaxImageNum;
}

@property(nonatomic) long long MaxImageNum; // @synthesize MaxImageNum=_MaxImageNum;
@property(retain, nonatomic) NSString *NoticficationName; // @synthesize NoticficationName=_NoticficationName;
@property(nonatomic) long long numberOfSelectedImage; // @synthesize numberOfSelectedImage=_numberOfSelectedImage;
@property(retain, nonatomic) UIViewController *userController; // @synthesize userController=_userController;
@property(retain, nonatomic) NSMutableArray *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(retain, nonatomic) UITableView *photoTabelView; // @synthesize photoTabelView=_photoTabelView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initPhotoLibraryTableViewData;
- (void)getPhotoFromALAssetsLibrary;
- (void)creatTableView;
- (void)backForward;
- (void)createQuXiaoBackButton:(SEL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
