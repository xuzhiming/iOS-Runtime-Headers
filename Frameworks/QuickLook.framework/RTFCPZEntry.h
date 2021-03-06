/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <RTFCPZArchiveInputStream>;

@interface RTFCPZEntry : NSObject  {
    <RTFCPZArchiveInputStream> *mInput;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
}


- (void)dealloc;
- (id)data;
- (id)inputStream;
- (void)copyToFile:(id)arg1;
- (id)initFromCentralFileHeader:(const char *)arg1 inputStream:(id)arg2;

@end
