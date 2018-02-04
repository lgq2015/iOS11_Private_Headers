/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardParsedDictionaryResultBuilder : NSObject <CNVCardParsedResultBuilder> {
    NSMutableDictionary * _dictionaryRep;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)factory;

- (void).cxx_destruct;
- (id)build;
- (bool)canSetValueForProperty:(id)arg1;
- (id)init;
- (bool)setImageData:(id)arg1;
- (bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (void)setUnknownProperties:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (id)validCountryCodes;
- (id)valueForProperty:(id)arg1;

@end
