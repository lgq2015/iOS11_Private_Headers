/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKFaceDetectOperation : BKPresenceDetectOperation {
    bool  _highPriority;
    long long  _mode;
    double  _timeout;
}

@property (nonatomic) <BKFaceDetectOperationDelegate> *delegate;
@property (nonatomic) bool highPriority;
@property (nonatomic) long long mode;
@property (nonatomic) double timeout;

- (bool)highPriority;
- (id)initWithDevice:(id)arg1;
- (long long)mode;
- (void)setHighPriority:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setTimeout:(double)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (double)timeout;

@end
