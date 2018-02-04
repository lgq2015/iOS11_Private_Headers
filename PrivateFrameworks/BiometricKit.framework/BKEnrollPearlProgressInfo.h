/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKEnrollPearlProgressInfo : NSObject {
    NSArray * _enrolledPoses;
    long long  _percentageCompleted;
}

@property (nonatomic, retain) NSArray *enrolledPoses;
@property (nonatomic) long long percentageCompleted;

- (void).cxx_destruct;
- (id)dictionary;
- (id)enrolledPoses;
- (id)initFromDictionary:(id)arg1;
- (id)initFromEnrollInfo:(const struct { unsigned short x1; unsigned short x2; struct { unsigned short x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; unsigned short x4; unsigned short x5; unsigned char x6[0]; }*)arg1;
- (id)initWithPercents:(long long)arg1;
- (long long)percentageCompleted;
- (void)setEnrolledPoses:(id)arg1;
- (void)setPercentageCompleted:(long long)arg1;

@end
