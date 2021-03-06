/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSFeatureId, NSMutableArray, LBSAddressRange;

@interface LBSAddressComponent : PBCodable  {
    int _type;
    NSMutableArray *_parsedNames;
    BOOL _hasFeatureType;
    int _featureType;
    LBSFeatureId *_featureId;
    LBSAddressRange *_range;
}

@property int type;
@property(retain) NSMutableArray * parsedNames;
@property BOOL hasFeatureType;
@property int featureType;
@property(readonly) BOOL hasFeatureId;
@property(retain) LBSFeatureId * featureId;
@property(readonly) BOOL hasRange;
@property(retain) LBSAddressRange * range;


- (id)description;
- (void)dealloc;
- (void)setRange:(id)arg1;
- (id)dictionaryRepresentation;
- (int)type;
- (id)range;
- (void)setType:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)featureId;
- (int)featureType;
- (void)setHasFeatureType:(BOOL)arg1;
- (BOOL)hasFeatureType;
- (id)parsedNames;
- (BOOL)hasRange;
- (BOOL)hasFeatureId;
- (id)parsedNameAtIndex:(unsigned int)arg1;
- (unsigned int)parsedNamesCount;
- (void)setFeatureType:(int)arg1;
- (void)addParsedName:(id)arg1;
- (void)setFeatureId:(id)arg1;
- (void)setParsedNames:(id)arg1;

@end
