/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceAppsInfo : NSObject <NSSecureCoding> {
    NSArray * _appsList;
    NSString * _appsURL;
}

@property (nonatomic, retain) NSArray *appsList;
@property (nonatomic, retain) NSString *appsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appsList;
- (id)appsURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAppsList:(id)arg1;
- (void)setAppsURL:(id)arg1;

@end
