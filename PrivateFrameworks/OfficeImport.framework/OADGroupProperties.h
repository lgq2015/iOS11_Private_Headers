/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
    NSArray * mEffects;
    OADFill * mFill;
    OADScene3D * mScene3D;
    OADShape3D * mShape3D;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultProperties;

- (void)dealloc;
- (id)description;
- (id)effects;
- (id)fill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (bool)hasEffects;
- (bool)hasFill;
- (bool)hasScene3D;
- (bool)hasShape3D;
- (id)initWithDefaults;
- (id)scene3D;
- (void)setEffects:(id)arg1;
- (void)setFill:(id)arg1;
- (void)setScene3D:(id)arg1;
- (void)setShape3D:(id)arg1;
- (id)shape3D;

@end
