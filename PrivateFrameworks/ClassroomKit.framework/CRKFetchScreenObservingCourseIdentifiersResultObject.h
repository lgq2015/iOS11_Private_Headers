/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchScreenObservingCourseIdentifiersResultObject : CATTaskResultObject {
    NSSet * _currentObservers;
}

@property (nonatomic, copy) NSSet *currentObservers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentObservers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentObservers:(id)arg1;

@end
