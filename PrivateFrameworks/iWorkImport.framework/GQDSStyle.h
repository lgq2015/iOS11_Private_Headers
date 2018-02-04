/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSStyle : NSObject <GQDNameMappableWithDefault> {
    GQDSStyle * mParent;
    struct GQDSMap { } * mPropertyMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createReplacementForMissingObject:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
+ (id)createReplacementForMissingStyleOfType:(int)arg1;
+ (struct GQDSMap { }*)defaultMapForStyleType:(int)arg1;
+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;
+ (int)styleTypeForNodeName:(const char *)arg1;

- (void)dealloc;
- (bool)hasValueForBoolProperty:(int)arg1 value:(bool*)arg2;
- (bool)hasValueForBoolProperty:(int)arg1 value:(bool*)arg2 wasOverriddenWithNull:(bool*)arg3;
- (bool)hasValueForDoubleProperty:(int)arg1 value:(double*)arg2;
- (bool)hasValueForDoubleProperty:(int)arg1 value:(double*)arg2 wasOverriddenWithNull:(bool*)arg3;
- (bool)hasValueForFloatProperty:(int)arg1 value:(float*)arg2;
- (bool)hasValueForFloatProperty:(int)arg1 value:(float*)arg2 wasOverriddenWithNull:(bool*)arg3;
- (bool)hasValueForIntProperty:(int)arg1 value:(int*)arg2;
- (bool)hasValueForIntProperty:(int)arg1 value:(int*)arg2 wasOverriddenWithNull:(bool*)arg3;
- (bool)hasValueForObjectProperty:(int)arg1 value:(id*)arg2;
- (bool)hasValueForObjectProperty:(int)arg1 value:(id*)arg2 wasOverriddenWithNull:(bool*)arg3;
- (bool)overridesBoolProperty:(int)arg1 value:(bool*)arg2;
- (bool)overridesDoubleProperty:(int)arg1 value:(double*)arg2;
- (bool)overridesFloatProperty:(int)arg1 value:(float*)arg2;
- (bool)overridesIntProperty:(int)arg1 value:(int*)arg2;
- (bool)overridesObjectProperty:(int)arg1 value:(id*)arg2;
- (id)parent;
- (void)setParent:(id)arg1;
- (void)setPropertyMap:(struct GQDSMap { }*)arg1;
- (bool)valueForBoolProperty:(int)arg1;
- (double)valueForDoubleProperty:(int)arg1;
- (float)valueForFloatProperty:(int)arg1;
- (int)valueForIntProperty:(int)arg1;
- (id)valueForObjectProperty:(int)arg1;

@end
