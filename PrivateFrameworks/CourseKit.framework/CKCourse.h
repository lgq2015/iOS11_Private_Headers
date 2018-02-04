/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CourseKit.framework/CourseKit
 */

@interface CKCourse : NSObject {
    NSDictionary * _sharedCourse;
}

@property (nonatomic, readonly) UIImage *courseCover;
@property (nonatomic, readonly, copy) NSString *courseID;
@property (nonatomic, readonly) NSURL *courseURL;
@property (nonatomic, readonly) long long enrollmentType;
@property (nonatomic, readonly, copy) NSString *institutionName;
@property (nonatomic, readonly, copy) NSString *longName;
@property (nonatomic, readonly) NSNumber *managedClassID;
@property (nonatomic, copy) NSDictionary *sharedCourse;
@property (nonatomic, readonly, copy) NSString *shortName;

+ (void)initialize;
+ (id)sharedCoursePropertiesToFetch;

- (void).cxx_destruct;
- (id)courseCover;
- (id)courseID;
- (id)courseURL;
- (long long)enrollmentType;
- (id)initWithSharedCourse:(id)arg1;
- (id)institutionName;
- (id)longName;
- (id)managedClassID;
- (void)setSharedCourse:(id)arg1;
- (id)sharedCourse;
- (id)shortName;

@end
