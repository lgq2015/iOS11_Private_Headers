/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCourse : NSObject <NSSecureCoding> {
    NSString * _courseDescription;
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _courseName;
    CRKUser * _courseUser;
    NSDictionary * _instructorsByIdentifier;
    bool  _managed;
}

@property (nonatomic, copy) NSString *courseDescription;
@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *courseName;
@property (nonatomic, retain) CRKUser *courseUser;
@property (nonatomic, copy) NSDictionary *instructorsByIdentifier;
@property (getter=isManaged, nonatomic) bool managed;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseDescription;
- (id)courseIdentifier;
- (id)courseName;
- (id)courseUser;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 managed:(bool)arg2;
- (id)instructorsByIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCourse:(id)arg1;
- (bool)isManaged;
- (void)setCourseDescription:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setCourseName:(id)arg1;
- (void)setCourseUser:(id)arg1;
- (void)setInstructorsByIdentifier:(id)arg1;
- (void)setManaged:(bool)arg1;

@end
