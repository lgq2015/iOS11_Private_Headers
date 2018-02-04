/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKMatchPearlOperation : BKMatchOperation {
    bool  _longTimeout;
}

@property (nonatomic) <BKMatchPearlOperationDelegate> *delegate;
@property (nonatomic) bool longTimeout;

- (bool)longTimeout;
- (id)optionsDictionaryWithError:(id*)arg1;
- (void)setLongTimeout:(bool)arg1;
- (bool)startNewMatchAttemptWithError:(id*)arg1;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;

@end
