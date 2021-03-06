//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface SouFun_MessageBox_YJLY_YZWT_Cache : NSObject
{
    int _order;
    NSString *_messageID;
    NSString *_messageType;
    NSString *_customerName;
    NSDate *_messageTime;
    NSString *_houseTitle;
    NSString *_projname;
    NSString *_messageDesc;
    NSString *_messageCount;
    NSString *_houseID;
    NSString *_area;
    NSString *_areaRange;
    NSString *_areaType;
    NSString *_room;
    NSString *_hall;
    NSString *_toilet;
    NSString *_price;
    NSString *_priceRange;
    NSString *_priceType;
    NSString *_district;
    NSString *_comarea;
    NSString *_myID;
    NSString *_unique;
    NSString *_delegateType;
    NSString *_msgContent;
    NSString *_draft;
    NSString *_messagePicName;
    NSString *_focusPeople;
}

@property(retain, nonatomic) NSString *focusPeople; // @synthesize focusPeople=_focusPeople;
@property(retain, nonatomic) NSString *messagePicName; // @synthesize messagePicName=_messagePicName;
@property(nonatomic) int order; // @synthesize order=_order;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(retain, nonatomic) NSString *msgContent; // @synthesize msgContent=_msgContent;
@property(retain, nonatomic) NSString *delegateType; // @synthesize delegateType=_delegateType;
@property(retain, nonatomic) NSString *unique; // @synthesize unique=_unique;
@property(retain, nonatomic) NSString *myID; // @synthesize myID=_myID;
@property(retain, nonatomic) NSString *comarea; // @synthesize comarea=_comarea;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *priceType; // @synthesize priceType=_priceType;
@property(retain, nonatomic) NSString *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *toilet; // @synthesize toilet=_toilet;
@property(retain, nonatomic) NSString *hall; // @synthesize hall=_hall;
@property(retain, nonatomic) NSString *room; // @synthesize room=_room;
@property(retain, nonatomic) NSString *areaType; // @synthesize areaType=_areaType;
@property(retain, nonatomic) NSString *areaRange; // @synthesize areaRange=_areaRange;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *houseID; // @synthesize houseID=_houseID;
@property(retain, nonatomic) NSString *messageCount; // @synthesize messageCount=_messageCount;
@property(retain, nonatomic) NSString *messageDesc; // @synthesize messageDesc=_messageDesc;
@property(retain, nonatomic) NSString *projname; // @synthesize projname=_projname;
@property(retain, nonatomic) NSString *houseTitle; // @synthesize houseTitle=_houseTitle;
@property(retain, nonatomic) NSDate *messageTime; // @synthesize messageTime=_messageTime;
@property(retain, nonatomic) NSString *customerName; // @synthesize customerName=_customerName;
@property(retain, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)configureCacheModelWithMessageBox:(id)arg1;
- (id)init;

@end

