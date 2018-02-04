/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManagerKeyboardContext : NSObject {
    TIKeyboardState * _currentState;
    TIKeyboardOutput * _output;
    TIRevisionHistory * _revisionHistory;
}

@property (nonatomic, readonly) TIKeyboardState *currentState;
@property (nonatomic, readonly) TIKeyboardOutput *output;
@property (nonatomic, retain) TIRevisionHistory *revisionHistory;

- (void)acceptCandidate:(id)arg1;
- (void)clearInputForMarkedText;
- (id)currentState;
- (void)dealloc;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)deleteForward:(unsigned long long)arg1;
- (void)deleteHandwritingStrokes:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (id)output;
- (id)revisionHistory;
- (void)setRevisionHistory:(id)arg1;
- (void)unmarkText:(id)arg1;

@end
