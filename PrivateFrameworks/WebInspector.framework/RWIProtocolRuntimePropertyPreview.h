/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface RWIProtocolRuntimePropertyPreview : RWIProtocolJSONObject

@property (nonatomic) bool internal;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long subtype;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, retain) RWIProtocolRuntimeObjectPreview *valuePreview;

- (id)initWithName:(id)arg1 type:(long long)arg2;
- (bool)internal;
- (id)name;
- (void)setInternal:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSubtype:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (void)setValuePreview:(id)arg1;
- (long long)subtype;
- (long long)type;
- (id)value;
- (id)valuePreview;

@end
