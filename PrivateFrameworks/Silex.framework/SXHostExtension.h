/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXHostExtension : SXHost {
    NSExtensionContext * _extensionContext;
    bool  _isActive;
}

@property (nonatomic) NSExtensionContext *extensionContext;
@property (nonatomic) bool isActive;

- (void).cxx_destruct;
- (bool)active;
- (bool)canOpenURL:(id)arg1;
- (id)extensionContext;
- (void)extensionHostDidBecomeActive:(id)arg1;
- (void)extensionHostDidEnterBackground:(id)arg1;
- (void)extensionHostWillEnterForeground:(id)arg1;
- (id)initWithExtensionContext:(id)arg1;
- (bool)isActive;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionContext:(id)arg1;
- (void)setIsActive:(bool)arg1;

@end
