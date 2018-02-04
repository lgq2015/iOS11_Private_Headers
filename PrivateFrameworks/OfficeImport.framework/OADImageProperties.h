/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADImageProperties : OADGraphicProperties {
    OADImageFill * mImageFill;
}

+ (id)defaultProperties;

- (void)dealloc;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (bool)hasImageFill;
- (id)imageFill;
- (void)setImageFill:(id)arg1;

@end
