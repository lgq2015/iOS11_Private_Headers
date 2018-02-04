/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUExtensionURLHandler : NSObject <NUURLHandler> {
    NSExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)extensionContext;
- (id)initWithExtensionContext:(id)arg1;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;

@end
