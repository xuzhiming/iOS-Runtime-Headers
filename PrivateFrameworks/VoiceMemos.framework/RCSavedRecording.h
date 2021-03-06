/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class AVItem, NSString, NSDate;

@interface RCSavedRecording : NSManagedObject  {
    AVItem *_avItem;
    unsigned int _beingRemade : 1;
    NSString *_pathForRemaking;
}

@property double duration;
@property unsigned int labelPreset;
@property long long iTunesPersistentID;
@property(getter=isSynced) BOOL synced;
@property(readonly) NSString * label;
@property(readonly) NSString * detailLabel;
@property(readonly) AVItem * avItem;
@property(getter=isBeingRemade) BOOL beingRemade;
@property(copy) NSString * pathForRemaking;
@property(copy) NSString * customLabel;
@property(copy) NSString * path;
@property(copy) NSDate * date;

+ (id)localizedStringForRecordingLabel:(unsigned int)arg1;

- (void)dealloc;
- (void)setLabelPreset:(unsigned int)arg1;
- (BOOL)isSynced;
- (void)setSynced:(BOOL)arg1;
- (id)detailLabel;
- (BOOL)isBeingRemade;
- (id)pathForRemaking;
- (void)setPathForRemaking:(id)arg1;
- (void)setBeingRemade:(BOOL)arg1;
- (unsigned int)labelPreset;
- (long long)iTunesPersistentID;
- (void)setITunesPersistentID:(long long)arg1;
- (id)avItem;
- (id)label;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)awakeFromInsert;
- (void)willSave;
- (void)awakeFromFetch;

@end
