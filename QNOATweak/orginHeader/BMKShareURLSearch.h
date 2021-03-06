//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BMKSearchBase.h"

#import "SearcherDelegate.h"

@class NSString, Searcher;

@interface BMKShareURLSearch : BMKSearchBase <SearcherDelegate>
{
    id <BMKShareURLSearchDelegate> _delegate;
    int searchType;
    Searcher *_searcher;
}

- (void).cxx_destruct;
- (void)onGetShortUrlResult:(id)arg1;
- (void)onGetExceptionInfo:(long long)arg1;
- (_Bool)requestRoutePlanShareURL:(id)arg1;
- (_Bool)requestLocationShareURL:(id)arg1;
- (_Bool)requestPoiDetailShareURL:(id)arg1;
@property(nonatomic) __weak id <BMKShareURLSearchDelegate> delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

