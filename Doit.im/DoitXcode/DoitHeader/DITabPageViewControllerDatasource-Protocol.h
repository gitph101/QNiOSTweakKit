//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DITabPageViewController, UIViewController;

@protocol DITabPageViewControllerDatasource <NSObject>
- (UIViewController *)tabPageViewController:(DITabPageViewController *)arg1 controllerAtIndex:(long long)arg2;
- (long long)totalPageInTabPageViewController:(DITabPageViewController *)arg1;
- (long long)tabPageViewController:(DITabPageViewController *)arg1 indexOfController:(UIViewController *)arg2;

@optional
- (void)tabPageViewController:(DITabPageViewController *)arg1 didFinalControllerAppear:(_Bool)arg2;
@end
