/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerWrapper : TIKeyboardInputManagerStub {
    TIKeyboardInputManagerBase * _inputManager;
    <TIKeyboardInputManagerLogging> * _logger;
}

@property (nonatomic, retain) TIKeyboardInputManagerBase *inputManager;
@property (nonatomic, retain) <TIKeyboardInputManagerLogging> *logger;

- (void)_updateKeyboardOutput:(id)arg1 withSecureCandidatePayload:(id)arg2;
- (id)acceptSecureCandidate:(id)arg1 keyboardState:(id)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)candidateRejected:(id)arg1;
- (void)dealloc;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(id /* block */)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleKeyboardState:(id)arg1;
- (id)init;
- (id)inputManager;
- (void)lastAcceptedCandidateCorrected;
- (id)logger;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(id /* block */)arg3;
- (void)setInputManager:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)textAccepted:(id)arg1;
- (void)writeTypologyLogWithCompletionHandler:(id /* block */)arg1;

@end
