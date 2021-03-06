/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIClassroomVisibilityArbitrator : NSObject <CRKCourseEnrollmentControllerDelegate> {
    CRKCourseEnrollmentController * _enrollmentController;
    bool  _previouslyEnrolled;
    unsigned long long  _visibilityState;
    id /* block */  _visibilityStateChangeHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long visibilityState;
@property (nonatomic, copy) id /* block */ visibilityStateChangeHandler;

- (void).cxx_destruct;
- (void)enrollmentControllerDidUpdateCourses:(id)arg1;
- (void)enrollmentControllerDidUpdateInvitations:(id)arg1;
- (id)init;
- (void)reloadVisibilityState;
- (void)setVisibilityState:(unsigned long long)arg1;
- (void)setVisibilityStateChangeHandler:(id /* block */)arg1;
- (unsigned long long)visibilityState;
- (id /* block */)visibilityStateChangeHandler;

@end
