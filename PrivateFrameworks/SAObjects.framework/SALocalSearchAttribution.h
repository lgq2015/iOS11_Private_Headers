/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchAttribution : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *attributionId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urls;
@property (nonatomic) long long version;

+ (id)attribution;
+ (id)attributionWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttributionId:(id)arg1;
- (void)setUrls:(id)arg1;
- (void)setVersion:(long long)arg1;
- (id)urls;
- (long long)version;

@end
