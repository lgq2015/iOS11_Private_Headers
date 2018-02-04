/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *apgId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *orthography;
@property (readonly) Class superclass;
@property (nonatomic) long long tokenOffset;
@property (nonatomic, copy) NSArray *ttsPronunciations;
@property (nonatomic, copy) NSString *ttsVersion;

+ (id)pronunciationData;
+ (id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2;

- (id)apgId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (id)orthography;
- (void)setApgId:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOrthography:(id)arg1;
- (void)setTokenOffset:(long long)arg1;
- (void)setTtsPronunciations:(id)arg1;
- (void)setTtsVersion:(id)arg1;
- (long long)tokenOffset;
- (id)ttsPronunciations;
- (id)ttsVersion;

@end
