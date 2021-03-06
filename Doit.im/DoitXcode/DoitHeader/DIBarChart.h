//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DIBarChartAxesView, NSArray, NSMutableArray;

@interface DIBarChart : UIView
{
    DIBarChartAxesView *_axesView;
    long long _countOfUnit;
    double _valueOfUnit;
    double _heightOfUnit;
    NSArray *_bars;
    NSArray *_chartItems;
    double _unitLabelsSectionWidth;
    NSMutableArray *_unitLabels;
    NSMutableArray *_titleLabels;
}

+ (id)unitLabel;
@property(retain, nonatomic) NSMutableArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(retain, nonatomic) NSMutableArray *unitLabels; // @synthesize unitLabels=_unitLabels;
@property(nonatomic) double unitLabelsSectionWidth; // @synthesize unitLabelsSectionWidth=_unitLabelsSectionWidth;
@property(retain, nonatomic) NSArray *chartItems; // @synthesize chartItems=_chartItems;
@property(retain, nonatomic) NSArray *bars; // @synthesize bars=_bars;
@property(nonatomic) double heightOfUnit; // @synthesize heightOfUnit=_heightOfUnit;
@property(nonatomic) double valueOfUnit; // @synthesize valueOfUnit=_valueOfUnit;
@property(nonatomic) long long countOfUnit; // @synthesize countOfUnit=_countOfUnit;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)p_reloadUnitLabels;
- (id)initWithFrame:(struct CGRect)arg1 chartItems:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

