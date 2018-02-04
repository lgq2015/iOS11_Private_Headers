/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchUserImageRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _userIdentifier;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end
