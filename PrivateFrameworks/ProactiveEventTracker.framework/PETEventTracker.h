/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETEventTracker : NSObject {
    NSString * _featureId;
    <PETLoggingOutlet> * _loggingOutlet;
    NSArray * _propertySubsets;
    NSArray * _registeredProperties;
    bool  _testingMode;
}

@property (nonatomic, readonly) NSString *featureId;
@property (nonatomic, readonly) <PETLoggingOutlet> *loggingOutlet;
@property (nonatomic, readonly) NSArray *propertySubsets;
@property (nonatomic, readonly) NSArray *registeredProperties;
@property (nonatomic, readonly) bool testingMode;

- (void).cxx_destruct;
- (void)_checkCardinalityForEvent:(id)arg1;
- (void)_checkInTestingMode;
- (void)_checkKeyLengthForEvent:(id)arg1 metaData:(id)arg2;
- (void)_checkPropertySubsets:(id)arg1;
- (id)_defaultLoggingOutlet;
- (id)_keyMetadataForEvent:(id)arg1;
- (void)_logValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (void)_setLoggingOutlet:(id)arg1;
- (void)_setValue:(id)arg1 forEvent:(id)arg2 stringifiedProperties:(id)arg3 metaData:(id)arg4;
- (id)_stringifiedPropertiesForEvent:(id)arg1 propertyValueArray:(id)arg2;
- (void)_trackEvent:(id)arg1 withPropertyValues:(id)arg2 value:(id)arg3;
- (void)_trackEvent:(id)arg1 withPropertyValues:(id)arg2 value:(id)arg3 overwrite:(bool)arg4;
- (bool)_validatePropertyValues:(id)arg1;
- (void)disableTestingMode;
- (void)enableTestingMode;
- (id)featureId;
- (id)getKeyValueDict;
- (id)getValueForKey:(id)arg1;
- (id)initWithFeatureId:(id)arg1 registerProperties:(id)arg2 propertySubsets:(id)arg3;
- (id)loggingOutlet;
- (id)propertySubsets;
- (id)registeredProperties;
- (bool)testingMode;

@end
