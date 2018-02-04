/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor> {
    PUEditingInitialPayload * __initialPayload;
    long long  _fullSizeImageExtensionHandle;
    long long  _videoPathExtensionHandle;
}

@property (readonly) PUEditingInitialPayload *_initialPayload;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_contentEditingController;
- (id)_initialPayload;
- (void)_releaseSandboxExtensions;
- (void)beginContentEditingWithCompletionHandler:(id /* block */)arg1;
- (void)cancelContentEditing;
- (void)dealloc;
- (void)finishContentEditing;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)arg1;

@end
