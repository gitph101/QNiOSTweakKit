//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class LoadMoreScreenView, RefreshScreenView;

@interface RefreshTableView : UITableView
{
    _Bool _isHidenLoadMoreView;
    long long _status;
    RefreshScreenView *_refreshView;
    LoadMoreScreenView *_loadMoreView;
    long long _loadMoreStyle;
}

@property(nonatomic) _Bool isHidenLoadMoreView; // @synthesize isHidenLoadMoreView=_isHidenLoadMoreView;
@property(nonatomic) long long loadMoreStyle; // @synthesize loadMoreStyle=_loadMoreStyle;
@property(retain, nonatomic) LoadMoreScreenView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
@property(retain, nonatomic) RefreshScreenView *refreshView; // @synthesize refreshView=_refreshView;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)startRequestNetData;
- (void)requestFail;
- (void)requestSuccessLoadAllData:(_Bool)arg1;
- (int)tableViewDidEndDragging;
- (int)tableViewDidDragging;
- (void)setLoadMoreViewIsHiden:(_Bool)arg1;
- (long long)tableLoadMoreStyle;
- (void)setTableLoadMoreStyle:(long long)arg1;
- (void)generalResponseProcessingWithState:(_Bool)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

