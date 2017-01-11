//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SouFunIMUtilityHelper : NSObject
{
}

+ (void)deleteBaseCookie;
+ (void)addCookiesToRequest:(id)arg1;
+ (void)addBaseCookiesToRequest;
+ (void)addURLReqestHeader:(id)arg1;
+ (id)isNilOrNullReturnEmptystring:(id)arg1;
+ (id)fileSizeFormBytes:(unsigned long long)arg1;
+ (id)fileTypeImageFormMimetype:(id)arg1;
+ (id)mimetypeFormExtensionName:(id)arg1;
+ (id)extensionNameFormMimetype:(id)arg1;
+ (struct CGSize)boundingRectWithString:(id)arg1 withSize:(struct CGSize)arg2 withFont:(id)arg3;
+ (void)gotoWebViewControllerWithUrlString:(id)arg1;
+ (id)isUrlWithStr:(id)arg1;
+ (void)changeSearchBarCancleBtnTitleColor:(id)arg1;
+ (id)jsonStringFromObj:(id)arg1;
+ (id)objFromJsonString:(id)arg1;
+ (_Bool)isContainWithStr:(id)arg1 withSearchText:(id)arg2;
+ (id)encryptSting:(id)arg1 key:(id)arg2 andDesiv:(id)arg3;
+ (id)encryptSting:(id)arg1;
+ (id)decryptWithDESString:(id)arg1 key:(id)arg2 andiV:(id)arg3;
+ (id)decryptWithDESString:(id)arg1;
+ (id)getXFInterfaceAndParamersUrl:(id)arg1 paramers:(id)arg2;
+ (id)getImage:(id)arg1;
+ (void)swapWithData:(id)arg1 index1:(long long)arg2 index2:(long long)arg3;
+ (void)quickSortWithArray:(id)arg1 left:(long long)arg2 right:(long long)arg3;
+ (id)quickSortWithArray:(id)arg1;
+ (id)decodeBase64:(id)arg1;
+ (id)encodeBase64:(id)arg1;
+ (void)pushLeafCtrl:(id)arg1;
+ (id)localDateStringForDate:(id)arg1;
+ (id)uuid;
+ (_Bool)isPureFloat:(id)arg1;
+ (_Bool)isPureInt:(id)arg1;
+ (id)addLabelWithRect:(struct CGRect)arg1 text:(id)arg2 tag:(long long)arg3 fontSize:(float)arg4 color:(id)arg5 alignment:(long long)arg6 onView:(id)arg7;
+ (id)getChinaValueOfHouseType:(id)arg1;
+ (long long)getSearchIntValueOfHouseType:(id)arg1;
+ (long long)getIntValueOfHouseType:(id)arg1;
+ (id)getHouseTypeForTypeInt:(long long)arg1;
+ (id)getSFHouseType:(id)arg1;
+ (id)newBackBarButtonItem;
+ (id)getBorderButtonWithTitle:(id)arg1 WithFrame:(struct CGRect)arg2 WithTitleColor:(id)arg3 WithBorderColor:(id)arg4 WithFontSize:(double)arg5;
+ (id)getBorderButtonWithTitle:(id)arg1 WithFrame:(struct CGRect)arg2;
+ (id)getFlatteningStyleBarButtonItemWithTitle:(id)arg1;
+ (id)getSouFunBasicBarButton:(id)arg1 withImageName:(id)arg2;
+ (id)getSouFunBasicBarButton:(id)arg1;
+ (id)getChinaDate:(id)arg1;
+ (id)calculateTimeWithhour:(id)arg1;
+ (id)calculateTime:(id)arg1;
+ (void)copySetupDatabaseFromBundle;
+ (id)filePathForTemporaryFiles;
+ (id)getcitydata;
+ (id)getInterfaceWirelesscode:(id)arg1;
+ (id)getInterfaceAndParamersUrlForPost:(id)arg1 paramers:(id)arg2;
+ (id)getBusinessInterfacePath:(id)arg1;
+ (id)decodeFromPercentEscapeString:(id)arg1;
+ (id)EncodeGB2312Str:(id)arg1;
+ (id)encodeToPercentEscapeString:(id)arg1;
+ (id)getCityName:(id)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (double)getDistanceLatitude:(id)arg1 longitude:(id)arg2 otherLatitude:(id)arg3 otherLongitude:(id)arg4;
+ (id)getPicUrlByWidthAndHeight:(id)arg1 width:(id)arg2 height:(id)arg3;
+ (id)fixOrientation:(id)arg1;
+ (double)getCompressScaleWithBigSize:(struct CGSize)arg1 smallSize:(struct CGSize)arg2;
+ (struct CGRect)getCutRectWithBigSize:(struct CGSize)arg1 cutSize:(struct CGSize)arg2;
+ (id)getCutImageSize:(struct CGSize)arg1 originalImage:(id)arg2;
+ (id)dealWithTimeToString:(id)arg1;
+ (id)dealWithStringToTime:(id)arg1;
+ (id)getComData:(id)arg1;
+ (void)callPhone:(id)arg1;
+ (double)pixelSpaceYToLatitude:(double)arg1;
+ (double)pixelSpaceXToLongitude:(double)arg1;
+ (double)latitudeToPixelSpaceY:(double)arg1;
+ (double)longitudeToPixelSpaceX:(double)arg1;
+ (id)md5:(id)arg1;
+ (id)applicationDocumentsDirectory;
+ (struct CLLocationCoordinate2D)getLocationFromAddress:(id)arg1 error:(_Bool *)arg2;
+ (id)Convert2Utf8:(id)arg1;
+ (id)makeCompressImageWithImage:(id)arg1;
+ (id)makeThumbnailFromImage:(id)arg1 scale:(double)arg2;
+ (id)makeThumbnailFromImage:(id)arg1 size:(struct CGSize)arg2;
+ (_Bool)checkChinaMobile;
+ (_Bool)isFirstLaunchForSwipeView;
+ (void)deleteImage;
+ (void)updateDebugHandlerEmailSubject;
+ (void)debugHandlerWithLable:(id)arg1 log:(id)arg2;
+ (void)shake;
+ (void)playSound;
+ (void)playSoundAndShake;
+ (void)setMutableDict:(id)arg1 isDraaft:(id)arg2 isSingleChat:(id)arg3 messageCount:(id)arg4 messageDesc:(id)arg5 messageType:(id)arg6 messageId:(id)arg7 dict:(id)arg8;
+ (id)dealwithIMUsername:(id)arg1 byHeaderString:(id)arg2;
+ (id)fixImUserName:(id)arg1;

@end
