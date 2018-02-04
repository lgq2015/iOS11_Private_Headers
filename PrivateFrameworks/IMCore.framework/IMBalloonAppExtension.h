/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMBalloonAppExtension : IMBalloonPlugin {
    bool  _canSendDataPayloads;
    NSExtension * _extension;
    LSPlugInKitProxy * _proxy;
    NSUUID * _requestIdentifier;
    bool  _shouldBalloonHideAppIcon;
}

@property (nonatomic) bool canSendDataPayloads;
@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (nonatomic, readonly, retain) NSExtension *extension;
@property (nonatomic, readonly) bool isLaunchProhibited;
@property (nonatomic, readonly, retain) NSNumber *itemID;
@property (nonatomic, readonly, retain) <PKPlugIn> *plugin;
@property (nonatomic, retain) LSPlugInKitProxy *proxy;
@property NSUUID *requestIdentifier;
@property (nonatomic) bool shouldBalloonHideAppIcon;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3;
- (bool)canSendDataPayloads;
- (id)extension;
- (id)extensionConnection;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
- (bool)isBetaPlugin;
- (bool)isLaunchProhibited;
- (id)itemID;
- (id)plugin;
- (id)proxy;
- (id)proxyWithErrorHandle:(id /* block */)arg1;
- (id)requestIdentifier;
- (void)setCanSendDataPayloads:(bool)arg1;
- (void)setProxy:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setShouldBalloonHideAppIcon:(bool)arg1;
- (bool)shouldBalloonHideAppIcon;
- (id)version;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_breadcrumbImage;
- (id)__ck_browserImage;
- (id)__ck_statusImage;
- (id)_adamID;
- (id)containingBundleIdentifier;

@end
