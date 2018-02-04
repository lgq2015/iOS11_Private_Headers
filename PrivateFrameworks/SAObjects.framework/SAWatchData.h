/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWatchData : AceObject <SAAceSerializable>

@property (nonatomic) bool configuredForLeftWrist;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interfaceOrientation;
@property (readonly) Class superclass;
@property (nonatomic) bool victoryDevice;

+ (id)watchData;
+ (id)watchDataWithDictionary:(id)arg1 context:(id)arg2;

- (bool)configuredForLeftWrist;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interfaceOrientation;
- (void)setConfiguredForLeftWrist:(bool)arg1;
- (void)setInterfaceOrientation:(id)arg1;
- (void)setVictoryDevice:(bool)arg1;
- (bool)victoryDevice;

@end
