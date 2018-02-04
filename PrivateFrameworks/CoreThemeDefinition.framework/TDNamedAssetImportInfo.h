/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDNamedAssetImportInfo : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _alignmentRect;
    unsigned long long  _arrayIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    struct CGColor { } * _cgColor;
    NSArray * _colorComponents;
    long long  _colorSpaceID;
    long long  _compressionType;
    NSArray * _containedImageNames;
    bool  _cubeMap;
    long long  _displayGamut;
    NSURL * _fileURL;
    unsigned long long  _graphicsClass;
    long long  _graphicsFeatureSetClass;
    NSValue * _iconSize;
    long long  _idiom;
    bool  _isFlippable;
    NSArray * _layerReferences;
    long long  _layoutDirection;
    double  _lossyCompressionQuality;
    unsigned long long  _memoryClass;
    NSDate * _modificationDate;
    NSString * _name;
    long long  _nameIdentifier;
    bool  _optOutOfThinning;
    bool  _preservesVectorRepresentation;
    long long  _renditionType;
    struct CGSize { 
        double width; 
        double height; 
    }  _resizableSliceSize;
    long long  _resizingMode;
    unsigned long long  _scaleFactor;
    long long  _sizeClassHorizontal;
    long long  _sizeClassVertical;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _sliceInsets;
    long long  _subtype;
    NSSet * _tags;
    long long  _templateRenderingMode;
    unsigned long long  _textureDepth;
    unsigned long long  _textureHeight;
    NSArray * _textureInfos;
    long long  _textureInterpretation;
    long long  _texturePixelFormat;
    unsigned long long  _textureWidth;
    NSString * _universalTypeIdentifier;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property (nonatomic) unsigned long long arrayIndex;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, readonly) struct CGColor { }*cgColor;
@property (nonatomic, copy) NSArray *colorComponents;
@property (nonatomic) long long colorSpaceID;
@property (nonatomic) long long compressionType;
@property (nonatomic, copy) NSArray *containedImageNames;
@property (nonatomic) bool cubeMap;
@property (nonatomic) long long displayGamut;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic) unsigned long long graphicsClass;
@property (nonatomic) long long graphicsFeatureSetClass;
@property (nonatomic, copy) NSValue *iconSize;
@property (nonatomic) long long idiom;
@property (nonatomic) bool isFlippable;
@property (nonatomic) bool isTemplate;
@property (nonatomic, copy) NSArray *layerReferences;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) double lossyCompressionQuality;
@property (nonatomic) unsigned long long memoryClass;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long nameIdentifier;
@property (nonatomic) bool optOutOfThinning;
@property (nonatomic) bool preservesVectorRepresentation;
@property (nonatomic) long long renditionType;
@property (nonatomic) struct CGSize { double x1; double x2; } resizableSliceSize;
@property (nonatomic) long long resizingMode;
@property (nonatomic) unsigned long long scaleFactor;
@property (nonatomic) long long sizeClassHorizontal;
@property (nonatomic) long long sizeClassVertical;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } sliceInsets;
@property (nonatomic) long long subtype;
@property (nonatomic, copy) NSSet *tags;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) unsigned long long textureDepth;
@property (nonatomic) unsigned long long textureHeight;
@property (nonatomic, copy) NSArray *textureInfos;
@property (nonatomic) long long textureInterpretation;
@property (nonatomic) long long texturePixelFormat;
@property (nonatomic) unsigned long long textureWidth;
@property (nonatomic, copy) NSString *universalTypeIdentifier;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (unsigned long long)arrayIndex;
- (struct CGSize { double x1; double x2; })canvasSize;
- (struct CGColor { }*)cgColor;
- (id)colorComponents;
- (long long)colorSpaceID;
- (long long)compressionType;
- (id)containedImageNames;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cubeMap;
- (void)dealloc;
- (id)description;
- (long long)displayGamut;
- (id)fileURL;
- (unsigned long long)graphicsClass;
- (long long)graphicsFeatureSetClass;
- (id)iconSize;
- (long long)idiom;
- (id)init;
- (bool)isFlippable;
- (bool)isTemplate;
- (id)layerReferences;
- (long long)layoutDirection;
- (double)lossyCompressionQuality;
- (unsigned long long)memoryClass;
- (id)modificationDate;
- (id)name;
- (long long)nameIdentifier;
- (bool)optOutOfThinning;
- (bool)preservesVectorRepresentation;
- (long long)renditionSubtype;
- (long long)renditionType;
- (struct CGSize { double x1; double x2; })resizableSliceSize;
- (long long)resizingMode;
- (unsigned long long)scaleFactor;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setArrayIndex:(unsigned long long)arg1;
- (void)setCGColor:(struct CGColor { }*)arg1;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setColorComponents:(id)arg1;
- (void)setColorSpaceID:(long long)arg1;
- (void)setCompressionType:(long long)arg1;
- (void)setContainedImageNames:(id)arg1;
- (void)setCubeMap:(bool)arg1;
- (void)setDisplayGamut:(long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setGraphicsClass:(unsigned long long)arg1;
- (void)setGraphicsFeatureSetClass:(long long)arg1;
- (void)setIconSize:(id)arg1;
- (void)setIdiom:(long long)arg1;
- (void)setIsFlippable:(bool)arg1;
- (void)setIsTemplate:(bool)arg1;
- (void)setLayerReferences:(id)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setLossyCompressionQuality:(double)arg1;
- (void)setMemoryClass:(unsigned long long)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameIdentifier:(long long)arg1;
- (void)setOptOutOfThinning:(bool)arg1;
- (void)setPreservesVectorRepresentation:(bool)arg1;
- (void)setRenditionType:(long long)arg1;
- (void)setResizableSliceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setResizingMode:(long long)arg1;
- (void)setScaleFactor:(unsigned long long)arg1;
- (void)setSizeClassHorizontal:(long long)arg1;
- (void)setSizeClassVertical:(long long)arg1;
- (void)setSliceInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setSubtype:(long long)arg1;
- (void)setTags:(id)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;
- (void)setTextureDepth:(unsigned long long)arg1;
- (void)setTextureHeight:(unsigned long long)arg1;
- (void)setTextureInfos:(id)arg1;
- (void)setTextureInterpretation:(long long)arg1;
- (void)setTexturePixelFormat:(long long)arg1;
- (void)setTextureWidth:(unsigned long long)arg1;
- (void)setUniversalTypeIdentifier:(id)arg1;
- (long long)sizeClassHorizontal;
- (long long)sizeClassVertical;
- (struct { double x1; double x2; double x3; double x4; })sliceInsets;
- (long long)subtype;
- (id)tags;
- (long long)templateRenderingMode;
- (unsigned long long)textureDepth;
- (unsigned long long)textureHeight;
- (id)textureInfos;
- (long long)textureInterpretation;
- (long long)texturePixelFormat;
- (unsigned long long)textureWidth;
- (id)universalTypeIdentifier;

@end
