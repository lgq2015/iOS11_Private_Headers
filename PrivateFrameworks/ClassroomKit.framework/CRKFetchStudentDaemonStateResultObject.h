/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchStudentDaemonStateResultObject : CATTaskResultObject {
    NSString * _stateDescription;
}

@property (nonatomic, copy) NSString *stateDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setStateDescription:(id)arg1;
- (id)stateDescription;

@end
