/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKInstructor : NSObject <NSSecureCoding> {
    NSString * _courseName;
    NSString * _displayName;
    NSData * _imageData;
    DMFControlSessionIdentifier * _sessionIdentifier;
    NSString * _userIdentifier;
}

@property (nonatomic, copy) NSString *courseName;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, copy) DMFControlSessionIdentifier *sessionIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseName;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstructor:(id)arg1;
- (id)sessionIdentifier;
- (void)setCourseName:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)userIdentifier;

@end