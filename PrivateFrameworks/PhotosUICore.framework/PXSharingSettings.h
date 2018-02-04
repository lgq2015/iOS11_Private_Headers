/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSharingSettings : PXSettings {
    unsigned long long  _confidentialityWarningsVersion;
    bool  _showConfidentialityWarnings;
    bool  _showInternalGIFExport;
}

@property (nonatomic) unsigned long long confidentialityWarningsVersion;
@property (nonatomic) bool showConfidentialityWarnings;
@property (nonatomic) bool showInternalGIFExport;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (unsigned long long)confidentialityWarningsVersion;
- (id)debugDescription;
- (void)defaultValueDidChangeForKey:(id)arg1;
- (id)parentSettings;
- (void)setConfidentialityWarningsVersion:(unsigned long long)arg1;
- (void)setDefaultValues;
- (void)setShowConfidentialityWarnings:(bool)arg1;
- (void)setShowInternalGIFExport:(bool)arg1;
- (bool)showConfidentialityWarnings;
- (bool)showInternalGIFExport;

@end
