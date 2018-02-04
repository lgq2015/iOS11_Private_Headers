/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAIntegerValue : SAHAAttributeValue

@property (nonatomic) long long value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)integerValue;
+ (id)integerValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(long long)arg1;
- (long long)value;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
