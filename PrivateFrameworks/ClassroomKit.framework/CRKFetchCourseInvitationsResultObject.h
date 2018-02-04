/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject {
    NSArray * _courseInvitations;
}

@property (nonatomic, retain) NSArray *courseInvitations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseInvitations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCourseInvitations:(id)arg1;

@end
