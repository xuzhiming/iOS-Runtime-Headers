/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface StyledMPMediaQuery : MPMediaQuery  {
    struct { int (*x1)(); int (*x2)(); int x3; int x4; int x5; id x6; id x7; id x8; } *_searchStyle;
    int _entityType;
}

@property struct { int (*x1)(); int (*x2)(); int x3; int x4; int x5; id x6; id x7; id x8; }* searchStyle;
@property int entityType;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)entityType;
- (struct { int (*x1)(); int (*x2)(); int x3; int x4; int x5; id x6; id x7; id x8; }*)searchStyle;
- (id)queryForEntityAtIndex:(unsigned int)arg1;
- (unsigned long long)playlistUIDAtIndex:(unsigned int)arg1;
- (id)initWithSearchStyle:(struct { int (*x1)(); int (*x2)(); int x3; int x4; int x5; id x6; id x7; id x8; }*)arg1 searchString:(id)arg2;
- (void)setEntityType:(int)arg1;
- (void)setSearchStyle:(struct { int (*x1)(); int (*x2)(); int x3; int x4; int x5; id x6; id x7; id x8; }*)arg1;

@end
