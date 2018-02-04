/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCourseInvitation : NSObject <NSSecureCoding> {
    NSArray * _anchorCertificates;
    NSString * _courseDescription;
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _courseName;
    NSData * _instructorImageData;
    NSString * _instructorName;
}

@property (nonatomic, copy) NSArray *anchorCertificates;
@property (nonatomic, copy) NSString *courseDescription;
@property (nonatomic, copy) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *courseName;
@property (nonatomic, copy) NSData *instructorImageData;
@property (nonatomic, copy) NSString *instructorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorCertificates;
- (id)courseDescription;
- (id)courseIdentifier;
- (id)courseName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 anchorCertificates:(id)arg5;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 instructorImageData:(id)arg5 anchorCertificates:(id)arg6;
- (id)instructorImageData;
- (id)instructorName;
- (void)setAnchorCertificates:(id)arg1;
- (void)setCourseDescription:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setCourseName:(id)arg1;
- (void)setInstructorImageData:(id)arg1;
- (void)setInstructorName:(id)arg1;

@end
