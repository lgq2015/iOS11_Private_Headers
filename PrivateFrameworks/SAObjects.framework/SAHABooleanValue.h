/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHABooleanValue : SAHAAttributeValue

@property (nonatomic) bool value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)booleanValue;
+ (id)booleanValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(bool)arg1;
- (bool)value;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
