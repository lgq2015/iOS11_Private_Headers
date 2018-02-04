/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {
    MDLMaterial * _baseMaterial;
    NSMutableArray * _builtinProperties;
    unsigned long long  _materialFace;
    NSString * _name;
    MDLScatteringFunction * _scatteringFunction;
    NSMutableArray * _userProperties;
}

@property (nonatomic, retain) MDLMaterial *baseMaterial;
@property (nonatomic, readonly) struct BidirectionalScatteringDistributionFunction { int (**x1)(); struct BSDFMaterialValues { struct CGColor {} *x_2_1_1; float x_2_1_2; struct CGColor {} *x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; }*bsdf;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) unsigned long long materialFace;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, retain) MDLScatteringFunction *scatteringFunction;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

- (void).cxx_destruct;
- (id)baseMaterial;
- (struct BidirectionalScatteringDistributionFunction { int (**x1)(); struct BSDFMaterialValues { struct CGColor {} *x_2_1_1; float x_2_1_2; struct CGColor {} *x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; }*)bsdf;
- (void)conformToMatProperties;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;
- (id)initWithName:(id)arg1 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution { int (**x1)(); struct BSDFMaterialValues { struct CGColor {} *x_2_1_1; float x_2_1_2; struct CGColor {} *x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; }*)arg2;
- (id)initWithName:(id)arg1 scatteringFunction:(id)arg2;
- (void)loadTexturesUsingResolver:(id)arg1;
- (unsigned long long)materialFace;
- (id)name;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesWithSemantic:(unsigned long long)arg1;
- (id)propertyNamed:(id)arg1;
- (id)propertyWithSemantic:(unsigned long long)arg1;
- (void)removeAllProperties;
- (void)removeProperty:(id)arg1;
- (void)resolveTexturesWithResolver:(id)arg1;
- (id)scatteringFunction;
- (void)setBaseMaterial:(id)arg1;
- (void)setMaterialFace:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setProperty:(id)arg1;
- (void)setScatteringFunction:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

+ (id)materialWithSCNMaterial:(id)arg1;

@end
