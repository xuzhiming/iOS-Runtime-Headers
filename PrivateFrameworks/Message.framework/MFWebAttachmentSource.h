/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableDictionary, MFLock;

@interface MFWebAttachmentSource : NSObject  {
    MFLock *_attachmentsLock;
    NSMutableDictionary *_attachmentsByURL;
}

+ (id)allSources;

- (void)removeAttachmentForURL:(id)arg1;
- (BOOL)setAttachment:(id)arg1 forURL:(id)arg2;
- (id)attachmentForURL:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
