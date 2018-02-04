/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellDiff : TSPObject <NSCopying> {
    TSSPropertyMap * _propertyMapToReset;
    TSSPropertyMap * _propertyMapToSet;
}

@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) TSSPropertyMap *propertyMapToReset;
@property (nonatomic, retain) TSSPropertyMap *propertyMapToSet;

+ (id)cellDiffWithContext:(id)arg1;

- (id)allProperties;
- (id)cellDiffFilteredBySetProperties:(id)arg1;
- (void)clear;
- (bool)containsAnyPropertiesInSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)doesResetAnyProperties:(id)arg1;
- (bool)doesResetProperty:(int)arg1;
- (bool)doesSetAnyProperties:(id)arg1;
- (bool)doesSetProperty:(int)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isEmpty;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectApplyingDiffToObject:(id)arg1 andUpdateInverse:(id)arg2;
- (id)objectForResetProperty:(int)arg1;
- (id)objectForSetProperty:(int)arg1;
- (id)propertyMapToReset;
- (id)propertyMapToSet;
- (id)propertyMapToSetWithProperties:(id)arg1;
- (void)removeObjectsToSetForProperty:(int)arg1;
- (void)resetFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)resetIntValue:(int)arg1 forProperty:(int)arg2;
- (void)resetObject:(id)arg1 forProperty:(int)arg2;
- (void)resetPropertiesFromMap:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setObject:(id)arg1 forProperty:(int)arg2;
- (void)setPropertiesFromMap:(id)arg1;
- (void)setPropertyMapToReset:(id)arg1;
- (void)setPropertyMapToSet:(id)arg1;

@end
