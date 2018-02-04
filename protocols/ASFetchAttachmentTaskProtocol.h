/* made by EzioChiu.
 */

@protocol ASFetchAttachmentTaskProtocol <DATask>

@required

- (NSString *)attachmentContentType;
- (NSString *)attachmentName;
- (NSString *)attachmentUUID;
- (id)initForMessageServerID:(NSString *)arg1 andAttachmentName:(NSString *)arg2;
- (id)initForMessageUUID:(NSString *)arg1;
- (NSFileHandle *)localFileHandle;
- (unsigned long long)localFileLength;
- (NSString *)localFileName;
- (NSString *)messageID;
- (void)setAttachmentContentType:(NSString *)arg1;
- (void)setAttachmentName:(NSString *)arg1;
- (void)setAttachmentUUID:(NSString *)arg1;
- (void)setLocalFileHandle:(NSFileHandle *)arg1;
- (void)setLocalFileLength:(unsigned long long)arg1;
- (void)setLocalFileName:(NSString *)arg1;
- (void)setMessageID:(NSString *)arg1;

@end
