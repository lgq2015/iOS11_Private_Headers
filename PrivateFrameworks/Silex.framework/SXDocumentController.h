/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentController : NSObject {
    NSMutableDictionary * _componentStyles;
    NSMutableDictionary * _componentTextStyles;
    SXDocument * _document;
    <SXFontIndex> * _fontIndex;
    SXImageController * _imageController;
}

@property (nonatomic, retain) NSMutableDictionary *componentStyles;
@property (nonatomic, retain) NSMutableDictionary *componentTextStyles;
@property (nonatomic, readonly) SXDocument *document;
@property (nonatomic, readonly) UIColor *documentBackgroundColor;
@property (nonatomic, readonly) <SXFontIndex> *fontIndex;
@property (nonatomic, retain) SXImageController *imageController;
@property (nonatomic, readonly) SXMetaData *metaData;
@property (nonatomic, readonly) UIColor *topBackgroundColor;

- (void).cxx_destruct;
- (id)allImageResources;
- (id)componentIdentifierUsingThumbnail;
- (id)componentIdentifierUsingThumbnailInComponents:(id)arg1;
- (id)componentLayoutForIdentifier:(id)arg1;
- (id)componentStyleForIdentifier:(id)arg1;
- (id)componentStyleForIdentifier:(id)arg1 andClassification:(id)arg2;
- (id)componentStyles;
- (id)componentTextStyleForIdentifier:(id)arg1;
- (id)componentTextStyleForIdentifier:(id)arg1 andClassification:(id)arg2;
- (id)componentTextStyleForIdentifier:(id)arg1 inheritingFromComponentTextStyle:(id)arg2;
- (id)componentTextStyles;
- (id)dataTableStyleForIdentifier:(id)arg1;
- (id)dataTableStyleForIdentifier:(id)arg1 andClassification:(id)arg2;
- (id)document;
- (id)documentBackgroundColor;
- (id)filterImageResources;
- (id)fontIndex;
- (id)imageController;
- (id)imageResourceForIdentifier:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)mergeJSONObjects:(id)arg1;
- (id)mergedObjectsWithIdentifier:(id)arg1 andDefaultIdentifiers:(id)arg2 fromDictionary:(id)arg3;
- (id)metaData;
- (id)requiredResourceURLs;
- (id)resourceForIdentifier:(id)arg1;
- (void)setComponentStyles:(id)arg1;
- (void)setComponentTextStyles:(id)arg1;
- (void)setImageController:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1;
- (id)topBackgroundColor;

@end
