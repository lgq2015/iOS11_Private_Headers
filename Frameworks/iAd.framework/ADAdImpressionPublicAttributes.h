/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {
    NSString * _accessibilityLabel;
    long long  _adPrivacyMarkPosition;
    NSURL * _audioURL;
    NSString * _batchResponseIdentifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    NSString * _contentString;
    NSURL * _contentURL;
    NSString * _descriptionForLCD;
    NSArray * _excludeTags;
    bool  _hasAction;
    NSString * _headlineForLCD;
    struct CGSize { 
        double width; 
        double height; 
    }  _landscapeSize;
    NSURL * _logoImageURL;
    NSArray * _matchClauses;
    long long  _maximumPretapRequestCount;
    double  _minimumIntervalBetweenPresentations;
    NSDictionary * _nativeMediaCreativeMetadata;
    NSArray * _nativeMetadata;
    struct CGSize { 
        double width; 
        double height; 
    }  _portraitSize;
    bool  _requiresMRAID;
    double  _skipThreshold;
    NSURL * _staticImageURL;
    NSDictionary * _transparencyDetails;
    bool  _unbranded;
    NSString * _uniqueIdentifier;
    NSArray * _videoAssets;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) long long adPrivacyMarkPosition;
@property (nonatomic, retain) NSURL *audioURL;
@property (nonatomic, copy) NSString *batchResponseIdentifier;
@property (nonatomic) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic, retain) NSString *contentString;
@property (nonatomic, retain) NSURL *contentURL;
@property (nonatomic, copy) NSString *descriptionForLCD;
@property (nonatomic, retain) NSArray *excludeTags;
@property (nonatomic) bool hasAction;
@property (nonatomic, copy) NSString *headlineForLCD;
@property (nonatomic) struct CGSize { double x1; double x2; } landscapeSize;
@property (nonatomic, retain) NSURL *logoImageURL;
@property (nonatomic, retain) NSArray *matchClauses;
@property (nonatomic) long long maximumPretapRequestCount;
@property (nonatomic) double minimumIntervalBetweenPresentations;
@property (nonatomic, retain) NSDictionary *nativeMediaCreativeMetadata;
@property (nonatomic, retain) NSArray *nativeMetadata;
@property (nonatomic) struct CGSize { double x1; double x2; } portraitSize;
@property (nonatomic) bool requiresMRAID;
@property (nonatomic) double skipThreshold;
@property (nonatomic, retain) NSURL *staticImageURL;
@property (nonatomic, retain) NSDictionary *transparencyDetails;
@property (nonatomic) bool unbranded;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSArray *videoAssets;

+ (bool)supportsSecureCoding;

- (id)accessibilityLabel;
- (long long)adPrivacyMarkPosition;
- (id)audioURL;
- (id)batchResponseIdentifier;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)contentString;
- (id)contentURL;
- (void)dealloc;
- (id)description;
- (id)descriptionForLCD;
- (void)encodeWithCoder:(id)arg1;
- (id)excludeTags;
- (bool)hasAction;
- (id)headlineForLCD;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { double x1; double x2; })landscapeSize;
- (id)logoImageURL;
- (id)matchClauses;
- (long long)maximumPretapRequestCount;
- (double)minimumIntervalBetweenPresentations;
- (id)nativeMediaCreativeMetadata;
- (id)nativeMetadata;
- (struct CGSize { double x1; double x2; })portraitSize;
- (bool)requiresMRAID;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAdPrivacyMarkPosition:(long long)arg1;
- (void)setAudioURL:(id)arg1;
- (void)setBatchResponseIdentifier:(id)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentString:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDescriptionForLCD:(id)arg1;
- (void)setExcludeTags:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHeadlineForLCD:(id)arg1;
- (void)setLandscapeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLogoImageURL:(id)arg1;
- (void)setMatchClauses:(id)arg1;
- (void)setMaximumPretapRequestCount:(long long)arg1;
- (void)setMinimumIntervalBetweenPresentations:(double)arg1;
- (void)setNativeMediaCreativeMetadata:(id)arg1;
- (void)setNativeMetadata:(id)arg1;
- (void)setPortraitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRequiresMRAID:(bool)arg1;
- (void)setSkipThreshold:(double)arg1;
- (void)setStaticImageURL:(id)arg1;
- (void)setTransparencyDetails:(id)arg1;
- (void)setUnbranded:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVideoAssets:(id)arg1;
- (double)skipThreshold;
- (id)staticImageURL;
- (id)transparencyDetails;
- (bool)unbranded;
- (id)uniqueIdentifier;
- (id)videoAssets;

@end
