/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingCompositionController : RCCompositionController {
    NSURL * _savedRecordingURI;
}

@property (nonatomic, readonly) NSURL *savedRecordingURI;

+ (id)compositionControllerForCreatingSavedRecording;
+ (id)compositionControllerForExistingSavedRecordingURI:(id)arg1;

- (void).cxx_destruct;
- (void)activeRecordingSessionWillFinish;
- (void)beginRecordingWithInputDevice:(id)arg1 captureInsertionRange:(struct { double x1; double x2; })arg2 isUndoable:(bool)arg3 isOverdub:(bool)arg4 sessionPreparedBlock:(id /* block */)arg5 sessionFinishedBlock:(id /* block */)arg6;
- (void)deleteCompositionFromFileSystemAndDatabase;
- (id)initWithComposition:(id)arg1;
- (id)initWithExistingSavedRecordingURI:(id)arg1;
- (void)performCompositionRedoWithRedoItem:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performCompositionUndoWithCompletionBlock:(id /* block */)arg1;
- (id)savedRecordingURI;
- (void)setComposition:(id)arg1;

@end
