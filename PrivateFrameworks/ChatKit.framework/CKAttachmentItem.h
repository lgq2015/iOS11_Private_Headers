/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAttachmentItem : NSObject <QLPreviewItem> {
    NSURL * _appendedBundleURL;
    NSDate * _createdDate;
    NSURL * _fileURL;
    NSString * _guid;
    NSString * _irisVideoPath;
    bool  _isIrisAsset;
    bool  _isSticker;
    NSURL * _previewURL;
    bool  _showDocumentIcon;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _transferGUID;
}

@property (nonatomic, retain) NSDate *createdDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, copy) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *irisVideoPath;
@property (nonatomic) bool isIrisAsset;
@property (nonatomic) bool isSticker;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (nonatomic, retain) NSURL *previewURL;
@property (nonatomic) bool showDocumentIcon;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transferGUID;

+ (id)UTITypes;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (id)previewCache;
+ (id)previewSizingQueue;
+ (unsigned long long)pxWidth;

- (void).cxx_destruct;
- (id)UTIType;
- (id)_getIrisBundleURL;
- (id)_getTempIrisBundleLocation;
- (id)_getTempIrisFolder;
- (void)_removeAppendedBundle;
- (void)_savePreview:(id)arg1;
- (id)_savedPreviewFromURL:(id)arg1;
- (id)cachedPreview;
- (id)calculateIrisVideoPath;
- (bool)canShareItem;
- (id)createdDate;
- (void)dealloc;
- (id)description;
- (id)dragItem;
- (id)fileIcon;
- (id)fileURL;
- (void)generatePreviewWithCompletion:(id /* block */)arg1;
- (id)getIrisVideoPath;
- (id)guid;
- (id)imageData;
- (id)initWithFileURL:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 transferGUID:(id)arg3 guid:(id)arg4 createdDate:(id)arg5;
- (id)irisVideoPath;
- (bool)isEqual:(id)arg1;
- (bool)isIrisAsset;
- (bool)isSticker;
- (id)pasteboardItem;
- (id)previewItemURL;
- (id)previewURL;
- (void)setCreatedDate:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIrisVideoPath:(id)arg1;
- (void)setIsIrisAsset:(bool)arg1;
- (void)setIsSticker:(bool)arg1;
- (void)setPreviewURL:(id)arg1;
- (void)setShowDocumentIcon:(bool)arg1;
- (void)setTransferGUID:(id)arg1;
- (bool)showDocumentIcon;
- (struct CGSize { double x1; double x2; })size;
- (void)startDeferredSetup;
- (id)transferGUID;

@end
