//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, NSMutableArray, NSString, UIButton, UICollectionView, UITableView;

@interface SouFunIMSelectSpecialAttentionPersonViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *_hasBeenSpecialArr;
    UITableView *_mainTableView;
    UICollectionView *_topCollectionView;
    NSMutableArray *_willChatArray;
    NSMutableArray *_LetterResultArr;
    NSMutableArray *_resultArray;
    NSMutableArray *_sortedArray;
    NSMutableArray *_indexResult;
    UIButton *_rightButton;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) NSMutableArray *indexResult; // @synthesize indexResult=_indexResult;
@property(retain, nonatomic) NSMutableArray *sortedArray; // @synthesize sortedArray=_sortedArray;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) NSMutableArray *LetterResultArr; // @synthesize LetterResultArr=_LetterResultArr;
@property(retain, nonatomic) NSMutableArray *willChatArray; // @synthesize willChatArray=_willChatArray;
@property(retain, nonatomic) UICollectionView *topCollectionView; // @synthesize topCollectionView=_topCollectionView;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) NSMutableArray *hasBeenSpecialArr; // @synthesize hasBeenSpecialArr=_hasBeenSpecialArr;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)createNavItems;
- (void)creatNullView;
- (void)createUI;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadData;
- (void)checkButtonTapped:(id)arg1 event:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)popAction;
- (void)focusFriendFaile:(id)arg1;
- (void)dealloc;
- (void)focusFriendSuccess:(id)arg1;
- (void)focusPeopleAction:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)backForward;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
