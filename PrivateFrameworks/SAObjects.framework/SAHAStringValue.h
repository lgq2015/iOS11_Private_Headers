/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAStringValue : SAHAAttributeValue

@property (nonatomic, copy) NSString *value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)stringValue;
+ (id)stringValueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
