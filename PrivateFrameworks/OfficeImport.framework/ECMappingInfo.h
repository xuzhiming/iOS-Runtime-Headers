/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface ECMappingInfo : NSObject  {
    NSString *mSheetName;
}

@property(readonly) int rowOffset;
@property(readonly) int columnOffset;
@property(readonly) NSString * sheetName;

+ (id)mappingInfoWithSheetName:(id)arg1;

- (void)dealloc;
- (int)rowOffset;
- (int)columnOffset;
- (id)initWithSheetName:(id)arg1;
- (id)sheetName;

@end
