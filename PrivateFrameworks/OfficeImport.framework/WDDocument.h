/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBackground, OADTheme, WDListTable, NSMutableArray, WDRevisionAuthorTable, WDListDefinitionTable, WDStyleSheet, WDText, WDFontTable, NSString, NSDate;

@interface WDDocument : OCDDocument  {
    WDStyleSheet *mStyleSheet;
    WDFontTable *mFontTable;
    WDListDefinitionTable *mListDefinitionTable;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    WDListTable *mListTable;
    NSMutableArray *mSections;
    unsigned short mDefaultTabWidth;
    WDText *mImageBulletText;
    WDText *mFootnoteSeparator;
    WDText *mFootnoteContinuationSeparator;
    WDText *mFootnoteContinuationNotice;
    WDText *mEndnoteSeparator;
    WDText *mEndnoteContinuationSeparator;
    WDText *mEndnoteContinuationNotice;
    int mFootnoteNumberFormat;
    int mEndnoteNumberFormat;
    int mFootnotePosition;
    int mEndnotePosition;
    int mFootnoteRestart;
    int mEndnoteRestart;
    unsigned short mFootnoteNumberingStart;
    int mGutterPosition;
    NSString *mOleFilename;
    short mZoomPercentage;
    NSString *mVersion;
    unsigned int mMirrorMargins : 1;
    unsigned int mBorderSurroundHeader : 1;
    unsigned int mBorderSurroundFooter : 1;
    unsigned int mAutoHyphenate : 1;
    unsigned int mEvenAndOddHeaders : 1;
    unsigned int mGraphicsInHeaderFooter : 1;
    unsigned int mBookFold : 1;
    unsigned int mShowMarkup : 1;
    unsigned int mShowComments : 1;
    unsigned int mTrackChanges : 1;
    unsigned int mShowRevisionMarksOnScreen : 1;
    unsigned int mShowInsertionsAndDeletions : 1;
    unsigned int mShowFormatting : 1;
    unsigned int mShowOutline : 1;
    NSMutableArray *mDocumentImages;
    NSMutableArray *mChangeTrackingEditDates;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSDate *mCreationDate;
    NSMutableArray *mImageBullets;
    int mZIndexTotalForMainText;
    int mZIndexTotalForHeaderFooterText;
    OADBackground *mDocumentBackground;
    OADTheme *mTheme;
}

+ (int)thumbnailCutOff;

- (id)init;
- (void)dealloc;
- (void)setCreationDate:(id)arg1;
- (id)creationDate;
- (id)theme;
- (id)sections;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)styleSheet;
- (int)sectionCount;
- (id)sectionAt:(int)arg1;
- (BOOL)mirrorMargins;
- (BOOL)borderSurroundHeader;
- (BOOL)borderSurroundFooter;
- (BOOL)graphicsInHeaderFooter;
- (void)setGraphicsInHeaderFooter:(BOOL)arg1;
- (unsigned short)defaultTabWidth;
- (BOOL)autoHyphenate;
- (BOOL)evenAndOddHeaders;
- (int)footnoteNumberFormat;
- (int)endnoteNumberFormat;
- (int)footnotePosition;
- (int)endnotePosition;
- (int)footnoteRestart;
- (int)endnoteRestart;
- (unsigned short)footnoteNumberingStart;
- (int)listDefinitionCount;
- (id)listDefinitionAt:(int)arg1;
- (id)addListDefinition;
- (int)gutterPosition;
- (id)oleFilename;
- (BOOL)bookFold;
- (short)zoomPercentage;
- (void)addImageBullets;
- (int)revisionAuthorCount;
- (id)revisionAuthorAt:(int)arg1;
- (void)addRevisionAuthor:(id)arg1;
- (BOOL)showMarkup;
- (BOOL)showComments;
- (BOOL)trackChanges;
- (BOOL)showRevisionMarksOnScreen;
- (BOOL)showInsertionsAndDeletions;
- (BOOL)showFormatting;
- (BOOL)showOutline;
- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2;
- (id)changeTrackingEditDates;
- (id)changeTrackingEditAuthors;
- (id)documentBackground;
- (void)removeEmptySections;
- (int)zIndexTotalForMainText;
- (int)zIndexTotalForHeaderFooterText;
- (id)sectionIterator;
- (id)mainBlocksIterator;
- (id)mainRunsIterator;
- (id)footnoteIterator;
- (id)endnoteIterator;
- (id)annotationIterator;
- (id)footnoteBlockIterator;
- (id)endnoteBlockIterator;
- (id)annotationBlockIterator;
- (BOOL)isFromBinary;
- (int)listCount;
- (id)listAt:(int)arg1;
- (id)newSectionIterator;
- (id)newMainBlocksIterator;
- (id)newMainRunsIterator;
- (id)newFootnoteIterator;
- (id)newEndnoteIterator;
- (id)newAnnotationIterator;
- (id)newFootnoteBlockIterator;
- (id)newEndnoteBlockIterator;
- (id)newAnnotationBlockIterator;
- (int)revisionAuthorAddLookup:(id)arg1;
- (id)lastSection;
- (id)listDefinitionWithId:(int)arg1;
- (id)imageBulletParagraph;
- (id)addList:(id)arg1;
- (id)imageBulletWithCharacterOffset:(int)arg1;
- (id)applicationName;
- (id)fontTable;
- (void)setOleFilename:(id)arg1;
- (void)setDocumentBackground:(id)arg1;
- (void)setZIndexTotalForMainText:(int)arg1;
- (void)setZIndexTotalForHeaderFooterText:(int)arg1;
- (id)imageBullets;
- (id)addImageBulletText;
- (id)listDefinitionTable;
- (id)listTable;
- (id)revisionAuthorTable;
- (id)footnoteSeparator;
- (id)footnoteContinuationSeparator;
- (id)footnoteContinuationNotice;
- (id)endnoteSeparator;
- (id)endnoteContinuationSeparator;
- (id)endnoteContinuationNotice;
- (id)imageBulletText;
- (id)addSection;
- (void)setTrackChanges:(BOOL)arg1;
- (void)setShowRevisionMarksOnScreen:(BOOL)arg1;
- (void)setShowInsertionsAndDeletions:(BOOL)arg1;
- (void)setShowFormatting:(BOOL)arg1;
- (void)setShowMarkup:(BOOL)arg1;
- (void)setShowComments:(BOOL)arg1;
- (void)setMirrorMargins:(BOOL)arg1;
- (void)setBorderSurroundHeader:(BOOL)arg1;
- (void)setBorderSurroundFooter:(BOOL)arg1;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (void)setAutoHyphenate:(BOOL)arg1;
- (void)setEvenAndOddHeaders:(BOOL)arg1;
- (void)setFootnotePosition:(int)arg1;
- (void)setEndnotePosition:(int)arg1;
- (void)setFootnoteNumberFormat:(int)arg1;
- (void)setEndnoteNumberFormat:(int)arg1;
- (void)setFootnoteRestart:(int)arg1;
- (void)setEndnoteRestart:(int)arg1;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (void)setGutterPosition:(int)arg1;
- (void)setBookFold:(BOOL)arg1;
- (void)setZoomPercentage:(short)arg1;
- (void)setShowOutline:(BOOL)arg1;

@end
