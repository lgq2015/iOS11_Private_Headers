/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWLWatchListSearchResult : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *canonicalId;
@property (nonatomic, copy) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUIImageResource *evodFeaturingImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic) bool isEvod;
@property (nonatomic, copy) NSString *network;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, copy) NSString *shelfType;
@property (nonatomic, copy) NSString *studio;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)watchListSearchResult;
+ (id)watchListSearchResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)canonicalId;
- (id)contentType;
- (id)encodedClassName;
- (id)evodFeaturingImage;
- (id)groupIdentifier;
- (id)image;
- (bool)isEvod;
- (id)network;
- (id)releaseDate;
- (void)setCanonicalId:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setEvodFeaturingImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsEvod:(bool)arg1;
- (void)setNetwork:(id)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setShelfType:(id)arg1;
- (void)setStudio:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shelfType;
- (id)studio;
- (id)title;

@end
