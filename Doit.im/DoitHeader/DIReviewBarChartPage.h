//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DIBarChart, DIPieChartColorIntroView, UILabel;

@interface DIReviewBarChartPage : UIView
{
    UILabel *_barChartLabel;
    DIBarChart *_barChart;
    DIPieChartColorIntroView *_barColorIntroView;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 taskReviewInfos:(id)arg2;

@end

