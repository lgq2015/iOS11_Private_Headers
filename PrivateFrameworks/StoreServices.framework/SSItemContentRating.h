/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemContentRating : NSObject <NSCopying, SSXPCCoding> {
    NSMutableDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *contentRatingDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExplicitContent, nonatomic, readonly) bool explicitContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long rank;
@property (nonatomic, copy) NSString *ratingDescription;
@property (nonatomic, copy) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;
@property (nonatomic, readonly) SSItemArtworkImage *ratingSystemLogo;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic) bool shouldHideWhenRestricted;
@property (readonly) Class superclass;

+ (long long)ratingSystemFromString:(id)arg1;
+ (id)stringForRatingSystem:(long long)arg1;

- (bool)_isRatingSystemForApps:(long long)arg1;
- (bool)_isRatingSystemForMovies:(long long)arg1;
- (bool)_isRatingSystemForMusic:(long long)arg1;
- (bool)_isRatingSystemForTV:(long long)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)_setValueCopy:(id)arg1 forProperty:(id)arg2;
- (id)contentRatingDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isExplicitContent;
- (bool)isRestricted;
- (long long)rank;
- (id)ratingDescription;
- (id)ratingLabel;
- (long long)ratingSystem;
- (id)ratingSystemLogo;
- (void)setRank:(long long)arg1;
- (void)setRatingDescription:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (void)setRatingSystem:(long long)arg1;
- (void)setShouldHideWhenRestricted:(bool)arg1;
- (bool)shouldHideWhenRestricted;
- (id)valueForProperty:(id)arg1;

@end
