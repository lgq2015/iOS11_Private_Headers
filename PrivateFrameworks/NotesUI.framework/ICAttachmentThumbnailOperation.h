/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICAttachmentThumbnailOperation : NSBlockOperation {
    NSManagedObjectID * _attachmentID;
    ICAttachmentPreviewImageLoader * _attachmentPreviewImageLoader;
    bool  _attachmentPropertiesCaptured;
    NSCache * _cache;
    NSString * _cacheKey;
    NSMutableArray * _completionBlocks;
    id /* block */  _fallbackBlock;
    unsigned long long  _imageScaling;
    bool  _isMovie;
    NSURL * _mediaURL;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    id /* block */  _processingBlock;
    double  _scale;
    bool  _showAsFileIcon;
}

@property (nonatomic, retain) NSManagedObjectID *attachmentID;
@property (nonatomic, retain) ICAttachmentPreviewImageLoader *attachmentPreviewImageLoader;
@property (nonatomic) bool attachmentPropertiesCaptured;
@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSMutableArray *completionBlocks;
@property (nonatomic, copy) id /* block */ fallbackBlock;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) bool isMovie;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic, copy) id /* block */ processingBlock;
@property (nonatomic) double scale;
@property (nonatomic) bool showAsFileIcon;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id)attachmentID;
- (id)attachmentPreviewImageLoader;
- (bool)attachmentPropertiesCaptured;
- (id)cache;
- (id)cacheKey;
- (void)capturePropertiesFromAttachment:(id)arg1;
- (id)completionBlocks;
- (id /* block */)fallbackBlock;
- (unsigned long long)imageScaling;
- (id)initWithAttachment:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 processingBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7 fallbackBlock:(id /* block */)arg8;
- (bool)isMovie;
- (void)main;
- (id)mediaURL;
- (struct CGSize { double x1; double x2; })minSize;
- (id /* block */)processingBlock;
- (double)scale;
- (void)setAttachmentID:(id)arg1;
- (void)setAttachmentPreviewImageLoader:(id)arg1;
- (void)setAttachmentPropertiesCaptured:(bool)arg1;
- (void)setCache:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setFallbackBlock:(id /* block */)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setIsMovie:(bool)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProcessingBlock:(id /* block */)arg1;
- (void)setScale:(double)arg1;
- (void)setShowAsFileIcon:(bool)arg1;
- (bool)showAsFileIcon;

@end
