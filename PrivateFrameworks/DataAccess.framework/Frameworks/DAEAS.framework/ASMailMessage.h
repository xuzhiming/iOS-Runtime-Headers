/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage  {
    ASEmailItem *_ASEmailItem;
}


- (id)rfc822Data;
- (id)conversationId;
- (id)cc;
- (int)bodySize;
- (id)meetingRequestUUID;
- (id)longID;
- (int)smimeType;
- (id)meetingRequestMetaData;
- (BOOL)read;
- (BOOL)readIsSet;
- (BOOL)flaggedIsSet;
- (BOOL)flagged;
- (BOOL)verbIsSet;
- (int)lastVerb;
- (id)folderID;
- (id)remoteID;
- (id)subject;
- (id)attachments;
- (id)description;
- (void)dealloc;
- (id)body;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)to;
- (id)from;
- (id)conversationIndex;
- (id)threadTopic;
- (id)messageClass;
- (id)displayTo;
- (id)replyTo;
- (id)initWithASEmailItem:(id)arg1;
- (int)bodyTruncated;
- (int)importance;

@end
