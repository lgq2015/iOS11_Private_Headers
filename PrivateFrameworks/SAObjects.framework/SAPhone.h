/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhone : AceObject <SAAceComparable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *favoriteFacetime;
@property (nonatomic, copy) NSNumber *favoriteFacetimeAudio;
@property (nonatomic, copy) NSNumber *favoriteVoice;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *number;
@property (nonatomic, copy) NSNumber *pseudo;
@property (readonly) Class superclass;

+ (id)phone;
+ (id)phoneWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)favoriteFacetime;
- (id)favoriteFacetimeAudio;
- (id)favoriteVoice;
- (id)groupIdentifier;
- (id)label;
- (id)number;
- (id)pseudo;
- (void)setFavoriteFacetime:(id)arg1;
- (void)setFavoriteFacetimeAudio:(id)arg1;
- (void)setFavoriteVoice:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setPseudo:(id)arg1;

@end
