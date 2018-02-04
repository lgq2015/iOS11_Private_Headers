/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETEventProperty : NSObject {
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long cardinality;
@property (nonatomic, readonly) NSString *longestValueString;
@property (nonatomic, readonly) NSString *name;

+ (id)freeValuedPropertyWithName:(id)arg1;
+ (id)propertyWithName:(id)arg1 enumMapping:(id)arg2;
+ (id)propertyWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(bool)arg3;
+ (id)propertyWithName:(id)arg1 possibleValues:(id)arg2;
+ (id)propertyWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(bool)arg3;
+ (id)propertyWithName:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)propertyWithName:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 clampValues:(bool)arg3;
+ (id)propertyWithName:(id)arg1 rangeMin:(unsigned long long)arg2 rangeMax:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)initWithName:(id)arg1;
- (bool)isValidValue:(id)arg1;
- (id)longestValueString;
- (id)name;
- (id)possibleValues;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validRange;

@end
