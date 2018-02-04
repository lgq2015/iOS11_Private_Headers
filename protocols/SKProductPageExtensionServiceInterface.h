/* made by EzioChiu.
 */

@protocol SKProductPageExtensionServiceInterface <NSObject>

@required

- (void)lookupItemDidLoad:(SSLookupItem *)arg1 parameters:(NSDictionary *)arg2;
- (void)setAskToBuy:(bool)arg1;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setPromptString:(NSString *)arg1;
- (void)setRightBarButtonTitle:(NSString *)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setupWithClientBundleID:(NSString *)arg1 bagType:(long long)arg2;

@end
