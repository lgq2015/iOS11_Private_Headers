/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _SlotDescriptor : NSObject <NTKInstalledSystemApplicationsChangeObserver> {
    NSIndexSet * _allowedTypes;
    long long  _family;
    NSIndexSet * _possibleTypes;
    NSArray * _typesRankedList;
}

@property (nonatomic, readonly) NSIndexSet *allowedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSIndexSet *possibleTypes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *typesRankedList;

+ (id)descriptorWithComplicationFamily:(long long)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3;

- (void).cxx_destruct;
- (id)allowedTypes;
- (bool)allowsType:(unsigned long long)arg1;
- (long long)family;
- (void)installedSystemApplicationsDidChange;
- (id)possibleTypes;
- (bool)supportsType:(unsigned long long)arg1;
- (id)typesRankedList;

@end
