/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDocumentation : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _baseDocumentationURL;
    NSMutableDictionary * _cachedData;
    NSString * _humanReadableUpdateName;
    NSString * _licenseAgreementFileName;
    NSURL * _licenseAgreementURL;
    NSString * _primaryLanguage;
    NSString * _releaseNotesFileName;
    NSString * _releaseNotesSummaryFileName;
    NSURL * _releaseNotesSummaryURL;
    NSURL * _releaseNotesURL;
    NSNumber * _slaVersion;
}

@property (nonatomic, retain) NSURL *baseDocumentationURL;
@property (nonatomic, retain) NSString *humanReadableUpdateName;
@property (nonatomic, retain) NSString *licenseAgreementFileName;
@property (nonatomic, retain) NSURL *licenseAgreementURL;
@property (nonatomic, retain) NSString *primaryLanguage;
@property (nonatomic, retain) NSString *releaseNotesFileName;
@property (nonatomic, retain) NSString *releaseNotesSummaryFileName;
@property (nonatomic, retain) NSURL *releaseNotesSummaryURL;
@property (nonatomic, retain) NSURL *releaseNotesURL;
@property (nonatomic, retain) NSNumber *slaVersion;

+ (bool)supportsSecureCoding;

- (id)_cachedDocumentationDataForURL:(id)arg1;
- (void)_clearTransientDocumentationData;
- (id)_getSUImage:(id)arg1;
- (id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2;
- (void)_resetIfNecessary;
- (id)baseDocumentationURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getFullWidthImage;
- (id)getIconImage;
- (bool)hasAnyDocumentation;
- (id)humanReadableUpdateName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentationURL:(id)arg1;
- (id)licenseAgreement;
- (id)licenseAgreementFileName;
- (id)licenseAgreementURL;
- (id)localizedDocumentationStringFromBundle:(struct __CFBundle { }*)arg1 key:(id)arg2;
- (id)localizedStringFromBundle:(struct __CFBundle { }*)arg1 key:(id)arg2;
- (id)localizedURLFromBundle:(struct __CFBundle { }*)arg1 resource:(id)arg2;
- (id)pngImageDataFromBundle:(struct __CFBundle { }*)arg1 fileName:(id)arg2;
- (id)primaryLanguage;
- (id)releaseNotes;
- (id)releaseNotesFileName;
- (id)releaseNotesSummary;
- (id)releaseNotesSummaryFileName;
- (id)releaseNotesSummaryURL;
- (id)releaseNotesURL;
- (void)setBaseDocumentationURL:(id)arg1;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setLicenseAgreementFileName:(id)arg1;
- (void)setLicenseAgreementURL:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setReleaseNotesFileName:(id)arg1;
- (void)setReleaseNotesSummaryFileName:(id)arg1;
- (void)setReleaseNotesSummaryURL:(id)arg1;
- (void)setReleaseNotesURL:(id)arg1;
- (void)setSlaVersion:(id)arg1;
- (id)slaVersion;

@end
