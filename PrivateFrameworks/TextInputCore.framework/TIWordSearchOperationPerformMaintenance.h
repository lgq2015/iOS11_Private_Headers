/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationPerformMaintenance : TIWordSearchOperation {
    TIMecabraWrapper * _mecabraWrapper;
}

@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;

- (void)dealloc;
- (id)initWithMecabraWrapper:(id)arg1;
- (id)mecabraWrapper;
- (void)perform;
- (void)setMecabraWrapper:(id)arg1;

@end
