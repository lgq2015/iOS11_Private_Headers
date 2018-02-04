/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIWordSearchOperationContextAcceptCandidate : TIWordSearchOperation {
    void * _mecabraCandidate;
    TIMecabraEnvironment * _mecabraEnvironment;
    bool  _partialCandidate;
}

@property (nonatomic, retain) TIMecabraEnvironment *mecabraEnvironment;
@property (getter=isPartialCandidate, nonatomic) bool partialCandidate;

- (void)cancel;
- (void)dealloc;
- (id)initWithWordSearch:(id)arg1 mecabraCandidate:(void*)arg2 isPartial:(bool)arg3;
- (bool)isPartialCandidate;
- (id)mecabraEnvironment;
- (void)perform;
- (void)setMecabraEnvironment:(id)arg1;
- (void)setPartialCandidate:(bool)arg1;

@end
