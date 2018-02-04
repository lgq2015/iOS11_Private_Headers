/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIColor : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *alpha;
@property (nonatomic) long long blueValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long greenValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long redValue;
@property (readonly) Class superclass;

+ (id)color;
+ (id)colorWithDictionary:(id)arg1 context:(id)arg2;

- (id)alpha;
- (long long)blueValue;
- (id)encodedClassName;
- (long long)greenValue;
- (id)groupIdentifier;
- (long long)redValue;
- (void)setAlpha:(id)arg1;
- (void)setBlueValue:(long long)arg1;
- (void)setGreenValue:(long long)arg1;
- (void)setRedValue:(long long)arg1;

@end
