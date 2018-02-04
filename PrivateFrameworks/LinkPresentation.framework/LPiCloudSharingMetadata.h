/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor> {
    NSString * _application;
    NSString * _applicationBundleIdenfier;
    LPImage * _icon;
    NSString * _title;
}

@property (nonatomic, copy) NSString *application;
@property (nonatomic, copy) NSString *applicationBundleIdenfier;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)application;
- (id)applicationBundleIdenfier;
- (id)computeIcon;
- (id)computeLocalizedApplicationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationBundleIdenfier:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
