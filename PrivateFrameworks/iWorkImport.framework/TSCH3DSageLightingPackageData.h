/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData> {
    NSArray * mLights;
    NSDictionary * mPackage;
}

+ (id)dataWithDictionary:(id)arg1;

- (struct Color { float x1; float x2; float x3; float x4; })ambientColorAtIndex:(unsigned long long)arg1;
- (struct Vector3 { float x1; float x2; float x3; })attenuationAtIndex:(unsigned long long)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })colorAtIndex:(unsigned long long)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4;
- (int)coordinateSpaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (float)cutOffAngleAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (struct Color { float x1; float x2; float x3; float x4; })diffuseColorAtIndex:(unsigned long long)arg1;
- (struct Vector3 { float x1; float x2; float x3; })directionAtIndex:(unsigned long long)arg1;
- (float)dropOffRateAtIndex:(unsigned long long)arg1;
- (bool)enabledAtIndex:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (float)intensityAtIndex:(unsigned long long)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)packageName;
- (struct Vector3 { float x1; float x2; float x3; })positionAtIndex:(unsigned long long)arg1;
- (struct Color { float x1; float x2; float x3; float x4; })specularColorAtIndex:(unsigned long long)arg1;
- (int)typeAtIndex:(unsigned long long)arg1;

@end
