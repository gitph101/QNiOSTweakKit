//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsLibrary, PHCachingImageManager;

@interface TZImageManager : NSObject
{
    _Bool _shouldFixOrientation;
    _Bool _sortAscendingByModificationDate;
    PHCachingImageManager *_cachingImageManager;
    double _photoPreviewMaxWidth;
    ALAssetsLibrary *_assetLibrary;
}

+ (id)manager;
@property(retain, nonatomic) ALAssetsLibrary *assetLibrary; // @synthesize assetLibrary=_assetLibrary;
@property(nonatomic) _Bool sortAscendingByModificationDate; // @synthesize sortAscendingByModificationDate=_sortAscendingByModificationDate;
@property(nonatomic) double photoPreviewMaxWidth; // @synthesize photoPreviewMaxWidth=_photoPreviewMaxWidth;
@property(nonatomic) _Bool shouldFixOrientation; // @synthesize shouldFixOrientation=_shouldFixOrientation;
@property(retain, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
- (void).cxx_destruct;
- (id)fixOrientation:(id)arg1;
- (long long)orientationFromImage:(id)arg1;
- (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)getNewAlbumName:(id)arg1;
- (id)modelWithResult:(id)arg1 name:(id)arg2;
- (id)getAssetIdentifier:(id)arg1;
- (_Bool)isAssetsArray:(id)arg1 containAsset:(id)arg2;
- (void)startExportVideoWithVideoAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVideoOutputPathWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVideoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)savePhotoWithImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getOriginalPhotoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPostImageWithAlbumModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)getPhotoWithAsset:(id)arg1 photoWidth:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (int)getPhotoWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getBytesFromDataLength:(long long)arg1;
- (void)getPhotosBytesWithArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getNewTimeFromDurationSecond:(long long)arg1;
- (void)getAssetFromFetchResult:(id)arg1 atIndex:(long long)arg2 allowPickingVideo:(_Bool)arg3 allowPickingImage:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getAssetsFromFetchResult:(id)arg1 allowPickingVideo:(_Bool)arg2 allowPickingImage:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getAllAlbums:(_Bool)arg1 allowPickingImage:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getCameraRollAlbum:(_Bool)arg1 allowPickingImage:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)authorizationStatusAuthorized;

@end

