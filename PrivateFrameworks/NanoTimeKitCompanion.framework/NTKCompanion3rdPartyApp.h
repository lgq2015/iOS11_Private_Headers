/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanion3rdPartyApp : NTKCompanionApp {
    NSString * _complicationClientIdentifier;
    NRDevice * _device;
    bool  _installed;
    NSArray * _supportedFamilies;
    NSString * _uniqueID;
    NSURL * _urlToComplicationBundle;
    NSURL * _urlToWatchKitBundle;
}

@property (nonatomic, retain) NSString *complicationClientIdentifier;
@property (nonatomic, retain) NRDevice *device;
@property (getter=isInstalled, nonatomic) bool installed;
@property (nonatomic, retain) NSArray *supportedFamilies;
@property (nonatomic, retain) NSString *uniqueID;
@property (nonatomic, retain) NSURL *urlToComplicationBundle;
@property (nonatomic, retain) NSURL *urlToWatchKitBundle;

+ (id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2;
+ (bool)_isValidApplicationInformation:(id)arg1;
+ (bool)_isValidComplicationsInformation:(id)arg1;
+ (id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg1;
+ (id)companion3rdPartyAppWithInfo:(id)arg1 supportedComplicationFamilies:(id)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithDevice:(id)arg1 applicationInfo:(id)arg2 galleryBundles:(id)arg3 watchKitBundle:(id)arg4;
- (id)_initWithWatchAppId:(id)arg1 containerAppId:(id)arg2 complicationClientId:(id)arg3;
- (bool)_installStateFromAppConduitInstallState:(long long)arg1;
- (id)appRegistrationDate;
- (bool)applicationHasBeenUpdated:(id)arg1;
- (id)complication;
- (id)complicationClientIdentifier;
- (id)device;
- (unsigned long long)hash;
- (void)install;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (void)setComplicationClientIdentifier:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setInstalled:(bool)arg1;
- (void)setSupportedFamilies:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setUrlToComplicationBundle:(id)arg1;
- (void)setUrlToWatchKitBundle:(id)arg1;
- (id)supportedFamilies;
- (id)uniqueID;
- (id)urlToComplicationBundle;
- (id)urlToWatchKitBundle;

@end
