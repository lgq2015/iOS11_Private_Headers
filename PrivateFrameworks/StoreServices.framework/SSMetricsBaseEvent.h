/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (nonatomic, retain) NSString *pageContext;
@property (nonatomic, retain) NSString *pageDescription;
@property (nonatomic) unsigned long long pageID;
@property (nonatomic, retain) NSString *pageType;
@property (nonatomic, retain) NSString *pageURL;
@property (nonatomic, retain) NSNumber *pixelRatio;
@property (nonatomic, retain) NSNumber *screenHeight;
@property (nonatomic, retain) NSNumber *screenWidth;
@property (nonatomic, retain) NSNumber *windowHeight;
@property (nonatomic, retain) NSString *windowOrientation;
@property (nonatomic, retain) NSNumber *windowWidth;

- (id)description;
- (id)init;
- (bool)isBlacklistedByConfiguration:(id)arg1;
- (id)pageContext;
- (id)pageDescription;
- (unsigned long long)pageID;
- (id)pageType;
- (id)pageURL;
- (id)pixelRatio;
- (id)screenHeight;
- (id)screenWidth;
- (void)setPageContext:(id)arg1;
- (void)setPageDescription:(id)arg1;
- (void)setPageID:(unsigned long long)arg1;
- (void)setPageType:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setPixelRatio:(id)arg1;
- (void)setScreenHeight:(id)arg1;
- (void)setScreenWidth:(id)arg1;
- (void)setWindowHeight:(id)arg1;
- (void)setWindowOrientation:(id)arg1;
- (void)setWindowWidth:(id)arg1;
- (id)windowHeight;
- (id)windowOrientation;
- (id)windowWidth;

@end
