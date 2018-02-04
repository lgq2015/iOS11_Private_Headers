/* made by EzioChiu.
 */

@protocol CVAPortraitVideoPipeline <CVAVideoPipeline>

@required

- (<CVADisparityPostprocessingCompletionDelegate> *)disparityPostprocessingCompletionDelegate;
- (<CVAMattingCompletionDelegate> *)mattingCompletionDelegate;
- (<CVAPortraitCompletionDelegate> *)portraitCompletionDelegate;
- (int)renderWithRequest:(id <CVAPortraitRequest>)arg1;
- (int)renderWithRequest:(void *)arg1 disparityPostprocessingCompletionHandler:(void *)arg2 mattingCompletionHandler:(void *)arg3 portraitCompletionHandler:(void *)arg4; // needs 4 arg types, found 22: <CVAPortraitRequest> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CVADisparityPostprocessingRequest *, <CVADisparityPostprocessingResult> *, void*, id /* block */, void*, void, id /* block */, CVAMattingRequest *, <CVAMattingResult> *, void*, id /* block */, void*, void, id /* block */, <CVAPortraitRequest> *, <CVAPortraitResult> *, void*
- (void)setDisparityPostprocessingCompletionDelegate:(id <CVADisparityPostprocessingCompletionDelegate>)arg1;
- (void)setMattingCompletionDelegate:(id <CVAMattingCompletionDelegate>)arg1;
- (void)setPortraitCompletionDelegate:(id <CVAPortraitCompletionDelegate>)arg1;

@end