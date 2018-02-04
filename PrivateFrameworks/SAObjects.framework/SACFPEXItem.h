/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACFPEXItem : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *itemSource;
@property (nonatomic, copy) NSNumber *score;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (readonly) Class superclass;

+ (id)item;
+ (id)itemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)itemSource;
- (id)score;
- (void)setIdentifier:(id)arg1;
- (void)setItemSource:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (id)sourceIdentifier;

@end
