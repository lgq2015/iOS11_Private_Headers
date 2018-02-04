/* made by EzioChiu.
 */

@protocol CKFileTransfer <NSObject>

@required

- (IMMessage *)IMMessage;
- (NSDictionary *)attributionInfo;
- (unsigned long long)currentBytes;
- (NSError *)error;
- (void)fetchHighQualityFile:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSURL *, void*
- (NSURL *)fileURL;
- (NSString *)filename;
- (NSString *)guid;
- (bool)hideAttachment;
- (id)initWithFileURL:(NSURL *)arg1 transcoderUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3 hideAttachment:(bool)arg4;
- (id)initWithTransferGUID:(NSString *)arg1 imMessage:(IMMessage *)arg2;
- (bool)isDownloadable;
- (bool)isDownloading;
- (bool)isFileDataReady;
- (bool)isFileURLFinalized;
- (bool)isRestoring;
- (bool)isSticker;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;
- (void)setIMMessage:(IMMessage *)arg1;
- (NSDictionary *)stickerUserInfo;
- (unsigned long long)totalBytes;
- (NSDictionary *)transcoderUserInfo;

@optional

- (id)initWithStickerFileURL:(NSURL *)arg1 transferUserInfo:(NSDictionary *)arg2 attributionInfo:(NSDictionary *)arg3;

@end
