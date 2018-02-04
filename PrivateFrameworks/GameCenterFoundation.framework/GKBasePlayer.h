/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKBasePlayer : NSObject

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, retain) NSString *playerID;

+ (bool)supportsSecureCoding;

- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)playerID;

@end
