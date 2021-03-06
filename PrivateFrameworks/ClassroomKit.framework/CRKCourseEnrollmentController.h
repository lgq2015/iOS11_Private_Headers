/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCourseEnrollmentController : NSObject <CATTaskOperationNotificationDelegate, CRKStudentDaemonProxyObserver> {
    NSArray * _activeCourseIdentifiers;
    NSArray * _activeInstructorIdentifiers;
    NSArray * _courseInvitations;
    NSArray * _courses;
    NSSet * _currentScreenObservers;
    CATRemoteTaskOperation * mActiveCoursesOperation;
    CATRemoteTaskOperation * mBrowseOperation;
    CRKStudentDaemonProxy * mDaemonProxy;
    <CRKCourseEnrollmentControllerDelegate> * mDelegate;
}

@property (nonatomic, copy) NSArray *activeCourseIdentifiers;
@property (nonatomic, copy) NSArray *activeInstructorIdentifiers;
@property (nonatomic, copy) NSArray *courseInvitations;
@property (nonatomic, copy) NSArray *courses;
@property (nonatomic, retain) NSSet *currentScreenObservers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeCourseIdentifiers;
- (id)activeInstructorIdentifiers;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)courseInvitations;
- (id)courseWithIdentifier:(id)arg1;
- (id)courses;
- (id)coursesWithInstructorIdentifier:(id)arg1;
- (id)currentScreenObservers;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)daemonProxyDidConnect:(id)arg1;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)dealloc;
- (void)fetchActiveCourses;
- (void)fetchActiveCoursesOperationDidFinish:(id)arg1;
- (void)fetchCourseInvitations;
- (void)fetchCourseInvitationsOperationDidFinish:(id)arg1;
- (void)fetchCourses;
- (void)fetchCoursesOperationDidFinish:(id)arg1;
- (void)fetchScreenObservers;
- (void)fetchScreenObserversDidFinish:(id)arg1;
- (void)fetchStoredCourses;
- (id)initWithDelegate:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 delegate:(id)arg2;
- (id)invitationWithCourseIdentifier:(id)arg1;
- (void)screenObserversHaveChanged:(id)arg1;
- (void)setActiveCourseIdentifiers:(id)arg1;
- (void)setActiveInstructorIdentifiers:(id)arg1;
- (void)setCourseInvitations:(id)arg1;
- (void)setCourses:(id)arg1;
- (void)setCurrentScreenObservers:(id)arg1;
- (void)startLongRunningOperations;
- (void)stopLongRunningOperations;
- (void)storeCourses;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;

@end
