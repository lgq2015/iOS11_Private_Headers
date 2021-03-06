/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationCancelLastAcceptedCandidate : TIWordSearchOperation {
    TIMecabraWrapper * _mecabraWrapper;
}

@property (nonatomic, retain) TIMecabraWrapper *mecabraWrapper;

- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1;
- (id)mecabraWrapper;
- (void)perform;
- (void)setMecabraWrapper:(id)arg1;

@end
