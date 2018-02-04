/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARCSpeechRecognitionResultStreamGlue : NSObject <_EARSpeechRecognitionResultStream> {
    struct EARCSpeechRecognitionResultStream { 
        void *ctx; 
        int (*DisposeContext)(); 
        int (*DidRecognizePartialResultTokens)(); 
        int (*DidFinishRecognitionWithError)(); 
        int (*DidRecognizeFinalResults)(); 
    }  _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithStream:(struct EARCSpeechRecognitionResultStream { void *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2 tokenSausage:(id)arg3 nBestChoices:(id)arg4;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;

@end
