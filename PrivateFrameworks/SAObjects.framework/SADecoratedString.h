/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADecoratedString : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *regions;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)decoratedString;
+ (id)decoratedStringWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)regions;
- (void)setRegions:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)siriui_attributedStringValueWithAttribute:(id)arg1 value:(id)arg2 forRegionsWithProperty:(id)arg3;
- (void)siriui_enumeratePropertyRangesUsingBlock:(id /* block */)arg1;
- (void)siriui_enumerateRangesOfRegionsWithProperty:(id)arg1 usingBlock:(id /* block */)arg2;

@end
