//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface RefreshScreenView : UIView
{
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_arrowView;
    UILabel *_statusLabel;
    UILabel *_timeLabel;
    long long _currentStatus;
}

@property(nonatomic) long long currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)updateRefreshStatus:(long long)arg1;
- (long long)refreshViewStatus;
- (void)updateTimeLabelDate;
- (id)initWithFrame:(struct CGRect)arg1;

@end
