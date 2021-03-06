/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSIndexSet, PLImageTable, NSLock, NSManagedObjectContext, NSDictionary, PLPhotoLibrary, NSArray;

@interface PLThumbnailManager : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    NSLock *_lock;
    float _indexSheetBorderWidth;
    NSIndexSet *_occupiedIndexes;
    NSDictionary *_changedPhotosMap;
    NSArray *_changedPhotos;
    NSManagedObjectContext *_preheatMOC;
    PLImageTable *_indexSheetThumbs;
    PLImageTable *_wildcatScrubberThumbs;
    PLImageTable *_wildcatIndexThumbs;
    PLImageTable *_wildcatStackThumbs;
    NSArray *_thumbTables;
    NSMutableOrderedSet *_assetUUIDsWithThumbnails;
}

@property PLPhotoLibrary * photoLibrary;
@property(readonly) PLImageTable * indexSheetThumbs;
@property(readonly) PLImageTable * wildcatScrubberThumbs;
@property(readonly) PLImageTable * wildcatIndexThumbs;
@property(readonly) PLImageTable * wildcatStackThumbs;
@property(readonly) NSArray * thumbTables;

+ (id)cameraPreviewWellAssetID;
+ (struct dispatch_queue_s { }*)cameraPreviewWellImageQueue;
+ (id)cameraPreviewWellImageFileURL;
+ (void)resetImageTables;
+ (int)thumbnailVersion;
+ (void)saveCameraPreviewWellImage:(struct CGImage { }*)arg1 assetID:(id)arg2;
+ (void)removeObsoleteMetadata;
+ (BOOL)thumbnailTablesNeedToBeRecreated;
+ (BOOL)missingThumbnailTables;
+ (id)cameraPreviewWellImage;
+ (int)thumbnailFormat;

- (int)count;
- (void)dealloc;
- (id)_bakedThumbnailForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_tableDescriptions;
- (id)compactImageTables;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (void)deleteThumbnailsForPhoto:(id)arg1;
- (void)setThumbnails:(struct __CFDictionary { }*)arg1 forPhoto:(id)arg2;
- (struct __CFDictionary { }*)assetUUIDToThumbnailIndexMappingForFormat:(int)arg1;
- (void)deleteThumbnailsAtIndex:(int)arg1 withUUID:(id)arg2;
- (id)thumbTables;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3 generatePreviewImage:(BOOL)arg4 assignNewIndex:(BOOL)arg5;
- (id)_imageTableForFormat:(int*)arg1;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_bakedIndexSheetDataForWallpaperAsset:(id)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 imageDataOffset:(int*)arg7;
- (id)wildcatStackThumbs;
- (id)wildcatIndexThumbs;
- (id)wildcatScrubberThumbs;
- (id)indexSheetThumbs;
- (void)clearCachedInformation;
- (void)ensureIndexExists:(int)arg1;
- (BOOL)entryAtIndexIsPlaceholder:(int)arg1;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)photoUUIDToIndexMap;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3 generatePreviewImage:(BOOL)arg4;
- (void)thumbnailTablesChangedExternally;
- (void)setPhotoLibrary:(id)arg1;
- (id)initWithWeakPhotoLibrary:(id)arg1;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)photoLibrary;

@end
