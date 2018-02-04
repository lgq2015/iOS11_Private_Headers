/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMApplicationData : NSObject <HFPrettyDescription, HFStateDumpSerializable> {
    NSSet * _allowedObjectClasses;
    NSMutableDictionary * _applicationData;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly, copy) NSArray *allValues;
@property (nonatomic, retain) NSSet *allowedObjectClasses;
@property (nonatomic, retain) NSMutableDictionary *applicationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)allKeys;
- (id)allValues;
- (id)allowedObjectClasses;
- (id)applicationData;
- (id)dictionary;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithContentsOfDictionary:(id)arg1 allowedObjectClasses:(id)arg2;
- (bool)isAllowedClassForObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setAllowedObjectClasses:(id)arg1;
- (void)setApplicationData:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
