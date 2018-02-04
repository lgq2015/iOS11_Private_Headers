/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BiometricKitStatistics : NSObject {
    double  _area;
    bool  _badImagePerFingerDown;
    unsigned int  _badImagesPerEnroll;
    bool  _enrolling;
    NSDate * _enrollmentStarTime;
    bool  _fingerOn;
    unsigned int  _joinEvents;
    unsigned int  _otherClustersAdditions;
    unsigned int  _primaryClusterAdditions;
    double  _primaryClusterArea;
    unsigned int  _primaryClusterFailedAdditions;
    unsigned int  _rejectedImagesPerEnroll;
    unsigned int  _touchesPerEnroll;
}

+ (id)statistics;

- (void).cxx_destruct;
- (void)enroll:(int)arg1;
- (void)enrollProgress:(id)arg1;
- (void)enrollResult:(id)arg1 componentSet:(struct { int x1; int x2; struct { /* ? */ } **x3; int x4; int x5; int x6; int x7; int x8; struct { /* ? */ } **x9; short x10; short x11; int x12; bool x13; }*)arg2;
- (id)init;
- (void)initEnrollmentValues;
- (void)statusMessage:(unsigned int)arg1;

@end
