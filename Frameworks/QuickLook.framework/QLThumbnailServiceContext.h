/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailServiceContext : NSExtensionContext <QLThumbnailHost> {
    QLThumbnailProvider * _thumbnailProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLThumbnailProvider *thumbnailProvider;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_thumbnailGenerationQueue;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 withContents:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 withFileURLHandler:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)protocolHost;
- (void)setThumbnailProvider:(id)arg1;
- (id)thumbnailProvider;

@end
