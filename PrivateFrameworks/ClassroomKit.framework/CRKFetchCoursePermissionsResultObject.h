/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject {
    NSDictionary * _permissionsByFeature;
}

@property (nonatomic, copy) NSDictionary *permissionsByFeature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)permissionsByFeature;
- (void)setPermissionsByFeature:(id)arg1;

@end
