//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface DIPieChart : UIView
{
    double _innerRadius;
    double _outerRadius;
    double _pieGap;
    NSMutableArray *_pieChartItems;
    double _totalValue;
    NSMutableArray *_circleShapeLayers;
    NSMutableArray *_sepLines;
    NSMutableArray *_pieLabels;
}

@property(retain, nonatomic) NSMutableArray *pieLabels; // @synthesize pieLabels=_pieLabels;
@property(retain, nonatomic) NSMutableArray *sepLines; // @synthesize sepLines=_sepLines;
@property(retain, nonatomic) NSMutableArray *circleShapeLayers; // @synthesize circleShapeLayers=_circleShapeLayers;
@property(nonatomic) double totalValue; // @synthesize totalValue=_totalValue;
@property(retain, nonatomic) NSMutableArray *pieChartItems; // @synthesize pieChartItems=_pieChartItems;
@property(nonatomic) double pieGap; // @synthesize pieGap=_pieGap;
@property(nonatomic) double outerRadius; // @synthesize outerRadius=_outerRadius;
@property(nonatomic) double innerRadius; // @synthesize innerRadius=_innerRadius;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 chartItems:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

