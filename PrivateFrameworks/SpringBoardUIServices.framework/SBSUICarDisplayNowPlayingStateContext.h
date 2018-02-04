/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBSUICarDisplayNowPlayingStateContext : NSObject <NSSecureCoding> {
    NSString * _associatedBundleID;
    NSString * _stateName;
}

@property (nonatomic, readonly, copy) NSString *animationName;
@property (nonatomic, copy) NSString *associatedBundleID;
@property (nonatomic, copy) NSString *stateName;

+ (id)contextWithState:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)animationName;
- (id)associatedBundleID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)setAssociatedBundleID:(id)arg1;
- (void)setStateName:(id)arg1;
- (id)stateName;

@end
