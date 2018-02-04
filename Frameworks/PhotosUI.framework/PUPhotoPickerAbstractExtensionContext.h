/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)firstPayloadFromExtensionItems:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidateContext;
- (id)principalObject;
- (id)proxy;

@end
