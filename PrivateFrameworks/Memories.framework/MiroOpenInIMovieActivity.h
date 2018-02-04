/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroOpenInIMovieActivity : UIActivity {
    NSArray * _activityItems;
    UIDocumentInteractionController * _documentInteractionController;
}

@property (nonatomic, retain) NSArray *activityItems;
@property (nonatomic, retain) UIDocumentInteractionController *documentInteractionController;

+ (long long)activityCategory;

- (void).cxx_destruct;
- (void)activityDidFinish:(bool)arg1;
- (id)activityImage;
- (id)activityItems;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)documentInteractionController;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityItems:(id)arg1;
- (void)setDocumentInteractionController:(id)arg1;

@end
