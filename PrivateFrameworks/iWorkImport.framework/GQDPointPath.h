/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDPointPath : GQDPath  {
    int mType;
    struct CGPoint { 
        float x; 
        float y; 
    } mPoint;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
}


- (int)type;
- (struct CGPoint { float x1; float x2; })point;
- (struct CGSize { float x1; float x2; })size;
- (int)mapStrType:(struct __CFString { }*)arg1;
- (struct CGPath { }*)createBezierPath;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;

@end
