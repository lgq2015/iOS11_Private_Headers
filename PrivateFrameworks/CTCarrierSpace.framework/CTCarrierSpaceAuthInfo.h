/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

@interface CTCarrierSpaceAuthInfo : NSObject <NSSecureCoding> {
    NSString * _accessToken;
    NSDate * _expiresAt;
    NSString * _refreshToken;
    bool  _shouldCache;
}

@property (nonatomic, retain) NSString *accessToken;
@property (nonatomic, retain) NSDate *expiresAt;
@property (nonatomic, retain) NSString *refreshToken;
@property (nonatomic) bool shouldCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessToken;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresAt;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)refreshToken;
- (void)setAccessToken:(id)arg1;
- (void)setExpiresAt:(id)arg1;
- (void)setRefreshToken:(id)arg1;
- (void)setShouldCache:(bool)arg1;
- (bool)shouldCache;

@end
