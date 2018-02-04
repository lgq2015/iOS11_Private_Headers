/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mediaItemProperty;
@property (nonatomic, copy) NSString *operation;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)setQueueQueueFilter;
+ (id)setQueueQueueFilterWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaItemProperty;
- (id)operation;
- (void)setMediaItemProperty:(id)arg1;
- (void)setOperation:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
