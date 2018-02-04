/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAApplicationTemplateInfo : TSATemplateInfo <NSCopying> {
    NSURL * _bundledDocumentContainerURL;
    NSString * _documentVariant;
    NSString * _name;
    NSString * _previewImageLocalization;
    NSString * _previewVariant;
}

@property (nonatomic, readonly) NSString *assetName;
@property (nonatomic, readonly) NSURL *bundledDocumentContainerURL;
@property (nonatomic, readonly) NSString *documentVariant;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSBundle *previewBundle;
@property (nonatomic, copy) NSString *previewImageLocalization;
@property (nonatomic, readonly) NSString *previewVariant;

+ (id)bundledTemplatesDirectoryURL;
+ (id)cachedTemplatesDirectoryURL;
+ (id)localizationBundleForTemplateName:(id)arg1;
+ (id)localizationBundleForTemplateURL:(id)arg1;
+ (id)localizationBundleURLForTemplateName:(id)arg1;
+ (void)setBundledTemplatesDirectoryURL:(id)arg1;

- (id)assetName;
- (id)bundledDocumentContainerURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)documentURL;
- (id)documentVariant;
- (id)initHeadlessWithName:(id)arg1;
- (id)initHeadlessWithName:(id)arg1 documentVariant:(id)arg2 previewVariant:(id)arg3;
- (id)initHeadlessWithName:(id)arg1 variant:(unsigned long long)arg2;
- (id)initHeadlessWithName:(id)arg1 variant:(unsigned long long)arg2 locale:(struct __CFLocale { }*)arg3;
- (id)initWithDisplayName:(id)arg1 name:(id)arg2 documentVariant:(id)arg3 previewVariant:(id)arg4;
- (id)initWithPropertyList:(id)arg1 documentLocale:(id)arg2 documentVariant:(id)arg3 previewVariant:(id)arg4;
- (id)localizationBundle;
- (id)makeIdentifier;
- (id)name;
- (void)prepareWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)previewBundle;
- (id)previewImageLocalization;
- (id)previewImageURL;
- (id)previewVariant;
- (void)setPreviewImageLocalization:(id)arg1;
- (id)tags;
- (id)templateURLWithContainerURL:(id)arg1;

@end
