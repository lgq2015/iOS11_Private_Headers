/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes> {
    unsigned int  _dimension1;
    unsigned int  _dimension2;
    unsigned int  _memoryClass;
    unsigned int  _nameIdentifier;
    unsigned int  _scaleFactor;
    struct _renditionkeytoken { unsigned short x1; unsigned short x2; } * _scratchKey;
    struct _renditionkeytoken { 
        unsigned short identifier; 
        unsigned short value; 
    }  _stackScratchKey;
    unsigned int  _subtype;
}

@property (nonatomic, retain) TDThemeDirection *direction;
@property (nonatomic, retain) TDThemeElement *element;
@property (nonatomic, retain) TDThemeDisplayGamut *gamut;
@property (nonatomic, retain) TDThemeGraphicsFeatureSetClass *graphicsFeatureSetClass;
@property (nonatomic, retain) TDThemeIdiom *idiom;
@property (nonatomic, retain) TDThemeDrawingLayer *layer;
@property (nonatomic, retain) TDThemePart *part;
@property (nonatomic, retain) TDThemePresentationState *presentationState;
@property (nonatomic, retain) TDThemeState *previousState;
@property (nonatomic, retain) TDThemeValue *previousValue;
@property (nonatomic, retain) TDThemeSize *size;
@property (nonatomic, retain) TDThemeUISizeClass *sizeClassHorizontal;
@property (nonatomic, retain) TDThemeUISizeClass *sizeClassVertical;
@property (nonatomic, retain) TDThemeState *state;
@property (nonatomic, retain) TDThemeDeploymentTarget *target;
@property (nonatomic, retain) TDThemeValue *value;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (long long)attributeCount;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataFromAttributes;
- (void)dealloc;
- (id)debugDescription;
- (unsigned int)dimension1;
- (unsigned int)dimension2;
- (void)getKey:(struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1;
- (const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)key;
- (id)keyDescription;
- (const struct _renditionkeyfmt { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4[0]; }*)keyFormat;
- (unsigned int)memoryClass;
- (unsigned int)nameIdentifier;
- (unsigned int)scaleFactor;
- (id)scaleFactorString;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setAttributesFromData:(id)arg1;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken { unsigned short x1; unsigned short x2; }*)arg1 withDocument:(id)arg2;
- (void)setDimension1:(unsigned int)arg1;
- (void)setDimension2:(unsigned int)arg1;
- (void)setMemoryClass:(unsigned int)arg1;
- (void)setNameIdentifier:(unsigned int)arg1;
- (void)setScaleFactor:(unsigned int)arg1;
- (void)setScaleFactorString:(id)arg1;
- (void)setSubtype:(unsigned int)arg1;
- (unsigned int)subtype;

@end