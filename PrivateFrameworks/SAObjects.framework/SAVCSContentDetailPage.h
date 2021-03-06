/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVCSContentDetailPage : SAAceView

@property (nonatomic, copy) NSString *contentType;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSString *imagesJsonContentPayload;
@property (nonatomic) bool isEvod;
@property (nonatomic, copy) NSString *loadingText;
@property (nonatomic, copy) NSString *seasonId;
@property (nonatomic, copy) NSString *showId;
@property (nonatomic) bool userDriven;
@property (nonatomic, copy) NSString *utsId;

+ (id)contentDetailPage;
+ (id)contentDetailPageWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)imagesJsonContentPayload;
- (bool)isEvod;
- (id)loadingText;
- (id)seasonId;
- (void)setContentType:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImagesJsonContentPayload:(id)arg1;
- (void)setIsEvod:(bool)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setSeasonId:(id)arg1;
- (void)setShowId:(id)arg1;
- (void)setUserDriven:(bool)arg1;
- (void)setUtsId:(id)arg1;
- (id)showId;
- (bool)userDriven;
- (id)utsId;

@end
