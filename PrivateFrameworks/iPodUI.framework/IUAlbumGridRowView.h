/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUAlbumGridCellContext, IUAlbumGridRowCell, NSMutableIndexSet, NSMutableArray;

@interface IUAlbumGridRowView : UIView  {
    IUAlbumGridRowCell *_cell;
    IUAlbumGridCellContext *_context;
    NSMutableIndexSet *_hiddenAlbumIndexes;
    NSMutableArray *_imageRequests;
    unsigned int _rowIndex;
    unsigned int _nowPlayingQueryIndex;
    NSMutableArray *_imageViews;
    NSMutableArray *_deleteButtons;
}

@property IUAlbumGridRowCell * cell;
@property(retain) IUAlbumGridCellContext * context;
@property unsigned int rowIndex;
@property(readonly) NSMutableIndexSet * hiddenAlbumIndexes;
@property(readonly) float _interItemPadding;


- (void)dealloc;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)setCell:(id)arg1;
- (id)cell;
- (void)refreshImages;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_canDrawContent;
- (id)scriptingInfoWithChildren;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)rowIndex;
- (void)setRowIndex:(unsigned int)arg1;
- (id)hiddenAlbumIndexes;
- (void)enableDeleteButtonForAlbumAtIndex:(unsigned int)arg1;
- (void)dimAlbum:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (id)_newImageRequestForMediaItem:(id)arg1;
- (unsigned int)rowAlbumIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateNowPlayingIndicator;
- (void)_getSubtitleString:(id*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 withFont:(id)arg3 forEntityIndex:(unsigned int)arg4;
- (void)_getTitleValue:(id*)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 withFont:(id)arg3 forEntityIndex:(unsigned int)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_actualImageFrameForImageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_loadImageForQueryIndex:(unsigned int)arg1 createTitle:(BOOL)arg2;
- (void)_deleteButtonPressed:(id)arg1;
- (void)_cancelImageRequests;
- (id)thumbnailImageForAlbumAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbnailFrameForAlbumAtIndex:(unsigned int)arg1;
- (float)_interItemPadding;
- (unsigned int)albumIndexForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)disableDeleteButtons;
- (void)enableDeleteButtons;
- (void)setTitlesHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)unhideAlbums;
- (void)setAlbumHidden:(BOOL)arg1 atIndex:(unsigned int)arg2;

@end
