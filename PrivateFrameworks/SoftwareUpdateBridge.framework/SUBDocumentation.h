/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
 */

@interface SUBDocumentation : NSObject <NSSecureCoding> {
    NSString * _currentLanguage;
    NSURL * _documentationBundleURL;
    NSString * _humanReadableUpdateName;
    NSData * _licenseAgreement;
    NSData * _releaseNotes;
    NSData * _releaseNotesSummary;
}

@property (nonatomic, retain) NSString *currentLanguage;
@property (nonatomic, retain) NSURL *documentationBundleURL;
@property (nonatomic, retain) NSString *humanReadableUpdateName;
@property (nonatomic, retain) NSData *licenseAgreement;
@property (nonatomic, retain) NSData *releaseNotes;
@property (nonatomic, retain) NSData *releaseNotesSummary;

+ (bool)supportsSecureCoding;

- (void)_loadBundleResources;
- (id)_resourceFromBundle:(struct __CFBundle { }*)arg1 forKey:(id)arg2;
- (id)currentLanguage;
- (void)dealloc;
- (id)documentationBundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationBundleURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)licenseAgreement;
- (id)releaseNotes;
- (id)releaseNotesSummary;
- (void)setCurrentLanguage:(id)arg1;
- (void)setDocumentationBundleURL:(id)arg1;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setLicenseAgreement:(id)arg1;
- (void)setReleaseNotes:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;

@end
