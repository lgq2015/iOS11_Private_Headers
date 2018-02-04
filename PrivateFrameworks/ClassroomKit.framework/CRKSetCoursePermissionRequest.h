/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSetCoursePermissionRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _feature;
    NSNumber * _permission;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, retain) NSString *feature;
@property (nonatomic, retain) NSNumber *permission;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)feature;
- (id)initWithCoder:(id)arg1;
- (id)permission;
- (void)setCourseIdentifier:(id)arg1;
- (void)setFeature:(id)arg1;
- (void)setPermission:(id)arg1;

@end
