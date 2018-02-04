/* made by EzioChiu.
 */

@protocol SFPunchout <NSObject>

@required

- (NSString *)actionTarget;
- (NSString *)bundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSString *)label;
- (NSString *)name;
- (void)setActionTarget:(NSString *)arg1;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setUrls:(NSArray *)arg1;
- (void)setUserActivityData:(SFUserActivityData *)arg1;
- (NSArray *)urls;
- (SFUserActivityData *)userActivityData;

@end