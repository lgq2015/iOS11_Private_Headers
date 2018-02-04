/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDBFileTransfer : NSObject <CKFileTransfer> {
    NSDictionary * _attributionInfo;
    NSURL * _fileURL;
    NSString * _filename;
    NSString * _guid;
    bool  _hideAttachment;
    bool  _isSticker;
    NSDictionary * _stickerUserInfo;
    NSDictionary * _transcoderUserInfo;
    long long  _transferState;
}

@property (nonatomic, retain) IMMessage *IMMessage;
@property (nonatomic, copy) NSDictionary *attributionInfo;
@property (nonatomic, readonly) unsigned long long currentBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDownloadable, nonatomic, readonly) bool downloadable;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly, copy) NSError *error;
@property (getter=isFileDataReady, nonatomic, readonly) bool fileDataReady;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (getter=isFileURLFinalized, nonatomic, readonly) bool fileURLFinalized;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, readonly, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideAttachment;
@property (nonatomic, readonly) bool isSticker;
@property (getter=isRestoring, nonatomic, readonly) bool restoring;
@property (nonatomic, readonly, copy) NSDictionary *stickerUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long totalBytes;
@property (nonatomic, readonly, copy) NSDictionary *transcoderUserInfo;
@property (nonatomic) long long transferState;

- (void).cxx_destruct;
- (id)attributionInfo;
- (unsigned long long)currentBytes;
- (id)description;
- (id)error;
- (void)fetchHighQualityFile:(id /* block */)arg1;
- (id)fileURL;
- (id)filename;
- (id)guid;
- (bool)hideAttachment;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2 attributionInfo:(id)arg3 hideAttachment:(bool)arg4;
- (id)initWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (bool)isDownloadable;
- (bool)isDownloading;
- (bool)isFileDataReady;
- (bool)isFileURLFinalized;
- (bool)isRestoring;
- (bool)isSticker;
- (void)mediaObjectAdded;
- (void)mediaObjectRemoved;
- (void)setAttributionInfo:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setTransferState:(long long)arg1;
- (id)stickerUserInfo;
- (unsigned long long)totalBytes;
- (id)transcoderUserInfo;
- (long long)transferState;

@end
